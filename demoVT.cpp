#include <iostream>
using namespace std;
class Matrix;
class Vector;

class Vector
{
private:
	int n;
	double v[20];
public:
	void nhapVT();
	friend void inVT(const Vector &v);
	friend Vector tich(const Matrix &m, const Vector &v);
};
class Matrix
{
private:
	int n;
	double a[20][20];
public:
	void nhapMT();
	friend void inMT(const Matrix &m);
	friend Vector tich(const Matrix &m, const Vector &v);
};

void Vector::nhapVT()
{
	cout<<"\n NHAP CAP VECTOR:";
	cin>>n;
	for(int i =1; i<=n;i++)
	{
		cout<<"\n Phan tu thu "<<i<<":";
		cin>>v[i];
	}
}
void Matrix::nhapMT()
{
	cout<<"\n CAP MA TRAN:";
	cin>>n;
	for(int i=1; i<=n;i++)
		for(int j=1; j<=n;j++)
		{
			cout<<"\n Phan tu "<<"a["<<i<<"]"<<"["<<j<<"]"<<":";
			cin>>a[i][j];
		}
}
//Cai dat ham friend tich()
Vector tich(const Matrix &m, const Vector &v)
{
	Vector VT;
	int n = m.n;
	if(n!=v.n)
	return v;
	VT.n = n;
	for(int i=1; i<=n;i++)
	{
		VT.v[i]=0;
		for(int j=1; j<=n; j++)
		VT.v[i] +=v.v[j]*m.a[i][j];
	}
	return VT;
}
void inVT(const Vector &v)
{
	cout<<"\n";
	for(int i=1; i<=v.n;i++)
		cout<<v.v[i]<<" ";
}
void inMT(const Matrix &m)
{
	cout<<"\n";
	for(int i=1; i<=m.n;i++)
	{
		cout<<"\n";
		for(int j=1; j<=m.n;j++)
			cout<<m.a[i][j]<<" ";
	}
}
int main()
{
	Matrix m; Vector v,y;
	v.nhapVT();
	m.nhapMT();
	cout<<"\n\n";
	cout<<"Ma tran A";
	inMT(m);
	cout<<"\n\n";
	cout<<"\nVector v";
	inVT(v);
	cout<<"\n\n";
	y = tich(m,v);
	cout<<"\n\n Tich v*A"<<endl;
	inVT(y);
	cout<<"\n";
	return 0;
}



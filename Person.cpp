#include "FootballClub.cpp"

class Person:public FootballClub  {
	private : 
		int idCardNumber ;
		string fullName ;
		int age ;
		long long salary  ;
	public :
		int getIDCardNumber ()  {
		  return this->idCardNumber ;
		} 
		string getFullName() {
		return this->fullName ;	
		} 
		int getAge() {
			return this->age ;
		} 
		int getSalary() {
			return this->salary ;
		} 
		
		void setIDCardNumber (int ID) {
			this->idCardNumber=ID ;
		} 
		void setFullName (string name) {
			this->fullName=name ;
		} 
		void setAge(float age) {
			this->age=age ;
		} 
		void setSalary(long long salary) {
			this->salary=salary ;
		} 

		Person() {
			
		}
		
		Person(string idMembers , string contractTerm , int idCardNumber , string fullName , int age , long long salary) : FootballClub(idMembers,contractTerm) {
			this->idCardNumber = idCardNumber;
			this->fullName = fullName;
			this->age = age;
			this->salary = salary;
		}
		
		void input () {
		FootballClub::input() ;
		cout<<"\nIdentity card number : " ;
		cin>>this->idCardNumber ;
		cin.ignore();
		cout << "\nFull name : ";
		getline(cin,this->fullName);
		string s = "";
		stringstream st(fullName);
		string token;
		while(st>>token) {
		s += toupper(token[0]);
		for(int i=1 ; i<token.length() ; i++) {
	   		s += tolower(token[i]);
		}
			s += " ";
		}
		s.erase(s.length()-1);
		fullName=s ;
		cout<<"\nAge :" ;
		cin>>this->age ;
		cout<<"\nSalary :" ;
		cin>>this->salary ;
		
		} 
		void output() {
		FootballClub::output() ; 
		cout<<"\nCardNumber :"<<this->idCardNumber<<"\n\n";
		cout<<"Full Name :" <<this->fullName<<"\n\n" ;
		cout<<"Age :" <<this->age<<"\n\n" ;
		cout<<"Salary :"<<this->salary<<"\n\n" ;
		} 
	   
};

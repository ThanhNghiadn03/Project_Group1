class Goalkeeper:public Player
{
	private:
	int reflexesAble;
	int numOfKeptCleanSheet;
	int goalSaveRate;
	public:
	void setReflexesAble(int reflexesAble)
	{
	    this->reflexesAble=reflexesAble;
	}
	int getReflexesAble()
	{
	    return this->reflexesAble;
	}
	void setNumOfKeptCleanSheet(int numOfKeptCleanSheet)
	{
	    this->numOfKeptCleanSheet=numOfKeptCleanSheet;
	}
	int getNumOfKeptCleanSheet()
	{
	    return this->numOfKeptCleanSheet;
	}
	void setGoalSaveRate(int goalSaveRate)
	{
	    this->goalSaveRate=goalSaveRate;
	}
	int getGoalSaveRate()
	{
	    return this->goalSaveRate;
	}
	Goalkeeper()
	{
		
	} 
	Goalkeeper(string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary,int numberOfShirt,int Appearance,int numOfYellowCard,int numOfRedCard,int techniqueStat,int assistNumInSeason,int goalsNumInSeason,float height,float weight,string injury,string position, long long value , int reflexesAble,int numOfKeptCleanSheet,int goalSaveRate):Player(idMembers,contractTerm,idCardNumber,fullName,age,salary,numberOfShirt,Appearance,numOfYellowCard,numOfRedCard,techniqueStat,assistNumInSeason,goalsNumInSeason,height,weight,injury,position,value) {
		this->reflexesAble=reflexesAble;
		this->numOfKeptCleanSheet=numOfKeptCleanSheet;
		this->goalSaveRate=goalSaveRate ;
	}
	void input()
	{
		Player::input();
		cout<<"\nEnter the reflexesAble (0-10) : ";
		cin >> this->reflexesAble;
		cout<<"\nEnter the numOfKeptCleanSheet (games) : ";
		cin>>this->numOfKeptCleanSheet;
		cout<<"\nEnter the goalSaveRate (0-10) : ";
		cin>>this->goalSaveRate;
	}
	void output()
	{
		Player::output();
		cout<<"\nReflexesAble: "<<this->reflexesAble<<"/10"<<"\n\n"<<"NumOfKeptCleanSheet: "
		<<this->numOfKeptCleanSheet<<" games "<<"\n\n"<<"GoalSaveRate: "<<this->goalSaveRate<<"/10"<<endl;
	}
	string mission()
	{
		string a="\nThe main task is to keep a clean sheet\n";
		return a;
		string b="\nYou should also be good at playing with your feet to help with ball rotation\n";
		return b;
	}
	long long calculateWage()
	{
		long long bonus,wage;
		if(this->goalSaveRate>=7 ||this->reflexesAble >=7)
		{
			bonus=3000000;
		}else if(this->goalSaveRate>=5 ||this->reflexesAble>=5)
		{
			bonus=1800000;
		}else
		{
			bonus=0;
		}
		for(int i=1;i<this->numOfKeptCleanSheet;i++)
		{
			bonus=100000;
		}
		wage=bonus+this->getSalary();
		cout<<"\nThe total bonus is:";
		return wage;
	}
	bool signingCondition() {

	}
	void riskOfTerminateContract()
	{
		if(this->goalSaveRate<4 || this->reflexesAble <=4 || this->numOfKeptCleanSheet<6)
		{
			cout<<"\nFull contract termination is possible\n";
		}else if(this->goalSaveRate<6 || this->reflexesAble <= 6 || this->numOfKeptCleanSheet<8)
		{
			cout<<"\nContract termination is unlikely\n";
		}else
		{
			cout<<"\nTermination of the contract cannot happen\n";
		}
	}
	void oppRenewContract()
	{
		if(this->goalSaveRate>=8 || this->reflexesAble>=8 || this->numOfKeptCleanSheet>15)
		{
			cout<<"\nMost likely will sign a contract extension\n";
		}else if(this->goalSaveRate>=7 || this->reflexesAble>=7 || this->numOfKeptCleanSheet>10)
		{
			cout<<"\nExtension may be considered\n";
		}else
		{
			cout<<"\nUnable to extend\n";
		}
	}
	
};

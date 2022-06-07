class Defender:public Player
{
	private:
	int tackleAbility;
	int defense1vs1;
	int offsideTrap;
	public:
	void setTackleAbility(int tackleAbility)
	{
	    this->tackleAbility=tackleAbility;
	}
	int getTackleAbility()
	{
	    return this->tackleAbility;
	}
	void setDefense1vs1(int defense1vs1)
	{
	    this->defense1vs1=defense1vs1;
	}
	int getDefense1vs1()
	{
	    return this->defense1vs1;
	}
	void setOffsideTrap(int offsideTrap)
	{
	    this->offsideTrap=offsideTrap;
	}
	int getOffsideTrap()
	{
	    return this->offsideTrap;
	}
	Defender()
	{
		
	} 
	Defender(string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary,int numberOfShirt,int Appearance,int numOfYellowCard,int numOfRedCard,int techniqueStat,int assistNumInSeason,int goalsNumInSeason,float height,float weight,string injury,string position,long long value ,int tackleAbility,int defense1vs1,int offsideTrap):Player(idMembers,contractTerm,idCardNumber,fullName,age,salary,numberOfShirt,Appearance,numOfYellowCard,numOfRedCard,techniqueStat,assistNumInSeason,goalsNumInSeason,height,weight,injury,position,value) {
		this->tackleAbility=tackleAbility;
		this->defense1vs1=defense1vs1;
		this->offsideTrap=offsideTrap ;
	}
	void input()
	{
		Player::input();
		cout<<"\nEnter the tackleAbility (0-10):";
		cin>>this->tackleAbility;
		cout<<"\nEnter the defense1vs1 (0-10):";
		cin >> this->defense1vs1;
		cout<<"\nEnter the offsideTrap (0-10):";
		cin >> this->offsideTrap;
	}
	void output()
	{
		Player::output();
		cout<<"\nTackleAbility: "<<this->tackleAbility<<"/10"<<endl;
		cout<<"\nDefense1vs1: "<<this->defense1vs1<<"/10"<<endl;
		cout<<"\nOffsideTrap: "<<this->offsideTrap<<"/10"<<endl;
	}
	string mission()
	{
		string a="\nThe main task is not to let the opponent pass\n";
		return a;
		string b="\nYou should also be good at playing with your feet to help escape pressing\n";
		return b;
		if(this->getAssistNumInSeason()>10 ||this->getGoalsNumInSeason()>7)
		{
			string c="\nShould participate in creating or creating merit\n";
			return c;
		}
	}
	long long calculateWage()
	{
		long long bonus,wage;
		if(this->getInjury()=="NO" && this->getAppearance()>20 && this->getNumOfYellowCard()<4 && this->getNumOfRedCard()<2 && this->getTackleAbility()>=8 && this->getDefense1vs1()>=8){
			bonus = 3000000;
		} else if(this->getInjury()=="NO" && this->getAppearance()>10 && this->getNumOfYellowCard()<4 && this->getNumOfRedCard()<2 && this->getTackleAbility()>=6&& this->getDefense1vs1()>=6) {
			bonus = 2000000;
		} else {
			bonus = 0;
		}
		wage = this->getSalary() + bonus;
		return wage;
	}
	
	bool signingCondition() {

	}
	void riskOfTerminateContract()
	{
		if(this->getTackleAbility() <=5 ||this->offsideTrap<=5||this->defense1vs1<=5)
		{
			cout<<"\nFull contract termination is possible\n";
		}else if(this->getTackleAbility() <=7 ||this->offsideTrap <=7||this->defense1vs1<=7)
		{
			cout<<"\nContract termination is unlikely\n";
		}else
		{
			cout<<"\nTermination of the contract cannot happen\n";
		}
	}
	void oppRenewContract()
	{
		if(this->getTechniqueStat()>8 ||this->getWeight()<72  )
		{
			cout<<"\nMost likely will sign a contract extension\n";
		}else if(this->getTechniqueStat()>7 ||this->getWeight()<77 )
		{
			cout<<"\nExtension may be considered\n";
		}else
		{
			cout<<"\nUnable to extend\n";
		}
	}
	
};

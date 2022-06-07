class Midfielder:public Player
{
	private:
	int defenseSupport;
	int attackSupport;
	float distanceMove;
	int cornerKick;
	public:
	void setDefenseSupport(int defenseSupport)
	{
	    this->defenseSupport=defenseSupport;
	}
	int getDefenseSupport()
	{
	    return this->defenseSupport;
	}
	void setAttackSupport(int attackSupport)
	{
	    this->attackSupport=attackSupport;
	}
	int getAttackSupport()
	{
	    return this->attackSupport;
	}
	void setDistanceMove(float distanceMove)
	{
	    this->distanceMove=distanceMove;
	}
	float getDistanceMove()
	{
	    return this->distanceMove;  
	}  
	void setCornerKick(int cornerKick)
	{
	    this->cornerKick=cornerKick;
	}
	int getCornerKick()
	{
	    return this->cornerKick; 
	}  
	Midfielder()
	{
		
	} 
	Midfielder(string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary,int numberOfShirt,int Appearance,int numOfYellowCard,int numOfRedCard,int techniqueStat,int assistNumInSeason,int goalsNumInSeason,float height,float weight,string injury,string position,int defenseSupport,int attackSupport,float distanceMove,int cornerKick):Player(idMembers,contractTerm,idCardNumber,fullName,age,salary,numberOfShirt,Appearance,numOfYellowCard,numOfRedCard,techniqueStat,assistNumInSeason,goalsNumInSeason,height,weight,injury,position) {
		this->defenseSupport=defenseSupport;
		this->attackSupport=attackSupport;
		this->distanceMove=distanceMove ;
		this->cornerKick=cornerKick ;

	}
	void input()
	{
		Player::input();
		cout<<"\nEnter the defenseSupport (0-10) : ";
		cin >> this->defenseSupport;
		cout<<"\nEnter the attackSupport (0-10) : ";
		cin >> this->attackSupport;
		cout<<"\nEnter the distanceMove (m/game) : ";
		cin>>this->distanceMove;
		cout<<"\nEnter the cornerKick (0-10) : ";
		cin >> this->cornerKick;
	}
	void output()
	{
		Player::output();
		cout<<"\nDefenseSupport: "<<this->defenseSupport<<"/10"<<endl;
		cout<<"\nAttackSupport: "<<this->attackSupport<<"/10"<<endl;
		cout<<"\nDistanceMove: "<<this->distanceMove<<" (m)"<<endl;
		cout<<"\nCornerKick: "<<this->cornerKick<<"/10"<<endl;
	}
	string mission()
	{
		string a="\nThe main task is to control the gameplay\n";
		return a;
		string b="\nMust play well with feet to support strikers\n";
		return b;
		if(this->getTechniqueStat()>90 ||this->getAssistNumInSeason()>20 ||this->getGoalsNumInSeason()>12 )
		{
			cout<<"\nCan participate in creating or making merit\n";
			cout<<"\nCan retreat to defense when needed\n";
		}
	}
	long long calculateWage() {
		long long bonus, wage;
		if(this->getInjury()=="NO" && this->getAppearance()>20 && this->getNumOfYellowCard()<4 && this->getNumOfRedCard()<2 && this->getAssistNumInSeason() >= 15 && this->getGoalsNumInSeason()>=10 &&this->getDefenseSupport()>=8&&this->getAttackSupport()>=8){
			bonus = 6000000;
		} else if(this->getInjury()=="NO" && this->getAppearance()>10 && this->getNumOfYellowCard()<4 && this->getNumOfRedCard()<2 && this->getAssistNumInSeason() >= 10 && this->getGoalsNumInSeason()>=5 &&this->getDefenseSupport()>=6&&this->getAttackSupport()>=6) {
			bonus = 3000000;
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
		if(this->attackSupport<4 ||this->defenseSupport<4||this->cornerKick<4)
		{
			cout<<"\nFull contract termination is possible\n";
		}else if(this->attackSupport<8 ||this->defenseSupport<8 ||this->cornerKick<8)
		{
			cout<<"\nContract termination is unlikely\n";
		}else
		{
			cout<<"\nTermination of the contract cannot happen\n";
		}
	}
	void oppRenewContract()
	{
		if(this->cornerKick>=8||this->distanceMove>70)
		{
			cout<<"\nMost likely will sign a contract extension\n";
		}else if(this->cornerKick<8||this->distanceMove>60)
		{
			cout<<"\nExtension may be considered\n";
		}else
		{
			cout<<"\nUnable to extend\n";
		}
	}
	
	
};

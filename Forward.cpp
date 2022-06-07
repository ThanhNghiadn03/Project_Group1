class Forward:public Player
{
	private:
		int escapeOffside; // Kha nang thoat bay viet vi
		int penaltyAble; // Kha nang sut pennalty
		int combiWithOther; // Kha nang phoi hop voi cau thu khac
		int numOfGodenGoals; // So luong ban thang vang
	public:
		void setEscapeOffside(int escapeOffside){
			this->escapeOffside = escapeOffside;
		}			
		int getEscapeOffside( ){
			return this->escapeOffside;
		}			
		void setPenaltyAble(int penaltyAble){
			this->penaltyAble = penaltyAble;
		}			
		int getPenaltyAble( ){
			return this->penaltyAble;
		}			
		void setCombiWithOther(int combiWithOther){
			this->combiWithOther = combiWithOther;
		}			
		int getCombiWithOther( ){
			return this->combiWithOther;
		}			
		void setNumOfGodenGoals(int numOfGodenGoals){
			this->numOfGodenGoals = numOfGodenGoals;
		}			
		int getNumOfGodenGoals( ){
			return this->numOfGodenGoals;
		}					
		Forward()
		{
		
		} 
		Forward(string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary,int numberOfShirt,int Appearance,int numOfYellowCard,int numOfRedCard,int techniqueStat,int assistNumInSeason,int goalsNumInSeason,float height,float weight,string injury,string position,int escapeOffside,	int penaltyAble,	int combiWithOther,	int numOfGodenGoals):Player(idMembers,contractTerm,idCardNumber,fullName,age,salary,numberOfShirt,Appearance,numOfYellowCard,numOfRedCard,techniqueStat,assistNumInSeason,goalsNumInSeason,height,weight,injury,position) {
		this->escapeOffside=escapeOffside ;
		this->penaltyAble=penaltyAble ;
		this->combiWithOther=combiWithOther ;
		this->numOfGodenGoals=numOfGodenGoals;
		}
		void input()
		{
			cout<<"\n--------------------------------------------------\n"<<endl;
			cout<<"\nINPUT THE FORWARD'S INFORMATION"<<endl;
			Player::input();
			cout<<"\nThe ability of escaping offside (0-10) : ";
			cin >> this->escapeOffside;
			cout<<"\nThe number of the Goden Goals: ";
			cin>>numOfGodenGoals;
			cout<<"\nPenaltyAble (0-10): ";
			cin>> this->penaltyAble;
			cout<<"\nThe combination with Orther (0-10): ";
			cin >> this->combiWithOther;
		}
		void output()
		{
			cout<<"\n--------------------------------------------------"<<endl;
			cout<<"\nOUTPUT THE FORWARD'S INFORMATION"<<endl;
			Player::output();
			cout<<"\nThe ability of escaping offside: "<<escapeOffside<<"/10"<<endl;
			cout<<"\nThe number of the Goden Goals: "<<numOfGodenGoals<<" goals"<<endl;
			cout<<"\nPenaltyAble: "<<penaltyAble<<"/10"<<endl;
			cout<<"\nThe combination with Orther: "<<combiWithOther<<"/10"<<endl;
		}
		string mission()
		{
			// combiWithOther
			cout<<"\n--------------------------------------------------"<<endl;
			cout<<"\n==========The Forward's Mission=========="<<endl;	
			cout<<"\nThe main mission is score."<<endl;
			cout<<"\nIf Forward is a versatile player, he/she can back to support the defense when the defender needs."<<endl;
			if(this->combiWithOther >=8 || this->combiWithOther >= 8)
				cout<<"\nSometimes the Forward can assist for Midfielder to score."<<endl;
		}
		long long calculateWage()
		{
			long long bonus,wage;
			if(this->getInjury()=="No"&&this->getGoalsNumInSeason()>=20&&this->getAssistNumInSeason()>=10&&this->getAppearance()>=20&&this->getEscapeOffside()>=6&&this->getPenaltyAble()>=8&&this->getCombiWithOther()>=7) {
				bonus = 8000000;
			} else if(this->getInjury()=="No"&&this->getGoalsNumInSeason()>=10&&this->getAssistNumInSeason()>=7&&this->getAppearance()>=10&&this->getEscapeOffside()>=5&&this->getPenaltyAble()>=6&&this->getCombiWithOther()>=6) {
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
			// getGoalsNumInSeason & getAssistNumInSeason		
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Risk Of Contract Termination Of Forward=========="<<endl;			
			if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0 )
				cout<<"The risk of contract termination is absolutely happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 )
				cout<<"The risk of contract termination is maybe happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 )
				cout<<"There have no for risking of contract termination!"<<endl;
		}
		void oppRenewContract()
		{
			// getGoalsNumInSeason & getAssistNumInSeason		
			cout<<"--------------------------------------------------"<<endl;
			cout<<"==========Ability To Opperate Renewable Contract Of Forward=========="<<endl;		
			if(this->getGoalsNumInSeason() > 6  && this->getAssistNumInSeason()  > 4 )
				cout<<"The opperated renewable contract is absolutely happen!"<<endl;
			else if(this->getGoalsNumInSeason() > 4  && this->getAssistNumInSeason()  > 2 )
				cout<<"The opperated renewable contract is uncertain!"<<endl;
			else if(this->getGoalsNumInSeason() == 0  && this->getAssistNumInSeason()  == 0)
				cout<<"There have no for opperating renewable contract!"<<endl;
		}
};

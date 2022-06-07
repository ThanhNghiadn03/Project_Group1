class Player:public Person
{
	private:
		int numberOfShirt; // So ao dau
		int Appearance; // So lan tham gia tran dau
		int numOfYellowCard; // So the vang
		int numOfRedCard; // So the do
		int techniqueStat; // Chi so ki thuat
		int assistNumInSeason; // So luong kien tao trong 1 mua
		int goalsNumInSeason; // SO luong ban thang trong 1 mua
		float height; // Chieu cao
		float weight; // Can nang
		string injury; // Loai chan thuong
		string position; // vi tri
		long long value;
	public:
		long long getValuePlayer() {
			return this->value;
		}
		void setInjury(string injury){
			this->injury = injury;
		}
		string getInjury(){
			return this->injury;
		}					
		void setPosition(string position)
		{
			this->position = position;
		}	
		string getPosition()
		{
			return this->position;
		}
		void setNumberOfShirt(int numberOfShirt){
			this->numberOfShirt = numberOfShirt;
		}			
		int getNumberOfShirt(){
			return this->numberOfShirt;
		}			
		void setAppearance(int Appearance){
			this->Appearance = Appearance;
		}			
		int getAppearance(){
			return this->Appearance;
		}			
		void setNumOfYellowCard(int numOfYellowCard){
			this->numOfYellowCard = numOfYellowCard;
		}			
		int getNumOfYellowCard(){
			return this->numOfYellowCard;
		}			
		void setNumOfRedCard(int numOfRedCard){
			this->numOfRedCard = numOfRedCard;
		}			
		int getNumOfRedCard(){
			return this->numOfRedCard;
		}			
		void setTechniqueStat(int techniqueStat){
			this->techniqueStat = techniqueStat;
		}					
		int getTechniqueStat(){
			return this->techniqueStat;
		}			
		void setAssistNumInSeason(int assistNumInSeason){
			this->assistNumInSeason = assistNumInSeason;
		}			
		int getAssistNumInSeason(){
			return this->assistNumInSeason;
		}			
		void setGoalsNumInSeason(int goalsNumInSeason){
			this->goalsNumInSeason = goalsNumInSeason;
		}			
		int getGoalsNumInSeason(){
			return this->goalsNumInSeason;
		}								
		void setHeight(float height){
			this->height = height;
		}			
		float getHeight(){
			return this->height;
		}			
		void setWeight(float weight){
			this->weight = weight;
		}			
		float getWeight(){
			return this->weight;
		}						
	
																				
		Player() {
		} 
		Player(	string idMembers,string contractTerm,int idCardNumber,string fullName,int age,long long salary,int numberOfShirt,int Appearance,int numOfYellowCard,int numOfRedCard,int techniqueStat,int assistNumInSeason,int goalsNumInSeason,float height,float weight,string injury,string position,long long value) :Person(idMembers, contractTerm,idCardNumber, fullName, age, salary)
		{	
	     this->numberOfShirt=numberOfShirt ;
	     this->Appearance=Appearance ;
	     this->numOfYellowCard=numOfYellowCard ;
	     this->numOfRedCard=numOfRedCard ;
	     this->techniqueStat=techniqueStat;
	     this->assistNumInSeason=assistNumInSeason ;
	     this->goalsNumInSeason=goalsNumInSeason ;
	     this->height=height;
	     this->weight=weight ;
	     this->injury=injury ;
	     this->position=position;
	     this->value = value;
		}
		void input()
		{
			cout<<"\nINPUT THE PLAYER'S INFORMATION'"<<endl;
			Person::input();
			cout<<"\nNumber of shirt(1-25): ";
			cin>>numberOfShirt;
			cout<<"\nHeight (cm) : ";
			cin>>height;
			cout<<"\nWeight (kg): ";
			cin>>weight;
			cout<<"\nPosition: ";
			cin>>this->position;
			cout<<"\nInjury: ";
			cin.ignore();
			getline(cin,injury);
			cout<<"\nAppearance: ";
			cin>>Appearance;
			cout<<"\nNumber of Yellow Card: ";
			cin>>numOfYellowCard;
			cout<<"\nNumber of Red Card: ";
			cin>>numOfRedCard;
			cout<<"\nThe number of assistance in Season: ";
			cin>>assistNumInSeason;
			cout<<"\nThe number of goals in Season: ";
			cin>>goalsNumInSeason;	
			cout<<"\nPosition: ";
			getline(cin,position);	
			cout << "\nValue's' player : ";
			cin >> this->value;	
		}
		void output()
		{
			cout<<"\n--------------------------------------------------"<<endl;
			cout<<"\n                         OUTPUT THE PLAYER'S INFORMATION'"<<endl;
			Person::output();
			cout<<"\nNumber of shirt: "<<numberOfShirt<<"\n\n"<<"Height: "<<height<<" cm"<<"\n\n"<<"Weight: "<<weight<<" kg"<<endl;  
			cout<<"\nPosition: "<<this->getPosition()<<endl;    
			cout<<"\nValue's player : "<<this->value<<" $"<<endl;          
			cout<<"\nInjury: "<<injury<<"\n\n"<<"Appearance: "<<Appearance<<endl;
			cout<<"\nNumber of Yellow Card: "<<numOfYellowCard<<"\n\n"<<"Number of Red Card: "<<numOfRedCard<<"\n"<<endl;
			cout<<"The technique stat: "<<techniqueStat<<"/10"<<endl;
			cout<<"\nThe number of assistance in Season: "<<assistNumInSeason<<"\n\n"<<"The number of goals in Season: "<<goalsNumInSeason<<endl;		
		}
//		void longOrShortTermRest()
//		{
//			// injury
//			cout<<"\n--------------------------------------------------\n"<<endl;
//			cout<<"\nTHE TIME NEED FOR THE TERM REST BECAUSE OF INJURY\n"<<endl;
//			if(this->injury == "ligament rupture" )   // dut day chang
//				cout<<"\n2 months for the term rest(Long term rest)\n"<<endl;
//			else if(this->injury == "sprain")  // bong gan
//				cout<<"\n1 moth for the term rest(Short term rest)\n"<<endl;
//			else if(this->injury == "tendinitis")  // viem gan
//				cout<<"\n1.5 months for the term rest(Long term rest)\n"<<endl;
//			else if(this->injury == "fracture")  // gay xuong
//				cout<<"\nfrom 6 months to 1 year for the term rest(Long term rest)\n"<<endl;
//			else if(this->injury == "muscle injury")  // chan thuong co
//				cout<<"\n1 month for the term rest(Short term rest)\n"<<endl;
//			else if(this->injury == "tear cartilage")  // rach sun
//				cout<<"\n2 months for the term rest(Long term rest)\n"<<endl;
//			else if(this->injury == "minor injury")  // chan thuong nhe
//				cout<<"\nfrom 1 to 2 weeks for the term rest(Short term rest)\n"<<endl;
//			else 
//				cout<<"\nNO TERM REST\n"<<endl;			
//		}
		float numOfExpectedGoal()
		{
			// goalsNumInSeason & Appearance
			float Num_Of_Expected_Goals;
			cout<<"\n--------------------------------------------------\n"<<endl;
			cout<<"\n==========The Number Of Expected Goals==========\n"<<endl;
			Num_Of_Expected_Goals = this->goalsNumInSeason / this->Appearance;
			return Num_Of_Expected_Goals;	
		}	
		float numOfExpectedAssist()
		{
			// assistNumInSeason & Appearance
			float Num_Of_Expected_Assists;
			cout<<"\n--------------------------------------------------\n"<<endl;
			cout<<"\n==========The Number Of Expected Assists==========\n"<<endl;
			Num_Of_Expected_Assists = this->assistNumInSeason / this->Appearance;
			return Num_Of_Expected_Assists;
		}		
};

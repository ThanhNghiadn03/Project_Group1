static int checkOwner = 0;
class Owner:public FootballClub{
	private:
		string corporTaxCode;//ma thue doanh nghiep
		long long netWorth;//gia tri rong
		long long netProfit;//loi nhuan rong
		string nameOfOwner;//ten chu so huu
		long long publicDebt;//no cong
		long long investmentAmount;//tien dau tu 
	public:
		void setTaxCode(string corporTaxCode){
			this->corporTaxCode=corporTaxCode;
		}
		string getTaxCode(){
			return this->corporTaxCode;
		}
		void setWorth(long long netWorth){
			 this->netWorth=netWorth;
		}
		long long getWorth(){
			return this->netWorth;
		}
		void setProfit(long long netProfit){
			 this->netProfit=netProfit;
		}
		long long getProfit(){
			return this->netProfit;
		}
		void setnameOwner(string nameOfOwner){
			this->nameOfOwner=nameOfOwner;
		}
		string getnameOwner(){
			return this->nameOfOwner;
		}
		void setDebt(long long publicDebt){
			this->publicDebt=publicDebt;
		}
		long long getDebt(){
			return this->publicDebt;
		}
		void setAmount(long long investmentAmount){
			this->investmentAmount=investmentAmount;
		}
		long long getAmount(){
			return this->investmentAmount;
		}
		
	Owner(){
		this->corporTaxCode=" ";
		this->netWorth=0;
		this->netProfit=0;
		this->nameOfOwner=" ";
		this->publicDebt=0;
		this->investmentAmount=0;
	}
	void input(){
		cout << endl << endl << "INPUT PROFILE : "<< endl << endl;
		FootballClub::input();
		cout<<"\nEnter the business tax code: ";
		cin>>this->corporTaxCode;
		cin.ignore();
		for(int i=0;i<=10;i++){
			if(this->corporTaxCode[i]>=97&&this->corporTaxCode[i]<=122)
				this->corporTaxCode[i]-=32;
		}
		cout<<"\nTotal current net worth: ";
		cin>>this->netWorth;
		cout<<"\nTotal current net profit: ";
		cin>>this->netProfit;
		cin.ignore();
		cout<<"\nEnter the Name of Owner: ";
		getline(cin,this->nameOfOwner);
		for(int i=0;i<=10;i++){
			if(this->nameOfOwner[i]>=97&&this->nameOfOwner[i]<=122)
				this->nameOfOwner[i]-=32;
		}
		cout<<"\nEnter the Public Debt: ";
		cin>>this->publicDebt;
		cout<<"\nThe amount of money you intend to invest when They are elected: ";
		cin>>this->investmentAmount;
	}
	
	//
	
	void output(){
		cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------\n\n";
		cout << endl << endl << "\nPROFILE : " << endl << endl;
		FootballClub::output();
		cout<<"\nCorpor TaxCode: "<<this->corporTaxCode<<endl;
		cout<<"\nNet Worth: "<<this->netWorth<<"$"<<endl;
		cout<<"\nNet Profit: "<<this->netProfit<<"$"<<endl;
		cout<<"\nName of Owner: "<<this->nameOfOwner<<endl;
		cout<<"\nPublic Debt: "<<this->publicDebt<<"$"<<endl;
		cout<<"\nInvestment Amount: "<<this->investmentAmount<<"$"<<endl;
	}
	
	// ROE da hoan thien
	
	double ROE(){
		double roe=this->netProfit/this->netWorth;
		return roe;
	}
	
	// bankruptcyRisk da hoan thien
	
	bool bankruptcyRisk(){
		if(this->publicDebt>=(this->netProfit+this->netWorth) && this->ROE()<0.02)
			return true;
		else 
			return false;
	}
	
	// mission da hoan thien
	
	string mission(){
		string mis = "Make club success!!";
		return mis;
	}
	
	// calculateWage chua hoan thien
	
	long long calculateWage(){
		double cal=this->netProfit-(this->investmentAmount+this->publicDebt);
		return cal;
	}
	
	//signingCondition da hoan thien
	
	bool signingCondition(){
		if (this->publicDebt<=((this->netProfit+this->netWorth)*2) && this->ROE()>0.15 && this->getAmount()!=0)
			return true;
		else 
			return false;
	}
	
	//riskOfTerminateContract chua hoan thien
	
	void riskOfTerminateContract(){
		cout<<"*Risk Of Terminate Contract: ";
		//ROE & publicDebt & calWage
		if(this->signingCondition()==false){
			cout<<"\n-Contract Terminated!!\n";
		}else 
			cout<<"\n-The contract is still valid!!\n";
	}
	
	// oppRenewContract chua hoan thien
		
	void oppRenewContract(){
		cout<<"*OOP Renew Contract: ";
		if(this->signingCondition()==true){
			string renew;
			cin.ignore();
			cout<<"\nEnter the contract renewal period: ";
			getline(cin,renew);
			cout<<"-The contract renewal period: "<<renew<<endl;
		}else 
			cout<<"\nThe contract has been terminated!!!\n";
	}
	
	// valueBringingLastSeason chua hoan thien
	
	bool valueBringingLastSeason(){
		return false;
	}
};

//class listOwner{
//
//	public: 
//		int n;
//		vector<Owner> v;
//		
//		void inputList(){
//			cin>>n;
//			cout << "\n\nEnter the information of each candidate : \n";
//			for(int i=0;i<n;i++){
//				cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------\n\n";
//				cout<<"\nCandidate "<<i+1<<" : ";
//				Owner on;
//				on.input();
//				v.push_back(on);
//			}
//			ofstream fo("D:\\OC.txt");
//			if(fo.is_open()){
//				for(int i=0;i<v.size();i++){
//					fo<<"-----------------Owner Candidate"<<i+1<<"---------------"<<endl;
//					fo<<"\nID of this candidate : "<<v[i].getMember()<<endl;
//					fo<<"\nExpected contract Term: "<<v[i].getcontract()<<endl;
//					fo<<"\nCorporate TaxCode: "<<v[i].getTaxCode()<<endl;
//					fo<<"\nCandidate's name': "<<v[i].getnameOwner()<<endl;
//					fo<<endl;
//				}
//				fo.close();
//			}else 
//				cout<<"File not found!!!!";
//		}
//		void outputList(){
//			cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
//			cout << "\nDetailed list of each candidate :\n\n";
//			for(int i=0;i<v.size();i++){
//				v[i].output();
//			}
//		}
//		
//		void chooseTheOwner() {
//			for(int i=0 ; i<v.size() ; i++) {
//				if(v[i].bankruptcyRisk()==true || v[i].signingCondition()==false) {
//					v.erase(v.begin()+i);
//					i--;
//				}
//			}
//			
//			if(v.size()!=0) {
//				checkOwner++;
//				for(int i=0 ; i<v.size() ; i++) {
//				for(int j=i ; j<v.size() ; j++) {
//					if(v[i].getAmount() < v[j].getAmount()) {
//						Owner tmp = v[i];
//						v[i] = v[j];
//						v[j] = tmp;
//					}
//				}
//				}
//				while(v.size()!=1) {
//				v.pop_back();
//				}
//			} else {
//					cout << "\n\noop!!!There are no suitable candidates in all that you have entered !!!\n\nWe need to find other candidates\n\nEnter the number of candidates you have selected : ";
//				}
//			}
//		void scriptOfOwner() {
//			cout << "Our team currently has no owner !!! \n\nYou need to enter the number of potential candidates for the position of team owner : ";
//			this->inputList();
//			this->outputList();
//			this->chooseTheOwner();
//			while(checkOwner==0) {
//				this->inputList();
//				this->chooseTheOwner();
//			}
//			cout << "\n\nWe reviewed each person's details and the fan vote took place !!!\n\nWe would like to announce the official owner of the team is Mr."<<v[0].getnameOwner();
//			cout << "\n\nCongratulations Mr."<<v[0].getnameOwner()<<endl <<endl;
//			ofstream fo("D:\\ON.txt");
//		
//			if(fo.is_open()){
//				fo<<"--------------------Official owner------------------ "<<endl;
//				fo<<"\nID.Members: ON01"<<endl;
//				fo<<"\nContract Term: "<<v[0].getcontract()<<endl;
//				fo<<"\nCorpor TaxCode: "<<v[0].getTaxCode()<<endl;
//				fo<<"\nName of Owner: "<<v[0].getnameOwner()<<endl;
//				fo<<"\nNet Worth: "<<v[0].getWorth()<<"$"<<endl;
//				fo<<"\nNet Profit: "<<v[0].getProfit()<<"$"<<endl;
//				fo<<"\nPublic Debt: "<<v[0].getDebt()<<"$"<<endl;
//				fo<<"\nInvestment Amount: "<<v[0].getAmount()<<"$"<<endl;
//				fo<<endl;
//			
//			fo.close();
//		}else
//			cout<<"File not found!!!!";
//		}
//};


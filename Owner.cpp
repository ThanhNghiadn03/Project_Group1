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
		if (this->publicDebt<=((this->netProfit+this->netWorth)*2) && this->ROE()>0.15 && this->getAmount()!=0&&this->getAmount()<(this->getWorth()+this->getProfit())&&this->getAmount()>1000000000)
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


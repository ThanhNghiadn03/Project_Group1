static int checkMana = 0;
class Management : public Person {
	private :
		int expManage ;
		long long purAmountInTerm ;
		int qualityOfTransfer;
	public :
		int getExp () {
			return expManage ;
		} 
		long long getpurAmountInTerm () {
			return purAmountInTerm ;
		} 
		int getQualityOfTransfer() {
			return qualityOfTransfer ;
		}
			 
		void setExpManage (int expManage) {
			this->expManage=expManage;
		} 
		void setPurchase (float purchase) {
			this->purAmountInTerm =purchase  ;
		} 	
		void setQualityOfTransfer(int quality) {
		    this->qualityOfTransfer=quality ;
		}
		
		Management() {
			this->expManage = 0;
			this->purAmountInTerm = 0;
			this->qualityOfTransfer = 0 ;
		}
		
		Management(string idMembers , string contractTerm , int idCardNumber , string fullName , int age , long long salary,int expManage,long long purAmountInTerm,int qualityOfTransfer) : Person(idMembers , contractTerm , idCardNumber , fullName , age , salary) {
			this->expManage = expManage;
			this->purAmountInTerm = purAmountInTerm;
			this->qualityOfTransfer = qualityOfTransfer;
		}
		
		void input() {
			Person::input() ;
			cout<<"\nExperience of Manager : ";
			cin>>this->expManage ;
			cout<<"\nThe amount of money that manager needs to transfer : " ;
			cin>>this->purAmountInTerm ;
			do{ 
				cout<<"\nTransfer skill(1-10) : " ; 
				cin>>this->qualityOfTransfer;	
			}while(this->qualityOfTransfer<0||this->qualityOfTransfer>10); 	
 		} 
 		
		void output () {
			Person::output() ;
			cout<<"\nExperience of Manager : "<<this->expManage<<"\n" ;
			cout<<"\nThe amount of money that manager needs to transfer : "<<this->purAmountInTerm <<"\n" ;	
			cout<<"\nTransfer skill(1-10) : "<<this->qualityOfTransfer<<"\n" ;	
		}			 
		
		
		string mission () { 
  		    string mission ="Management and Transfers";
  		    return mission ;
  		} 
  		
		
		long long calculateWage(Coach c) {
			float cal ;
			if((this->expManage>8||this->qualityOfTransfer>8)&&(c.getWins()>15))  {
				cal=this->getSalary() + 1000000;
			 	return cal ;
			}
			else if((this->expManage >5 || this->qualityOfTransfer>5)&&(c.getWins()>10)) {
			 	cal = this->getSalary() + 500000;
			 	return cal;
			} 
			else {
				cal =this->getSalary() +100000 ;
				return cal ;
			}
		}
		
 	    bool signingCondition () {
			if(this->expManage>5&&this->purAmountInTerm<2000000000&&this->qualityOfTransfer>=5) 
			return true ;
			else  
			return false ;
		}  
		
		void riskOfTerminateContract(Coach c) {
			 if(c.getLose() > 15) {
			 	cout<<"Contract was fire" ;
			 } else {
			 	cout << "The contract is still valid";
			 }
		}
		
		void oppRenewContract () {
			
		}	
			 	 
} ;

//class listManager {
//	public :
//		public: 
//		int n;
//		vector<Management> vm;
//		
//	void inputList(){
//		cin>>n;
//		cout << "\n\nEnter the information of each candidate : \n";
//		for(int i=0;i<n;i++){
//			cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------\n\n";
//			cout<<"\nCandidate "<<i+1<<" : ";
//			Management mn;
//			mn.input();
//			vm.push_back(mn);
//		}
//		
////		ofstream fo("D:\\ManagerCandidates.txt");
////		if(fo.is_open()){
////			for(int i=0;i<vm.size();i++){
////				fo<<"-----------------Owner Candidate"<<i+1<<"---------------"<<endl;
////				fo<<"\nID of this candidate : "<<vm[i].getMember()<<endl;
////				fo<<"\nExpected contract Term: "<<vm[i].getcontract()<<endl;
////				fo<<"\nCorporate TaxCode: "<<vm[i].getTaxCode()<<endl;
////				fo<<"\nCandidate's name': "<<vm[i].getnameOwner()<<endl;
////				fo<<endl;
////			}
////			fo.close();
////		}else 
////			cout<<"File not found!!!!";
//	}
//	void outputList(){
//		cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
//		cout << "\nDetailed list of each candidate :\n\n";
//		for(int i=0;i<vm.size();i++){
//			vm[i].output();
//		}
//	}
//	
//	void chooseTheManager() {
//		for(int i=0 ; i<vm.size() ; i++) {
//			if(vm[i].signingCondition()==false) {
//				vm.erase(vm.begin()+i);
//				i--;
//			}
//		}
//		
//		if(vm.size()!=0) {
//			checkMana++;
//			for(int i=0 ; i<vm.size() ; i++) {
//			for(int j=i ; j<vm.size() ; j++) {
//				if(vm[i].getQualityOfTransfer() < vm[j].getQualityOfTransfer()) {
//					Management tmp = vm[i];
//					vm[i] = vm[j];
//					vm[j] = tmp;
//				}
//			}
//			}
//			while(vm.size()!=1) {
//			vm.pop_back();
//			}
//		} else {
//				cout << "\n\noop!!!There are no suitable candidates in all that you have entered !!!\n\nWe need to find other candidates\n\nEnter the number of candidates you have selected : ";
//			}
//		}
//		
//		void scriptOfManager(Management c, listOwner lo) {
//			cout << "After taking office as the owner of the team,"<<lo.v[0].getnameOwner()<<" came to meet and talk with the current manager "<<c.getFullName();
//			cout << "\n\nAfter the meeting of the two, " <<lo.v[0].getnameOwner()<< " pondered whether to keep the current manager or recruit another manager\n\n";
//			char choose;
//			cout << "Fire or keep? (f or k) : ";
//			cin >> choose;
//			choose = toupper(choose);
//			if(choose == 'K') {
//				cout<<"\n\n"<<c.getFullName()<< " : Thank you sir !!! I will give my all for this team\n\n";
//			} else {
//				cout<<"\n\n"<<c.getFullName()<< " : This is unfair to me . Thank you for the opportunity to work for this team\n\n";
//				this->inputList();
//				this->outputList();
//				this->chooseTheManager();
//				while(checkMana==0) {
//					this->inputList();
//					this->chooseTheManager();
//				}
//				cout << "\n\nCongratulations Mr. "<<vm[0].getFullName() << " will be the next coach !!!"<<endl <<endl;
//			}
//		}
//};

class listOwner{
	public: 
		int n;
		vector<Owner> v;
		
		void inputList(){
			cin>>n;
			cout << "\n\nEnter the information of each candidate : \n";
			for(int i=0;i<n;i++){
				cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------\n\n";
				cout<<"\nCandidate "<<i+1<<" : ";
				Owner on;
				on.input();
				v.push_back(on);
			}
			ofstream fo("D:\\OC.txt");
			if(fo.is_open()){
				for(int i=0;i<v.size();i++){
					fo<<"-----------------Owner Candidate"<<i+1<<"---------------"<<endl;
					fo<<"\nID of this candidate : "<<v[i].getMember()<<endl;
					fo<<"\nExpected contract Term: "<<v[i].getcontract()<<endl;
					fo<<"\nCorporate TaxCode: "<<v[i].getTaxCode()<<endl;
					fo<<"\nCandidate's name': "<<v[i].getnameOwner()<<endl;
					fo<<endl;
				}
				fo.close();
			}else 
				cout<<"File not found!!!!";
		}
		void outputList(){
			cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
			cout << "\nDetailed list of each candidate :\n\n";
			for(int i=0;i<v.size();i++){
				v[i].output();
			}
		}
		
		void chooseTheOwner() {
			for(int i=0 ; i<v.size() ; i++) {
				if(v[i].bankruptcyRisk()==true || v[i].signingCondition()==false) {
					v.erase(v.begin()+i);
					i--;
				}
			}
			
			if(v.size()!=0) {
				checkOwner++;
				for(int i=0 ; i<v.size() ; i++) {
				for(int j=i ; j<v.size() ; j++) {
					if(v[i].getAmount() < v[j].getAmount()) {
						Owner tmp = v[i];
						v[i] = v[j];
						v[j] = tmp;
					}
				}
				}
				while(v.size()!=1) {
				v.pop_back();
				}
			} else {
					cout << "\n\noop!!!There are no suitable candidates in all that you have entered !!!";
					getch();
					cout<<"\n\nWe need to find other candidates";
					getch();
					cout<<"\n\nEnter the number of candidates you have selected : ";
				}
			}
		void scriptOfOwner() {
			cout << "Our team currently has no owner !!!";
			getch();
			cout << "\n\nYou need to enter the number of potential candidates for the position of team owner : ";
			this->inputList();
			this->outputList();
			this->chooseTheOwner();
			while(checkOwner==0) {
				this->inputList();
				this->chooseTheOwner();
			}
			cout << "\n\nWe reviewed each person's details and the fan vote took place !!!\n\nWe would like to announce the official owner of the team is Mr."<<v[0].getnameOwner();
			getch();
			cout << "\n\nCongratulations Mr."<<v[0].getnameOwner()<<endl <<endl;
			getch();
			ofstream fo("D:\\ON.txt");
		
			if(fo.is_open()){
				fo<<"--------------------Official owner------------------ "<<endl;
				fo<<"\nID.Members: ON01"<<endl;
				fo<<"\nContract Term: "<<v[0].getcontract()<<endl;
				fo<<"\nCorpor TaxCode: "<<v[0].getTaxCode()<<endl;
				fo<<"\nName of Owner: "<<v[0].getnameOwner()<<endl;
				fo<<"\nNet Worth: "<<v[0].getWorth()<<"$"<<endl;
				fo<<"\nNet Profit: "<<v[0].getProfit()<<"$"<<endl;
				fo<<"\nPublic Debt: "<<v[0].getDebt()<<"$"<<endl;
				fo<<"\nInvestment Amount: "<<v[0].getAmount()<<"$"<<endl;
				fo<<endl;
			
				fo.close();
		}else
			cout<<"File not found!!!!";
		}
};

class listManager {
		public: 
		int n;
		vector<Management> vm;
		
	void inputList(){
		cout << "\n\nPlease enter the number of candidates for the position of manager : ";
		cin>>n;
		cout << "\n\nEnter the information of each candidate : \n";
		for(int i=0;i<n;i++){
			cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------\n\n";
			cout<<"\nCandidate "<<i+1<<" : ";
			Management mn;
			mn.input();
			vm.push_back(mn);
		}
		
//		ofstream fo("D:\\ManagerCandidates.txt");
//		if(fo.is_open()){
//			for(int i=0;i<vm.size();i++){
//				fo<<"-----------------Owner Candidate"<<i+1<<"---------------"<<endl;
//				fo<<"\nID of this candidate : "<<vm[i].getMember()<<endl;
//				fo<<"\nExpected contract Term: "<<vm[i].getcontract()<<endl;
//				fo<<"\nCorporate TaxCode: "<<vm[i].getTaxCode()<<endl;
//				fo<<"\nCandidate's name': "<<vm[i].getnameOwner()<<endl;
//				fo<<endl;
//			}
//			fo.close();
//		}else 
//			cout<<"File not found!!!!";
	}
	void outputList(){
		cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
		cout << "\nDetailed list of each candidate :\n\n";
		for(int i=0;i<vm.size();i++){
			vm[i].output();
		}
	}
	
	void chooseTheManager() {
		for(int i=0 ; i<vm.size() ; i++) {
			if(vm[i].signingCondition()==false) {
				vm.erase(vm.begin()+i);
				i--;
			}
		}
		
		if(vm.size()!=0) {
			checkMana++;
			for(int i=0 ; i<vm.size() ; i++) {
			for(int j=i ; j<vm.size() ; j++) {
				if(vm[i].getQualityOfTransfer() < vm[j].getQualityOfTransfer()) {
					Management tmp = vm[i];
					vm[i] = vm[j];
					vm[j] = tmp;
				}
			}
			}
			while(vm.size()!=1) {
			vm.pop_back();
			}
		} else {
				cout << "\n\noop!!!There are no suitable candidates in all that you have entered !!!";
				getch();
				cout<<"\n\nWe need to find other candidates";
				getch();
				cout<<"\n\nEnter the number of candidates you have selected : ";
			}
		}
		
		Management scriptOfManager() {
				this->inputList();
				this->outputList();
				this->chooseTheManager();
				while(checkMana==0) {
					this->inputList();
					this->chooseTheManager();
				}
				getch();
				cout << "\n\nCongratulations Mr. "<<vm[0].getFullName() << " will be the next manager !!!"<<endl <<endl;
				return vm[0];
		}
};

class listCoach {
	public :
		public: 
		int n;
		vector<Coach> vc;
		
	void inputList(){
		cout << "\n\nPlease enter the number of candidates for the position of manager : ";
		cin>>n;
		cout << "\n\nEnter the information of each candidate : \n";
		for(int i=0;i<n;i++){
			cout << "\n\n--------------------------------------------------------------------------------------------------------------------------------------\n\n";
			cout<<"\nCandidate "<<i+1<<" : ";
			Coach c;
			c.input();
			vc.push_back(c);
		}
		
//		ofstream fo("D:\\ManagerCandidates.txt");
//		if(fo.is_open()){
//			for(int i=0;i<vm.size();i++){
//				fo<<"-----------------Owner Candidate"<<i+1<<"---------------"<<endl;
//				fo<<"\nID of this candidate : "<<vm[i].getMember()<<endl;
//				fo<<"\nExpected contract Term: "<<vm[i].getcontract()<<endl;
//				fo<<"\nCorporate TaxCode: "<<vm[i].getTaxCode()<<endl;
//				fo<<"\nCandidate's name': "<<vm[i].getnameOwner()<<endl;
//				fo<<endl;
//			}
//			fo.close();
//		}else 
//			cout<<"File not found!!!!";
	}
	void outputList(){
		cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
		cout << "\nDetailed list of each candidate :\n\n";
		for(int i=0;i<vc.size();i++){
			vc[i].output();
		}
	}
	
	void chooseTheCoach() {
		for(int i=0 ; i<vc.size() ; i++) {
			if(vc[i].signingCondition()==false) {
				vc.erase(vc.begin()+i);
				i--;
			}
		}
		
		if(vc.size()!=0) {
			checkMana++;
			for(int i=0 ; i<vc.size() ; i++) {
			for(int j=i ; j<vc.size() ; j++) {
				if(vc[i].getTitle () < vc[j].getTitle ()) {
					Coach tmp = vc[i];
					vc[i] = vc[j];
					vc[j] = tmp;
				}
			}
			}
			while(vc.size()!=1) {
			vc.pop_back();
			}
		} else {
				cout << "\n\noop!!!There are no suitable candidates in all that you have entered !!!";
				getch();
				cout<<"\n\nWe need to find other candidates";
				getch();
				cout<<"\n\nEnter the number of candidates you have selected : ";
			}
		}
		Coach scriptOfCoach() {
				this->inputList();
				this->outputList();
				this->chooseTheCoach();
				while(checkCoach==0) {
					this->inputList();
					this->chooseTheCoach();
				}
				getch();
				cout << "\n\nCongratulations Mr. "<<vc[0].getFullName() << " will be the next Coach!!!"<<endl <<endl;
				return vc[0];
			}
};


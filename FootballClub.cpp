#include "header.h"

class FootballClub {
	private:
		string idMembers;
		string contractTerm;
	public:
		bool checkDate(int day, int month, int year) {
			switch (month) {
				case 1 :
				case 3:
				case 5 :
				case 7 :
				case 8 :
				case 10 :
				case 12 :
						if(day<1 || day > 31) {
							return false;
						}
						break;
				case 4 :
				case 6 :
				case 9 :
				case 11 :
					if(day < 1 || day > 30) {
						return false;
					}
					break;
				case 2 :
					if (year % 4 == 0) {
	  					if (year % 100 == 0) {
	   						 if (year % 400 == 0) {
								if(day < 1 || day > 29) {
									return false;
								}
						}else{
							if(day < 1 || day > 28) {
									return false;
						}}
					}else {
							if(day < 1 || day > 29) {
									return false;
								}
					}}else{
							if(day < 1 || day > 28) {
									return false;
					}}
						
					break;
				default :
					return false;
			}
			if(year <= 2022) {
				return false;
			} 
			return true;
		}
		
		void setMember(string idMembers){
			this->idMembers = idMembers;
		}
		string getMember(){
			return this->idMembers;
		}
		void setcontract(string contractTerm){
			this->contractTerm = contractTerm;
		}
		string getcontract(){
			return this->contractTerm;
		}
	FootballClub(){
	}
	
	FootballClub(string idMembers , string contractTerm) {
		this->idMembers = idMembers;
		this->contractTerm = contractTerm;
	}
	
	virtual void input(){
		cout<<"\n\nWe need the ID for this person : ";
		cin>>this->idMembers;
		for(int i=0;i<=10;i++){
			if(this->idMembers[i]>=97&&this->idMembers[i]<=122)
				this->idMembers[i]-=32;
		}
		cin.ignore();
		cout<<"\nHow long do you want your contract to last?(Format DD/MM/YYYY): \n\n";
		int day,month,year;
		do {
			cout << "Day : ";
			cin >> day;
			cout << "Month : ";
			cin >> month;
			cout << "Year : ";
			cin >> year;
		}while(checkDate(day,month,year)==false);
		cout<<"\n";
		string sday,smonth,syear;
		sday = to_string(day);
		smonth = to_string(month);
		syear = to_string(year);
		this->contractTerm = sday+'/'+smonth+'/'+syear;
	}
	virtual void output(){
		cout<<"ID of Members: "<<this->idMembers<<endl<<endl;
		cout<<"Contract Term: "<<this->contractTerm<<endl;
	}
	virtual string mission() = 0;
	virtual bool signingCondition() = 0;
	virtual void oppRenewContract() = 0;
	long long calculateWage() {
	}
	void riskOfTerminateContract() {
	}
};

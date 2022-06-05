#include "Person.cpp"
static int checkCoach = 0;
class Coach : public Person {					
	private :
		int winInSeason ;
		int loseInSeason ;
	    int titleNumber ;
	    int experience ; 
	public :
		  int getWins() {
		  	return this->winInSeason;
		  } 
		  int getLose() {
		  	return this->loseInSeason ;
		  } 
		  int getTitle () {
		  	return this->titleNumber ;
		  } 
		  int getExp() {
		  	return this->experience ;
		  } 
      	void setWins (int Wins) {
			this->winInSeason=Wins;
		} 
		void setLoses(int Loses) {
			this->loseInSeason=Loses ;
		} 
		void setTitle (int Title) {
			this->titleNumber=Title ;
		} 
		void setExperience (float Exp) {
			this->experience=Exp ;
		} 
		
		Coach() {
			
		} 
		
		Coach(string idMembers , string contractTerm , int idCardNumber , string fullName , int age , long long salary, int numOfWin , int numOfLose , int titleNumber , int experience) : Person(idMembers , contractTerm , idCardNumber , fullName , age , salary) {
			this->winInSeason = numOfWin;
			this->loseInSeason = numOfLose;
			this->titleNumber = titleNumber;
			this->experience = experience;
		}
		
		void input() {
			Person::input() ;
			cout<<"\nNum of Wins in last season : " ;
			cin>>this->winInSeason ;
			cout<<"\nNum of Loses in last season : " ;
			cin>>this->loseInSeason ;
			cout<<"\nNumber of Titles: " ;
			cin>>this->titleNumber ;
			cout<<"\nExperience : " ;
			cin>>this->experience ;
			cin.ignore() ;
		} 
		void output() {
			Person::output() ;
			cout<<"\nNum of wins in a season : "<<this->getWins()<"\n\n";
			cout<<"\nNum of loses in a season : "<<this->getLose()<<"\n\n";
			cout<<"\nNumber of titles : "<<this->titleNumber <<"\n\n";
			cout<<"\nExperience : "<<this->experience <<"\n\n";
  		} 
  		
		string mission () { 
  	    	string mission="Coach and Win matchs" ;
  	    	return mission ;
		} 
		
		
		long long  calculateWage() {
			long long wage = 0;
			if(this->winInSeason >= 4*this->loseInSeason && this->experience > 15 && this->loseInSeason < 7) {
				wage = this->getSalary()+this->winInSeason*20000;
			} else if(this->winInSeason >= 2*this->loseInSeason && this->experience > 15 && this->loseInSeason < 7) {
				wage = this->getSalary()+this->winInSeason*10000;
			} else {
				wage = this->getSalary()-10000*this->loseInSeason;
			}
			return wage;
		}  
		
		bool signingCondition () {
			if(this->experience > 5 && this->getLose() <= this->getWins()/2) {
				return true;
			} else{
				return false;
			}
		} 

		void riskOfTerminateContract() {
			if(this->getLose()>=this->getWins()) {
				cout<<"\nBe fired!!!" ;
			} 
		}
			
		void oppRenewContract () {
			if(this->getWins()>20) {
				cout<<"\nThere are many renewal opportunities" ;
			} 
			else 
			cout<<"\nUnable to meet request" ;
	
		} 
}; 


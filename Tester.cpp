#include "Coach.cpp"
#include "Management.cpp"
#include "Owner.cpp"
#include "List.cpp"

int main() {
	listOwner Lo;
	Lo.scriptOfOwner();
	Coach c("CO000" , "22/5/2025", 111111 , "Mourinho" ,53 , 8200000, 21, 6, 13 , 20);
	Management m("MN000" ,"22/5/2025" , 222222 , "Ralf Rangnick", 55, 5600000, 10,100000000, 8);
	listManager lm;
	listCoach lc;
	
	cout << "After taking office as the owner of the team, "<<Lo.v[0].getnameOwner()<<" came to meet and talk with the current manager "<<m.getFullName();
	getch();
	cout << "\n\nAfter the meeting of the two, " <<Lo.v[0].getnameOwner()<< " pondered whether to keep the current manager or recruit another manager\n\n";
	getch();
	char choose;
	cout << "Fire or keep? (f or k) : ";
	cin >> choose;
	choose = toupper(choose);
	if(choose == 'K') {
		cout<<"\n\n"<<m.getFullName()<< " said : \"Thank you sir !!! I will give my all for this team\"\n\n";
		getch();
	} else {
		cout<<"\n\n"<<m.getFullName()<< " said : \"This is not fair with me !!! Thank you for the opportunity to cooperate recently\"\n\n";
		getch();
		m=lm.scriptOfManager();
	}
	cout << "Mr. "<<Lo.v[0].getnameOwner()<<" went to the team's gathering area to meet the coach "<<c.getFullName();
	getch();
	cout << "\n\nAfter the meeting of the two people, " <<Lo.v[0].getnameOwner()<< " He wondered if this coach was right for the team\n\n";
	getch();
	cout << "The new manager of the team , "<<m.getFullName()<< " , said that \"his tactics still fit my style of transfer\"\n\n";
	getch();
	cout << "Fire or keep? (f or k) : ";
	cin >> choose;
	choose = toupper(choose);
	if(choose == 'K') {
		cout<<"\n\n"<<c.getFullName()<< " said : \"Thank you sir !!! I will give my all for this team\"\n\n";
		getch();
	} else {
		cout<<"\n\n"<<c.getFullName()<< " said : \"This is not fair with me !!! Thank you for the opportunity to cooperate recently\"\n\n";
		getch();
		c = lc.scriptOfCoach();
	}
	return 0;
} 

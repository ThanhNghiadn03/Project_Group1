#include "Coach.cpp"
#include "Management.cpp"
#include "Owner.cpp"
#include "Player.cpp"
#include "Goalkeeper.cpp"
#include "Defender.cpp"
#include "Midfieder.cpp"
#include "Forward.cpp"
#include "List.cpp"

int main() {
	listOwner Lo;
	Lo.scriptOfOwner();
	Coach c("CO000" , "22/5/2025", 111111 , "Mourinho" ,53 , 8200000, 21, 6, 13 , 20);
	Management m("MN000" ,"22/5/2025" , 222222 , "Ralf Rangnick", 55, 5600000, 10,100000000, 8);
	listManager lm;
	listCoach lc;
	Goalkeeper g1("GK001","31/08/2030",111222,"Thibaut Courtois",30,4000000,1,25,0,0,4,0,0,199,91,"NO","GK",9,15,8);
	Goalkeeper g2("GK002","17/10/2031",111333,"Alisson Becker",28,2000000,67,0,0,0,2,0,0,193,91,"NO","GK",7,0,0);
	Goalkeeper g3("GK003","22/04/2032",111444,"Para Ochoa",37,1500000,23,0,0,0,1,0,0,192,76,"NO","GK",5,0,0);
	Defender d1("RB001","24/04/2029",122333,"Trent Alexander-Arnold",24,3000000,2,19,2,0,6,0,0,175,64,"NO","RB",9,8,7);
	Defender d2("LB001","10/02/2028",122555,"Joao Cancelo",28,3500000,3,18,2,0,6,0,0,182,72,"NO","LB",9,5,7);
	Defender d3("LCB001","11/07/2031",122666,"Sergio Ramos",31,7000000,4,25,3,0,6,0,2,182,82,"NO","LCB",9,9,8);
	Defender d4("RCB001","26/06/2022",122888,"Raphaël Varane",29,5500000,5,20,3,1,7,0,0,178,83,"NO","RCB",9,8,7);
	Defender d5("RB002","18/09/2027",122444,"Luke Shaw",27,3700000,20,6,2,1,6,0,1,185,75,"NO","RB",5,7,9);
	Defender d6("LB002","20/03/2025",122999,"Daniel Carvajal",30,4200000,16,7,1,0,5,0,0,173,73,"NO","LB",7,7,9);
	Midfielder m1("CAM001","29/09/2031",222333,"Kevin De Bruyne",31,9000000,8,25,2,0,8,15,0,181,68,"NO","CAM",8,10,7000,9);
	Midfielder m2("CM001","10/10/2026",222444,"Luka Modric",37,9500000,6,25,4,0,8,0,0,174,66,"NO","CM",8,10,8500,9);
	Midfielder m3("RCM001","21/10/2026",222555,"Thiago Alcantara",31,8000000,12,20,3,0,9,0,0,174,70,"NO","RCM",7,9,5000,8);
	Midfielder m4("LCM001","30/01/2024",222666,"Bruno Fernandes",28,7000000,25,5,0,0,7,0,0,179,64,"NO","CAM",7,7,6000,6);
	Midfielder m5("CDM001","11/05/2027",222888,"N\'Golo Kante",31,6500000,9,10,2,0,8,0,0,168,68,"NO","CDM",9,8,10000,7);
	Midfielder m6("CDM002","19/08/2023",222999,"Casemiro",30,5500000,13,15,1,1,8,0,0,185,84,"NO","CDM",10,8,9000,6);
	Midfielder m7("RM001","31/12/2032",222000,"Jorginho ",31,7300000,21,0,0,0,8,0,0,180,65,"NO","CAM",6,8,4000,8);
	Midfielder m8("LM001","25/05/2027",222777,"Bernardo Silva",28,4500000,32,3,1,0,8,0,0,173,64,"NO","CM",6,8,4500,8);
	Midfielder m9("CM002","06/01/2029",222111,"Paul Pogba",29,3000000,29,0,0,0,8,0,0,191,84,"NO","CDM",5,9,7300,6);
	Forward f1("ST001","30/04/2035",10001,"Cristiano Ronaldo",37,10000000,7,25,1,0,9,2,20,187,80,"NO","ST",8,10,10,5);
	Forward f2("RW001","24/06/2035",10002,"Frendico Chiesa",23,6000000,10,25,1,0,7,10,2,168,64,"NO","RW",8,8,8,0);
	Forward f3("LW001","05/02/2035",10003,"Neymar Jr",30,900000,11,25,2,0,9,3,8,180,70,"NO","LW",8,9,10,0);
	Forward f4("ST002","03/10/2024",10004,"Le Cong Vinh",37,1000000,17,0,0,0,6,0,0,192,85,"NO","ST",6,8,7,0);
	Forward f5("ST003","21/08/2024",10005,"Zlenski",33,850000,19,0,0,0,6,0,0,184,80,"NO","ST",4,5,5,0);
	vector<Forward> vf{f1,f2,f3,f4,f5};
	vector<Goalkeeper> vg{g1,g2,g3};
	vector<Defender> vd{d1,d2,d3,d4,d5,d6};
	vector<Midfielder> vmf{m1,m2,m3,m4,m5,m6,m7,m8,m9};
//	cout << "After taking office as the owner of the team, "<<Lo.v[0].getnameOwner()<<" came to meet and talk with the current manager "<<m.getFullName();
//	getch();
//	cout << "\n\nAfter the meeting of the two, " <<Lo.v[0].getnameOwner()<< " pondered whether to keep the current manager or recruit another manager\n\n";
//	getch();
//	char choose;
//	cout << "Fire or keep? (f or k) : ";
//	cin >> choose;
//	choose = toupper(choose);
//	if(choose == 'K') {
//		cout<<"\n\n"<<m.getFullName()<< " said : \"Thank you sir !!! I will give my all for this team\"\n\n";
//		getch();
//	} else {
//		cout<<"\n\n"<<m.getFullName()<< " said : \"This is not fair with me !!! Thank you for the opportunity to cooperate recently\"\n\n";
//		getch();
//		m=lm.scriptOfManager();
//	}
//	cout << "Mr. "<<Lo.v[0].getnameOwner()<<" went to the team's gathering area to meet the coach "<<c.getFullName();
//	getch();
//	cout << "\n\nAfter the meeting of the two people, " <<Lo.v[0].getnameOwner()<< " He wondered if this coach was right for the team\n\n";
//	getch();
//	cout << "The new manager of the team , "<<m.getFullName()<< " , said that \"his tactics still fit my style of transfer\"\n\n";
//	getch();
//	cout << "Fire or keep? (f or k) : ";
//	cin >> choose;
//	choose = toupper(choose);
//	if(choose == 'K') {
//		cout<<"\n\n"<<c.getFullName()<< " said : \"Thank you sir !!! I will give my all for this team\"\n\n";
//		getch();
//	} else {
//		cout<<"\n\n"<<c.getFullName()<< " said : \"This is not fair with me !!! Thank you for the opportunity to cooperate recently\"\n\n";
//		getch();
//		c = lc.scriptOfCoach();
//	}
	
	return 0;
} 

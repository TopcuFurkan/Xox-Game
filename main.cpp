#include <iostream>
#include "TicTacToe.h"


int main()
{
setlocale(LC_ALL, "Turkish");
char choice1,choice2,choices,choice3,choice4;
string Name1,Name2,Name3,Name4;
int hamlex=0;int hamleo=0;
TicTacToe b1;
b1.menu();
oyuncular p1,p2,p3,p4;
cout<<"Player 1,Lütfen isminizi giriniz"<<endl<<endl;
cin>>Name1;
cout<<endl<<endl<<"Player 2,Lütfen isminizi giriniz"<<endl<<endl;
cin>>Name2;
cout<<"Player 3,Lütfen isminizi giriniz"<<endl<<endl;
cin>>Name3;
cout<<endl<<endl<<"Player 4,Lütfen isminizi giriniz"<<endl<<endl;
cin>>Name4;
p1.setName(Name1);
p2.setName(Name2);
p2.setName(Name3);
p2.setName(Name4);
cout<<endl<<endl<<Name1<<"  Lütfen klavyeden büyük X harfine basýnýz "<<endl<<endl;
cin>>choice1;
cout<<endl<<endl<<Name2<<"  Lütfen klavyeden küçük x harfine basýnýz"<<endl<<endl;
cin>>choice2;
cout<<endl<<endl<<Name3<<"  Lütfen klavyeden büyük O harfine basýnýz"<<endl<<endl;
cin>>choice3;
cout<<endl<<endl<<Name4<<"  Lütfen klavyeden küçük o harfine basýnýz"<<endl<<endl;
cin>>choice4;
p1.setChoice(choice1);
p2.setChoice(choice2);
p2.setChoice(choice3);
p2.setChoice(choice4);
while(1){
	
cout<<endl<<endl<<"Senin sýran,"<<Name1<<endl<<endl;
b1.setPosition(choice1);
b1.getPosition();
b1.printBoard();
b1.hamlesayisix();
b1.hamlesayisio();
b1.kosegenhamlesayisix();
b1.hamlesayisio();

if(b1.checkwin()==1){
	cout<<"Takým Xx tebrikler kazandýnýz"<<endl;
	b1.hamlesayisix();	
	b1.kosegenhamlesayisix();
	
	b1.exit();
}
if(b1.checkwin()==2){
	cout<<"Takým Oo tebrikler kazandýnýz"<<endl;
	b1.hamlesayisio();
	b1.kosegenhamlesayisio();
	b1.exit();
}

cout<<endl<<endl<<"Senin sýran,"<<Name2<<endl<<endl;
b1.setPosition(choice2);
b1.getPosition();
b1.printBoard();
b1.hamlesayisix();
b1.hamlesayisio();
b1.kosegenhamlesayisix();
b1.kosegenhamlesayisio();
if(b1.checkwin()==1){
	cout<<"Takým Xx tebrikler kazandýnýz"<<endl;
	b1.hamlesayisix();
	b1.kosegenhamlesayisix();
	b1.exit();
}
if(b1.checkwin()==2){
	cout<<"Takým Oo tebrikler kazandýnýz"<<endl;
	b1.hamlesayisio();
	b1.kosegenhamlesayisio();
	b1.exit();
}
cout<<endl<<endl<<"Senin sýran,"<<Name3<<endl<<endl;
b1.setPosition(choice3);
b1.getPosition();
b1.printBoard();
b1.hamlesayisix();
b1.hamlesayisio();
b1.kosegenhamlesayisix();
b1.kosegenhamlesayisio();
if(b1.checkwin()==1){
	cout<<"Takým Xx tebrikler kazandýnýz"<<endl;
	b1.hamlesayisix();
	b1.kosegenhamlesayisix();
	
	b1.exit();
}
if(b1.checkwin()==2){
	cout<<"Takým Oo tebrikler kazandýnýz"<<endl;
	b1.hamlesayisio();
	b1.kosegenhamlesayisio();
	
	b1.exit();
}
cout<<endl<<endl<<"Senin sýran,"<<Name4<<endl<<endl;
b1.setPosition(choice4);
b1.getPosition();
b1.printBoard();
b1.hamlesayisix();
b1.hamlesayisio();
b1.kosegenhamlesayisix();
b1.kosegenhamlesayisio();

if(b1.checkwin()==1){
	cout<<"Takým Xx tebrikler kazandýnýz"<<endl;
	b1.hamlesayisix();
	b1.kosegenhamlesayisix();
	
	b1.exit();
}
if(b1.checkwin()==2){
	cout<<" Takým Oo tebrikler kazandýnýz"<<endl;
	b1.hamlesayisio();
	b1.kosegenhamlesayisio();
	b1.exit();
}
if(b1.checkDraw()==0)
{
    cout<<endl<<endl<<"Maç berabere bitti"<<endl;
    b1.exit();
    break;
}


	
	
}
	



}

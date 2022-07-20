#include "TicTacToe.h"
#include <iostream>


TicTacToe::TicTacToe()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            board[i][j]='_';
        }
    }
}

	void TicTacToe::menu(){
	cout<<endl<<endl;
	cout<<"            Tic tac toe                   "<<endl;
	cout<<"            (a)-Oyuna baþla             "<<endl;
	cout<<"            (b)-Tanýtým                "<<endl;
	cout<<"            (c)-Çýkýþ                     "<<endl;
	cin>>choises;
	switch(choises)
	{
		case 'a':
			printBoard();
			break;
		case 'b':
			instructions();
			break;
		case 'c':
			exit();
			system("pause");
			break;		
			
	}
		
}
void TicTacToe::instructions(){
	char press;
	cout<<"Oyuncular sýrayla 4x4’lük matrisin bir hücresine oyuncularýn kendi karakterlerini (X, x, O, o) yerleþtirirler."<<endl;
	cout<<"Daha sonra oyunculardan sýrasýyla isimleri ve seçmeleri gereken tablodaki yerleri istenir"<<endl;
	cout<<"her iki takým oyuncularý satýr veya sütunu ayný karakterlerle dolsurabilirlese oyunu kazanýrlar bol þans :) "<<endl;
	cout<<"menuye dönmek için 0'a veya heerhangi bir tuþa basýn"<<endl;    
	cin>>press;
	if(press==0){
		menu();
	}
	else
	{
		exit();
	}
	
}
void TicTacToe::exit(){
	cout<<"Çýkmak istiyormusunuz "<<endl<<endl;
	cout<<"(1) - yes"<<"(2)- no"<<endl;
	char choices;
	cin>>choices;
	if(choices==1)
	exit();              //parantez atýlmadý
	else
	menu();
	
}

int TicTacToe::checkwin(){
	if(board[0][0]==board[3][3]&&board[1][1]==board[2][2]&&board[0][0]!=' '&&board[3][3]!=' '&&board[1][1]!=' '&&board[2][2]!=' ')//sol capraz
		{
			if(board[0][0]=='X'||board[0][0]=='x')
				return 1;
			if(board[0][0]=='O'||board[0][0]=='o')
				return 2;
		}
	
	if(board[0][0]==board[1][1]&&board[2][2]==board[3][3]&&board[0][0]!=' '&&board[3][3]!=' '&&board[1][1]!=' '&&board[2][2]!=' ')
		{
			if(board[0][0]=='X'||board[0][0]=='x')
				return 1;
			if(board[0][0]=='O'||board[0][0]=='o')
				return 2;
		}
	if(board[0][3]==board[3][0]&&board[1][2]==board[2][1]&&board[0][3]!=' '&&board[3][0]!=' '&&board[1][2]!=' '&&board[2][1]!=' ')//sag capraz
		{
			if(board[0][3]=='X'||board[0][3]=='x')
				return 1;
			if(board[0][3]=='O'||board[0][3]=='o')
				return 2;
		}	
	if(board[0][3]==board[1][2]&&board[2][1]==board[3][0]&&board[0][3]!=' '&&board[3][0]!=' '&&board[1][2]!=' '&&board[2][1]!=' ')
		{
			if(board[0][3]=='X'||board[0][3]=='x')
				return 1;
			if(board[0][3]=='O'||board[0][3]=='o')
				return 2;
		}
	if(board[0][0]==board[0][3]&&board[0][1]==board[0][2]&&board[0][0]!=' '&&board[0][3]!=' '&&board[0][1]!=' '&&board[0][2]!=' ')//yatay 0
		{
			if(board[0][0]=='X'||board[0][0]=='x')
				return 1;
			if(board[0][0]=='O'||board[0][0]=='o')
				return 2;
		}
	if(board[0][0]==board[0][1]&&board[0][2]==board[0][3]&&board[0][0]!=' '&&board[0][3]!=' '&&board[0][1]!=' '&&board[0][2]!=' ')
		{
			if(board[0][0]=='X'||board[0][0]=='x')
				return 1;
			if(board[0][0]=='O'||board[0][0]=='o')
				return 2;
		}
	if(board[1][0]==board[1][3]&&board[1][1]==board[1][2]&&board[1][0]!=' '&&board[1][3]!=' '&&board[1][1]!=' '&&board[1][2]!=' ')//yatay 1
		{
			if(board[1][0]=='X'||board[1][0]=='x')
				return 1;
			if(board[1][0]=='O'||board[1][0]=='o')
				return 2;
		}
	if(board[1][0]==board[1][1]&&board[1][2]==board[1][3]&&board[1][0]!=' '&&board[1][3]!=' '&&board[1][1]!=' '&&board[1][2]!=' ')
		{
			if(board[1][0]=='X'||board[1][0]=='x')
				return 1;
			if(board[1][0]=='O'||board[1][0]=='o')
				return 2;
		}
	if(board[2][0]==board[2][3]&&board[2][1]==board[2][2]&&board[2][0]!=' '&&board[2][3]!=' '&&board[2][1]!=' '&&board[2][2]!=' ')//yatay 2
		{
			if(board[2][0]=='X'||board[2][0]=='x')
				return 1;
			if(board[2][0]=='O'||board[2][0]=='o')
				return 2;
		}
	if(board[2][0]==board[2][1]&&board[2][2]==board[2][3]&&board[2][0]!=' '&&board[2][3]!=' '&&board[2][1]!=' '&&board[2][2]!=' ')
		{
			if(board[2][0]=='X'||board[2][0]=='x')
				return 1;
			if(board[2][0]=='O'||board[2][0]=='o')
				return 2;
		}
	if(board[3][0]==board[3][3]&&board[3][1]==board[3][2]&&board[3][0]!=' '&&board[3][3]!=' '&&board[3][1]!=' '&&board[3][2]!=' ')//yatay 3
		{
			if(board[3][0]=='X'||board[3][0]=='x')
				return 1;
			if(board[3][0]=='O'||board[3][0]=='o')
				return 2;
		}
	if(board[3][0]==board[3][1]&&board[3][2]==board[3][3]&&board[3][0]!=' '&&board[3][3]!=' '&&board[3][1]!=' '&&board[3][2]!=' ')
		{
			if(board[3][0]=='X'||board[3][0]=='x')
				return 1;
			if(board[3][0]=='O'||board[3][0]=='o')
				return 2;
		}
	if(board[0][0]==board[3][0]&&board[1][0]==board[2][0]&&board[0][0]!=' '&&board[3][0]!=' '&&board[1][0]!=' '&&board[2][0]!=' ')//dikey 0
		{
			if(board[0][0]=='X'||board[0][0]=='x')
				return 1;
			if(board[0][0]=='O'||board[0][0]=='o')
				return 2;
		}
	if(board[0][0]==board[1][0]&&board[2][0]==board[3][0]&&board[0][0]!=' '&&board[3][0]!=' '&&board[1][0]!=' '&&board[2][0]!=' ')
		{
			if(board[0][0]=='X'||board[0][0]=='x')
				return 1;
			if(board[0][0]=='O'||board[0][0]=='o')
				return 2;
		}		
	if(board[0][1]==board[3][1]&&board[1][1]==board[2][1]&&board[0][1]!=' '&&board[3][1]!=' '&&board[1][1]!=' '&&board[2][1]!=' ')//dikey 1
		{
			if(board[0][1]=='X'||board[0][1]=='x')
				return 1;
			if(board[0][1]=='O'||board[0][1]=='o')
				return 2;
		}
	if(board[0][1]==board[1][1]&&board[2][1]==board[3][1]&&board[0][1]!=' '&&board[3][1]!=' '&&board[1][1]!=' '&&board[2][1]!=' ')
		{
			if(board[0][1]=='X'||board[0][1]=='x')
				return 1;
			if(board[0][1]=='O'||board[0][1]=='o')
				return 2;
		}
	if(board[0][2]==board[3][2]&&board[1][2]==board[2][2]&&board[0][2]!=' '&&board[3][2]!=' '&&board[1][2]!=' '&&board[2][2]!=' ')//dikey 2
		{
			if(board[0][2]=='X'||board[0][2]=='x')
				return 1;
			if(board[0][2]=='O'||board[0][2]=='o')
				return 2;
		}
	if(board[0][2]==board[1][2]&&board[2][2]==board[3][2]&&board[0][2]!=' '&&board[3][2]!=' '&&board[1][2]!=' '&&board[2][2]!=' ')
		{
			if(board[0][2]=='X'||board[0][2]=='x')
				return 1;
			if(board[0][2]=='O'||board[0][2]=='o')
				return 2;
		}
	if(board[0][3]==board[3][3]&&board[1][3]==board[2][3]&&board[0][3]!=' '&&board[3][3]!=' '&&board[1][3]!=' '&&board[2][3]!=' ')//dikey 3
		{
			if(board[0][3]=='X'||board[0][3]=='x')
				return 1;
			if(board[0][3]=='O'||board[0][3]=='o')
				return 2;
		}
	if(board[0][3]==board[1][3]&&board[2][3]==board[3][3]&&board[0][3]!=' '&&board[3][3]!=' '&&board[1][3]!=' '&&board[2][3]!=' ')
		{
			if(board[0][3]=='X'||board[0][3]=='x')
				return 1;
			if(board[0][3]=='O'||board[0][3]=='o')
				return 2;
		}
		
	return 0;		
}
	



void TicTacToe::printBoard()
{

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<board[i][j]<<'|';
        }
    cout<<endl;
    }
cout<<endl;
}
int TicTacToe::setPosition(char choice)
{
while(1)
{
int row,column;
cout<<"Lütfen istediðin satýr ve sütunu seç"<<endl;
cin>>row>>column;
if(board[row][column]=='_')
{
board[row][column]=choice;

break;

}
else
{
cout<<"Geçersiz satýr veya sütün 0,1,2,3 sayýlarý arasýnda seçim yapýnýz "<<endl;

}
}
}
char TicTacToe::getPosition()
{
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        return board[i][j];
    }
    }

}

void TicTacToe::kosegenhamlesayisix(){
	double kosegenhamlex=0;
	double hamleorani2;
		for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {  
	    
	 if(i=j){
	 	if(board[i][j]=='X'|| board[i][j]=='x'){
	 		kosegenhamlex++;
		 }
	 	
	 } 
    	
	}
}
	if(board[0][0]=='X'||board[0][0]=='x'){
		kosegenhamlex++;
	}
	
	for(int index=3;index>=0;index--){
		switch(index){
			case 3:
				if(board[index-3][index]=='X'||board[index-3][index]=='x')
				kosegenhamlex++;
				break;
			case 2:
				if(board[index-1][index]=='X'||board[index-1][index]=='x')
				kosegenhamlex++;
				break;
			case 1:
				if(board[index+1][index]=='X'||board[index+1][index]=='x')
				kosegenhamlex++;
				break;
			case 0:
				if(board[index+3][index]=='X'||board[index+3][index]=='x')
				kosegenhamlex++;
				break;
			default:
				cout<<"geçersiz iþlem"<<endl;
				break;
				
		}
		
		
		
	}
	
	
    hamleorani2=(kosegenhamlex/8.0)*100;
	cout<<"köþegen hamle oraný Xx takýmý için      "<<hamleorani2<<endl<<endl;
	
	
}

void TicTacToe::kosegenhamlesayisio(){
	double kosegenhamleo=0;
	double hamleorani2;
		for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {  
	    
	 if(i=j){
	 	if(board[i][j]=='O'|| board[i][j]=='o'){
	 		kosegenhamleo++;
		 }
	 	
	 } 
    	
	}
}
	if(board[0][0]=='O'||board[0][0]=='o'){
		kosegenhamleo++;
	}
	for(int index=3;index>=0;index--){
		switch(index){
			case 3:
				if(board[index-3][index]=='O'||board[index-3][index]=='o')
				kosegenhamleo++;
				break;
			case 2:
				if(board[index-1][index]=='O'||board[index-1][index]=='o')
				kosegenhamleo++;
				break;
			case 1:
				if(board[index+1][index]=='O'||board[index+1][index]=='o')
				kosegenhamleo++;
				break;
			case 0:
				if(board[index+3][index]=='O'||board[index+3][index]=='o')
				kosegenhamleo++;
				break;
			default:
				cout<<"geçersiz iþlem"<<endl;
				break;
				
		}
		
		
		
	}
	
	
	
	
    hamleorani2=(kosegenhamleo/8.0)*100;
	cout<<"köþegen hamle orani Oo takýmý için:      "<<hamleorani2    <<endl<<endl;
	
	
}



void TicTacToe::hamlesayisix(){
double hamlex=0;
double hamleorani;
	for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
    	if(board[i][j]=='X'|| board[i][j]=='x'){
    	hamlex++;
       
		}
    	
    }
    }
	
cout<<"yaptýðýnýz hamle x sayýsý      "<<hamlex<<endl<<endl;
 hamleorani=0;
hamleorani=(hamlex/16.0)*100;
cout<<"Hamle orani x:    "<<hamleorani<<endl<<endl;
}



void TicTacToe::hamlesayisio(){
double	hamleo=0;
double hamleorani;
	for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
    	if(board[i][j]=='O'|| board[i][j]=='o'){
    	hamleo++;
       
		}
    	
    }
    }
	
	cout<<"yaptýðýnýz hamle o sayýsý"    <<hamleo<<endl<<endl;
    hamleorani=0;
    hamleorani=(hamleo/16.0)*100;
    cout<<"Hamle orani o:     "<<hamleorani<<endl<<endl;
}






int TicTacToe::checkDraw()
{
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        if(board[i][j]=='_')
        {
            return 1;
            break;
        }

    }
 }
return 0;
}

void oyuncular::setName(string NameIn)
{
 Name=NameIn;
}
void oyuncular::setChoice(char choiceIn)
{
    choice=choiceIn;
}
char oyuncular::getChoice()
{
    return choice;
    cout<<endl<<endl;
}

string oyuncular::getName()
{
    return Name;
    cout<<endl<<endl;
}











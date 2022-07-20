include<iostream>
using namespace std;

class TicTacToe{
	
	char board[4][4];
	char choises;
	public:
	  TicTacToe();
	  void instructions();
	  void exit();
	  void menu();
	  int checkwin();
	  void printBoard();
	  int setPosition(char choice);
	  char getPosition();
      void kosegenhamlesayisix();
	  void kosegenhamlesayisio();
	  void hamlesayisix();
	  void hamlesayisio();
	  int checkDraw();
	
		
};


class oyuncular{
	string Name;
    char choice;
	public:
		void setName(string NameIn);
		void setChoice(char choiceIn);
		char getChoice();
		string getName();
	
		
	
	

};




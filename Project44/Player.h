#pragma once
#include<vector>
#include<SFML/Graphics.hpp>
using namespace std;

class Piece;
class Player
{
	vector<Piece*> Pieces;
	int Player_number;
	sf::Color c;

	int Pieces_atHome;
	int Passed_Pieces;
	string Name;
	bool Can_Go_Inside;



public:
	int start_index;
	bool isPassed;
	int Home_cord[2];
	int End_cord[2];
	int Pieces_cord[4][2];

	Player();
	Player(int Player_n, sf::Color, int** Gcords, int* Scords, int* Encords, int start_ind);
	void Draw(sf::RenderWindow& w);

	Piece* getPiece(int i);
	void setPiece(int i, int x, int y);



	bool checkGoti(int mousex, int mousey, int& goti);
	int piecesHome();

	void pieceHomeIn();
	void pieceHomeOut();

	void piecePassed();
	int getPassedPieces();

	bool CheckWin();
	void setCanGoInside();
	bool getCanGoInside();

};


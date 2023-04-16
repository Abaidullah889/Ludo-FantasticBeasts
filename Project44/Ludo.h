#pragma once
#include"Ludo.h"
#include"Dice.h"
#include"Player.h"

class Ludo
{
	Dice d;
	vector<Player>Players;
	vector<int>diceValue;
	int Turn;
	int roll_value;
	bool now_move;
	int kitnay_ay;
	vector<int>winStands;












public:



	Ludo();
	void changeTurn();
	void moveGoti(int& cur_x, int& cur_y);
	bool canGoHome(int Turn, int movement, int Goti_no);

	bool checkSavePoints(int x, int y);
	void checkKill(int Turn, int goti_no, bool& now_move);
	int boxestoCenter(int Turn, int goti_no);


	bool movetowardsHome(bool move, int Turn, int& x, int& y, int goti_no);


	void Play();
};




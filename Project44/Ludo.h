#pragma once
#include"Ludo.h"
#include"Dice.h"
#include"SFML/Graphics.hpp"
#include"Player.h"

class Ludo
{
	Dice d;
	int nop;
	vector<Player>Players;
	vector<int>diceValue;
	int Turn;
	int roll_value;
	bool now_move;
	int kitnay_ay;
	vector<int>winStands;


public:



	Ludo(int& mode, sf::RenderWindow& window);

	void checkHome(int Turn, int goti_no, int mode);


	bool isValidTurn(int Turn);
	void changeTurn(int n);
	void moveGoti(int& cur_x, int& cur_y);
	void moveGoti4(int Turn, int goti_no, int& cur_x, int& cur_y);
	bool canGoHome(int Turn, int movement, int Goti_no, int mode);

	bool checkSavePoints(int x, int y, int mode);
	void checkKill(int Turn, int goti_no, bool& now_move, int mood);
	int boxestoCenter(int Turn, int goti_no, int mode);


	////////////////////////////////////////////////////////////////////////////


	void checkJota(int Turn, int goti_no);
	bool isTherejota(int Turn, int goti_no, int cur_pos);
	bool isValidMove(int Turn, int goti_no, int kitny_ay);

	bool isValidMoveB(int Turn, int goti_no, int kitnay_ay);
	bool isTherejotaB(int Turn, int goti_no, int cur_pos);

	void checkKillB(int Turn, int goti_no, bool& now_move, int mode);

	void checkHomeB(int Turn, int goti_no, int mode);

	///////////////////////////////////////////////////////////////////////////////////////
	bool movetowardsHome(bool move, int Turn, int& x, int& y, int goti_no);
	bool movetowardsHome4(bool move, int Turn, int& x, int& y, int goti_no, int mode);


	int Play(sf::RenderWindow& window);
	int Play2(sf::RenderWindow& window);
	int Play4(sf::RenderWindow& window);


	int Play2b(sf::RenderWindow& window);

};


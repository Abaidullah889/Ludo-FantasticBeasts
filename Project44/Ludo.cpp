#pragma once
#include "Ludo.h"
#include<SFML/Graphics.hpp>
#include"Piece.h"
#include"Textures.h"

void Sleep(int n)
{
	for (int i = 0; i < 1000 * n; i++)
	{

	}
}
Ludo::Ludo()
{

	sf::Color DRed = sf::Color::Color(130, 0, 0);
	sf::Color DGreen = sf::Color::Color(1, 50, 32);
	sf::Color DPurpule = sf::Color::Color(48, 25, 52);
	sf::Color DYellow = sf::Color::Color(139, 128, 0);
	sf::Color DOrange = sf::Color::Color(255, 69, 0);
	sf::Color DBlue = sf::Color::Color(0, 114, 160);


	//Player1
	int** player1_cord = new int* [4];
	int* player1_home = new int[2];
	int* player1_end = new int[2];


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	player1_home[0] = 54;
	player1_home[1] = 290;

	player1_cord[0] = new int[2];
	player1_cord[1] = new int[2];
	player1_cord[2] = new int[2];
	player1_cord[3] = new int[2];

	player1_cord[0][0] = 81;
	player1_cord[0][1] = 90;

	player1_cord[1][0] = 160;
	player1_cord[1][1] = 90;

	player1_cord[2][0] = 81;
	player1_cord[2][1] = 166;

	player1_cord[3][0] = 160;
	player1_cord[3][1] = 166;

	player1_end[0] = 11;
	player1_end[1] = 339;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	//Player2
	int** player2_cord = new int* [4];
	int* player2_home = new int[2];
	int* player2_end = new int[2];

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	player2_home[0] = 363;
	player2_home[1] = 58;


	player2_cord[0] = new int[2];
	player2_cord[1] = new int[2];
	player2_cord[2] = new int[2];
	player2_cord[3] = new int[2];


	player2_cord[0][0] = 479;
	player2_cord[0][1] = 90;

	player2_cord[1][0] = 558;
	player2_cord[1][1] = 90;

	player2_cord[2][0] = 558;
	player2_cord[2][1] = 165;

	player2_cord[3][0] = 479;
	player2_cord[3][1] = 165;


	player2_end[0] = 319;
	player2_end[1] = 11;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	//Player3
	int** player3_cord = new int* [4];
	int* player3_home = new int[2];
	int* player3_end = new int[2];

	///////////////////////////////////////////////////////////////////

	player3_home[0] = 760;
	player3_home[1] = 58;


	player3_cord[0] = new int[2];
	player3_cord[1] = new int[2];
	player3_cord[2] = new int[2];
	player3_cord[3] = new int[2];

	player3_cord[0][0] = 875;
	player3_cord[0][1] = 90;

	player3_cord[1][0] = 955;
	player3_cord[1][1] = 90;

	player3_cord[2][0] = 955;
	player3_cord[2][1] = 165;

	player3_cord[3][0] = 877;
	player3_cord[3][1] = 165;


	player3_end[0] = 716;
	player3_end[1] = 11;





	///////////////////////////////////////////////////////////////////





	//Player4
	int** player4_cord = new int* [4];
	int* player4_home = new int[2];
	int* player4_end = new int[2];




	///////////////////////////////////////////////////////////////////

	player4_home[0] = 980;
	player4_home[1] = 386;


	player4_cord[0] = new int[2];
	player4_cord[1] = new int[2];
	player4_cord[2] = new int[2];
	player4_cord[3] = new int[2];

	player4_cord[0][0] = 875;
	player4_cord[0][1] = 509;

	player4_cord[1][0] = 954;
	player4_cord[1][1] = 509;

	player4_cord[2][0] = 954;
	player4_cord[2][1] = 585;

	player4_cord[3][0] = 875;
	player4_cord[3][1] = 585;


	player4_end[0] = 1025;
	player4_end[1] = 338;





	///////////////////////////////////////////////////////////////////







	//Player5
	int** player5_cord = new int* [4];
	int* player5_home = new int[2];
	int* player5_end = new int[2];



	///////////////////////////////////////////////////////////////////

	player5_home[0] = 672;
	player5_home[1] = 617;


	player5_cord[0] = new int[2];
	player5_cord[1] = new int[2];
	player5_cord[2] = new int[2];
	player5_cord[3] = new int[2];


	player5_cord[0][0] = 479;
	player5_cord[0][1] = 509;

	player5_cord[1][0] = 560;
	player5_cord[1][1] = 509;

	player5_cord[2][0] = 558;
	player5_cord[2][1] = 585;

	player5_cord[3][0] = 479;
	player5_cord[3][1] = 585;


	player5_end[0] = 716;
	player5_end[1] = 662;


	///////////////////////////////////////////////////////////////////










	//Player6
	int** player6_cord = new int* [4];
	int* player6_home = new int[2];
	int* player6_end = new int[2];


	///////////////////////////////////////////////////////////////////

	player6_home[0] = 275;
	player6_home[1] = 617;


	player6_cord[0] = new int[2];
	player6_cord[1] = new int[2];
	player6_cord[2] = new int[2];
	player6_cord[3] = new int[2];


	player6_cord[0][0] = 81;
	player6_cord[0][1] = 509;

	player6_cord[1][0] = 160;
	player6_cord[1][1] = 509;

	player6_cord[2][0] = 81;
	player6_cord[2][1] = 585;

	player6_cord[3][0] = 160;
	player6_cord[3][1] = 585;


	player6_end[0] = 319;
	player6_end[1] = 662;





	///////////////////////////////////////////////////////////////////



	Player p1(1, DRed, player1_cord, player1_home, player1_end);
	Player p2(2, DGreen, player2_cord, player2_home, player2_end);
	Player p3(3, DPurpule, player3_cord, player3_home, player3_end);
	Player p4(4, DYellow, player4_cord, player4_home, player4_end);
	Player p5(5, DOrange, player5_cord, player5_home, player5_end);
	Player p6(6, DBlue, player6_cord, player6_home, player6_end);
	Players.push_back(p1);
	Players.push_back(p2);
	Players.push_back(p3);
	Players.push_back(p4);
	Players.push_back(p5);
	Players.push_back(p6);
	this->Turn = 0;
	this->roll_value = 0;
	this->kitnay_ay = 0;
	bool now_move = false;
}
void Ludo::changeTurn()
{
	if (Turn == 5)
	{
		Turn = 0;
	}
	else
	{
		Turn++;
	}

	//Turn = 0;
}
void Ludo::moveGoti(int& cur_x, int& cur_y)
{
	if ((cur_x >= 54 && cur_x < 146) && (cur_y == 290))
	{
		cur_x += 45;
	}
	else if ((cur_x == 146) && (cur_y == 290))
	{
		cur_x += 43;
	}
	else if ((cur_x == 189) && (cur_y == 290))
	{
		cur_x += 44;
	}
	else if ((cur_x == 233) && (cur_y == 290))
	{
		cur_x = 275;
		cur_y = 246;
	}
	else if ((cur_x == 275) && (cur_y <= 246 && cur_y > 11))
	{
		cur_y -= 47;
	}
	else if ((cur_x >= 275 && cur_x < 363) && (cur_y == 11))
	{
		cur_x += 44;
	}
	else if ((cur_x == 363) && (cur_y >= 11 && cur_y < 246))
	{
		cur_y += 47;
	}
	else if ((cur_x == 363) && (cur_y == 246))
	{
		cur_x = 408;
		cur_y = 292;
	}
	else if ((cur_x >= 408 && cur_x < 584) && (cur_y == 292))
	{
		cur_x += 44;
	}
	else if ((cur_x == 584) && (cur_y == 292))
	{
		cur_x = 629;
		cur_y = 292;
	}
	else if ((cur_x == 629) && (cur_y == 292))
	{
		cur_x = 672;
		cur_y = 246;
	}
	else if ((cur_x == 672) && (cur_y <= 246 && cur_y > 11))
	{
		cur_y -= 47;
	}
	else if ((cur_x == 672) && (cur_y == 11))
	{
		cur_x = 716;
		cur_y = 11;
	}
	else if ((cur_x == 716) && (cur_y == 11))
	{
		cur_x = 760;
		cur_y = 11;
	}
	else if ((cur_x == 760) && (cur_y < 246 && cur_y >= 11))
	{
		cur_y += 47;
	}
	else if ((cur_x == 760) && (cur_y == 246))
	{
		cur_x = 804;
		cur_y = 292;
	}
	else if ((cur_x >= 804 && cur_x < 1024) && (cur_y == 292))
	{
		cur_x += 44;
	}
	else if ((cur_x == 1024) && (cur_y < 386 && cur_y >= 292))
	{
		cur_y += 47;
	}
	else if ((cur_x > 804 && cur_x <= 1024) && (cur_y == 386))
	{
		cur_x -= 44;
	}
	else if ((cur_x == 804) && (cur_y == 386))
	{
		cur_x = 760;
		cur_y = 432;
	}
	else if ((cur_x == 760) && (cur_y < 620 && cur_y >= 432))
	{
		cur_y += 47;
	}
	else if ((cur_x == 760) && (cur_y == 620))
	{
		cur_x = 760;
		cur_y = 662;
	}
	else if ((cur_x <= 760 && cur_x > 672) && (cur_y == 662))
	{
		cur_x -= 44;
	}
	else if ((cur_x == 672) && (cur_y <= 662 && cur_y > 572))
	{
		cur_y -= 45;
	}
	else if ((cur_x == 672) && (cur_y <= 572 && cur_y > 431))
	{
		cur_y -= 47;
	}
	else if ((cur_x == 672) && (cur_y == 431))
	{
		cur_x = 629;
		cur_y = 386;
	}
	else if ((cur_x == 629) && (cur_y == 386))
	{
		cur_x = 584;
		cur_y = 386;
	}
	else if ((cur_x <= 584 && cur_x > 408) && (cur_y == 386))
	{
		cur_x -= 44;
	}
	else if ((cur_x == 408) && (cur_y == 386))
	{
		cur_x = 363;
		cur_y = 432;
	}
	else if ((cur_x == 363) && (cur_y >= 432 && cur_y < 620))
	{
		cur_y += 47;
	}
	else if ((cur_x == 363) && (cur_y == 620))
	{
		cur_x = 363;
		cur_y = 662;
	}
	else if ((cur_x > 275 && cur_x <= 363) && (cur_y == 662))
	{
		cur_x -= 44;
	}
	else if ((cur_x == 275) && (cur_y == 662))
	{
		cur_x = 275;
		cur_y = 617;
	}
	else if ((cur_x == 275) && (cur_y == 617))
	{
		cur_x = 275;
		cur_y = 572;
	}
	else if ((cur_x == 275) && (cur_y <= 572 && cur_y > 431))
	{
		cur_y -= 47;
	}
	else if ((cur_x == 275) && (cur_y == 431))
	{
		cur_x = 231;
		cur_y = 386;
	}
	else if ((cur_x == 231) && (cur_y == 386))
	{
		cur_x = 187;
		cur_y = 386;
	}
	else if ((cur_x == 187) && (cur_y == 386))
	{
		cur_x = 144;
		cur_y = 386;
	}
	else if ((cur_x == 144) && (cur_y == 386))
	{
		cur_x = 99;
		cur_y = 386;
	}
	else if ((cur_x == 99) && (cur_y == 386))
	{
		cur_x = 54;
		cur_y = 386;
	}
	else if ((cur_x == 54) && (cur_y == 386))
	{
		cur_x = 11;
		cur_y = 386;
	}
	else if ((cur_x == 11) && (cur_y == 386))
	{
		cur_x = 11;
		cur_y = 339;
	}
	else if ((cur_x == 11) && (cur_y == 339))
	{
		cur_x = 11;
		cur_y = 292;
	}
	else if ((cur_x == 11) && (cur_y == 292))
	{
		cur_x = 54;
		cur_y = 290;
	}
}
bool Ludo::movetowardsHome(bool move, int Turn, int& cur_x, int& cur_y, int goti_no)
{
	if ((cur_x >= 11 && cur_x <= 233) && (cur_y == 339) && Turn == 0)
	{
		if (move == true)
		{
			if ((cur_x >= 11 && cur_x < 146) && (cur_y == 339))
			{
				cur_x += 45;
			}
			else if ((cur_x == 146) && (cur_y == 339))
			{
				cur_x += 43;
			}
			else if ((cur_x == 189) && (cur_y == 339))
			{
				cur_x += 44;
			}
			else if (cur_x == 233 && cur_y == 339)
			{
				if (goti_no == 1)
				{
					cur_x = 269;
					cur_y = 337;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 2)
				{
					cur_x = 269;
					cur_y = 309;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 3)
				{
					cur_x = 269;
					cur_y = 365;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 4)
				{
					cur_x = 296;
					cur_y = 337;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
			}
		}
		return true;
	}
	else if ((cur_y >= 11 && cur_y <= 246) && (cur_x == 319) && Turn == 1)
	{
		if (move == true)
		{
			if ((cur_y >= 11 && cur_y < 246) && (cur_x == 319))
			{
				cur_y += 47;
			}
			else if (cur_y == 246 && cur_x == 319)
			{

				if (goti_no == 1)
				{
					cur_x = 319;
					cur_y = 313;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 2)
				{
					cur_x = 319;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 3)
				{
					cur_x = 290;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 4)
				{
					cur_x = 348;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
			}
		}
		return true;
	}
	else if ((cur_y >= 11 && cur_y <= 246) && (cur_x == 716) && Turn == 2)
	{
		if (move == true)
		{
			if ((cur_y >= 11 && cur_y < 246) && (cur_x == 716))
			{
				cur_y += 47;
			}
			else if (cur_y == 246 && cur_x == 716)
			{

				if (goti_no == 1)
				{
					cur_x = 716;
					cur_y = 313;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 2)
				{
					cur_x = 716;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 3)
				{
					cur_x = 687;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 4)
				{
					cur_x = 745;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
			}

		}
		return true;
	}
	else if ((cur_x >= 804 && cur_x <= 1025) && (cur_y == 338) && Turn == 3)
	{
		if (move == true)
		{
			if ((cur_x > 804 && cur_x <= 1025) && (cur_y == 338))
			{
				cur_x -= 44;
			}
			else if (cur_x == 804 && cur_y == 338)
			{
				if (goti_no == 1)
				{
					cur_x = 739;
					cur_y = 337;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 2)
				{
					cur_x = 766;
					cur_y = 337;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 3)
				{
					cur_x = 766;
					cur_y = 308;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 4)
				{
					cur_x = 766;
					cur_y = 366;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
			}
		}
		return true;
	}
	else if ((cur_y >= 431 && cur_y <= 662) && (cur_x == 716) && Turn == 4)
	{
		if (move == true)
		{
			if ((cur_x == 716) && (cur_y <= 662 && cur_y > 572))
			{
				cur_y -= 45;
			}
			else if ((cur_x == 716) && (cur_y <= 572 && cur_y >= 431))
			{
				cur_y -= 47;
			}
			else if (cur_x == 716 && cur_y == 431)
			{
				if (goti_no == 1)
				{
					cur_x = 716;
					cur_y = 363;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 2)
				{
					cur_x = 716;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 3)
				{
					cur_x = 688;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 4)
				{
					cur_x = 744;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
			}
		}
		return true;
	}
	else if ((cur_y >= 431 && cur_y <= 662) && (cur_x == 319) && Turn == 5)
	{
		if (move == true)
		{
			if ((cur_x == 319) && (cur_y <= 662 && cur_y > 572))
			{
				cur_y -= 45;
			}
			else if ((cur_x == 319) && (cur_y <= 572 && cur_y >= 431))
			{
				cur_y -= 47;
			}
			else if (cur_x == 716 && cur_y == 431)
			{
				if (goti_no == 1)
				{
					cur_x = 347;
					cur_y = 391;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 2)
				{
					cur_x = 291;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 3)
				{
					cur_x = 319;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
				else if (goti_no == 4)
				{
					cur_x = 319;
					cur_y = 360;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					Players[Turn].getPiece(goti_no)->setisPassed(true);
					Players[Turn].piecePassed();
				}
			}
		}
		return true;
	}

	return false;
} //
bool Ludo::canGoHome(int Turn, int kitnay_ay, int goti_no)
{

	int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
	int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
	bool ja_skta = false;

	for (int i = 0; i < kitnay_ay; i++)
	{
		if (movetowardsHome(false, Turn, tempx, tempy, goti_no) == false)
		{
			moveGoti(tempx, tempy);
		}
		if (movetowardsHome(false, Turn, tempx, tempy, goti_no) == true)
		{
			movetowardsHome(true, Turn, tempx, tempy, goti_no);
			ja_skta = true;
		}
	}

	if (ja_skta == true)
	{
		return true;
	}
	return false;

}
bool Ludo::checkSavePoints(int cur_x, int cur_y)
{
	// stars

	if ((cur_x == 275) && (cur_y == 105))
	{
		return true;
	}
	else if ((cur_x == 672) && (cur_y == 105))
	{
		return true;
	}
	else if ((cur_x == 936) && (cur_y == 292))
	{
		return true;
	}
	else if ((cur_x == 760) && (cur_y == 573))
	{
		return true;
	}
	else if ((cur_x == 363) && (cur_y == 573))
	{
		return true;
	}
	else if ((cur_x == 99) && (cur_y == 386))
	{
		return true;
	}

	// home

	else if ((cur_x == 54) && (cur_y == 290))
	{
		return true;
	}
	else if ((cur_x == 363) && (cur_y == 58))
	{
		return true;
	}
	else if ((cur_x == 760) && (cur_y == 58))
	{
		return true;
	}
	else if ((cur_x == 980) && (cur_y == 386))
	{
		return true;
	}
	else if ((cur_x == 672) && (cur_y == 617))
	{
		return true;
	}
	else if ((cur_x == 275) && (cur_y == 617))
	{
		return true;
	}


	return false;
}
void Ludo::checkKill(int Turn, int goti_no, bool& now_move)
{
	int kill_goti_no = 0;
	int kill_playerno = 0;
	bool kill = false;


	for (int j = 0; j < 6; j++)
	{
		if (j != Turn)
		{
			for (int k = 0; k < 4; k++)
			{
				if ((Players[Turn].getPiece(goti_no)->getPosition_X() == Players[j].getPiece(k)->getPosition_X()) && (Players[Turn].getPiece(goti_no)->getPosition_Y() == Players[j].getPiece(k)->getPosition_Y()))
				{
					kill_goti_no = k;
					kill_playerno = j;
					kill = true;
				}
			}
		}
	}


	if (kill == true)
	{
		Players[kill_playerno].getPiece(kill_goti_no)->setPosition(Players[kill_playerno].Pieces_cord[kill_goti_no][0], Players[kill_playerno].Pieces_cord[kill_goti_no][1]);
		Players[kill_playerno].getPiece(kill_goti_no)->setatHome(true);
		Players[kill_playerno].pieceHomeIn();
		now_move = false;
	}



}
int Ludo::boxestoCenter(int Turn, int goti_no)
{
	int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
	int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
	int count = 0;
	if (Turn == 0)
	{
		while (tempx <= 262)
		{
			tempx += 42;
			count++;
		}
		return count;
	}
	else if (Turn == 1)
	{
		while (tempy <= 252)
		{
			tempy += 42;
			count++;
		}
		return count;
	}
	else if (Turn == 2)
	{
		while (tempy <= 252)
		{
			tempy += 42;
			count++;
		}
		return count;
	}
	else if (Turn == 3)
	{
		while (tempx >= 790)
		{
			tempx -= 42;
			count++;
		}
		return count;
	}

	else if (Turn == 4)
	{
		while (tempy >= 421)
		{
			tempy -= 42;
			count++;
		}
		return count;
	}
	else if (Turn == 5)
	{
		while (tempy >= 421)
		{
			tempy -= 42;
			count++;
		}
		return count;
	}

}

void Ludo::Play()
{

	sf::RenderWindow window(sf::VideoMode().getDesktopMode(), " Ludo");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






	int six_count = 0;
	//int roll_value=0;
	bool move_hogya = false;
	bool clear_array = false;
	bool agli_bari = false;


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//sf::RenderWindow window(sf::VideoMode().getDesktopMode(), "Ludo");
	sf::Sprite board;
	sf::Sprite Bg;
	sf::Sprite speak;
	speak.setTexture(Textures::speak);
	speak.setPosition(1050, 358);
	sf::Sprite dice_shape;
	dice_shape.setTexture(Textures::Dice1);
	dice_shape.setPosition(1055, 89);
	board.setTexture(Textures::Board);
	Bg.setTexture(Textures::Bg);
	sf::Event event;

	while (window.isOpen())
	{

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

			case sf::Event::MouseButtonPressed:
			{
				cout << "Pieces itny han " << Turn << " is turn kay" << Players[Turn].piecesHome() << " now move = " << now_move << "movement" << kitnay_ay << " array size" << diceValue.size() << endl;

				sf::Vector2i position = sf::Mouse::getPosition(window);
				if (((position.x >= 1097 && position.x <= 1133) && (position.y >= 238 && position.y <= 274)) && diceValue.size() > 0 && Players[Turn].piecesHome() < 4)
				{
					//cout << " Yahan par itny liya han" << diceValue[0] << endl;
					kitnay_ay = diceValue[0];
				}
				if (((position.x >= 1148 && position.x <= 1184) && (position.y >= 238 && position.y <= 274)) && diceValue.size() > 1 && Players[Turn].piecesHome() < 4)
				{
					kitnay_ay = diceValue[1];
				}
				if (((position.x >= 1198 && position.x <= 1234) && (position.y >= 238 && position.y <= 274)) && diceValue.size() > 2 && Players[Turn].piecesHome() < 4)
				{
					kitnay_ay = diceValue[2];
				}


				sf::FloatRect dice_position = dice_shape.getGlobalBounds();


				if (dice_position.contains(position.x, position.y))
				{

					if (now_move == false)
					{
						//cout << roll_value;
						//d.rollDice();
						//cout << Turn << " ";
						//roll_value = d.getDiceValue();
						//cout << roll_value<<" ";
						diceValue.push_back(roll_value);


						if (roll_value == 6)
						{
							six_count++;
							if (six_count == 3)
							{
								clear_array = true;
							}
						}

						else if (Players[Turn].piecesHome() == 4 && find(diceValue.begin(), diceValue.end(), 6) == diceValue.end())
						{
							agli_bari = true;
							//diceValue.clear();
							//cout << Turn;
							changeTurn();
						}

						else
						{
							now_move = true;

							six_count = 0;
						}
					}

				}

				//cout << position.x << "," << position.y << " ";
				//cout << diceValue.size() << endl;;
				if (now_move == true)
				{
					int goti_no = -1;
					if (Players[Turn].checkGoti(position.x, position.y, goti_no) == true)
					{

						if (Players[Turn].getPiece(goti_no)->getatHome() == true && find(diceValue.begin(), diceValue.end(), 6) != diceValue.end())
						{
							int cordx = Players[Turn].Home_cord[0];
							int cordy = Players[Turn].Home_cord[1];
							Players[Turn].pieceHomeOut();
							Players[Turn].getPiece(goti_no)->setatHome(false);
							//Players[Turn].pieceHomeOut();

							std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), 6);
							if (position != diceValue.end())
							{
								diceValue.erase(position);
							}
							Players[Turn].getPiece(goti_no)->setPosition(cordx, cordy);
						}
						else if (Players[Turn].getPiece(goti_no)->getatHome() == false)
						{
							if (kitnay_ay > 0)
							{
								if (canGoHome(Turn, kitnay_ay, goti_no) == false)
								{
									for (int i = 0; i < kitnay_ay; i++)
									{
										int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
										int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
										moveGoti(tempx, tempy);
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
									}
									if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y()) == false)
									{
										checkKill(Turn, goti_no, now_move);
									}
									std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
									if (position != diceValue.end()) {
										diceValue.erase(position);
									}
									kitnay_ay = 0;
								}
								else
								{
									int itny_rah_gay = 0;
									int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
									int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
									//int count = boxestoCenter(Turn, goti_no);
									for (int i = 0; i < kitnay_ay; i++)
									{
										itny_rah_gay = kitnay_ay - (i + 1);
										if (movetowardsHome(false, Turn, tempx, tempy, goti_no) == true)
										{
											if (Players[Turn].getPiece(goti_no)->getPosition_X() >= Players[Turn].End_cord[0] && Players[Turn].getPiece(goti_no)->getPosition_Y() >= Players[Turn].End_cord[1])
											{
												if (boxestoCenter(Turn, goti_no) >= kitnay_ay)
												{
													movetowardsHome(true, Turn, tempx, tempy, goti_no);
													move_hogya = true;
												}
											}
										}
										else
										{
											/*int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
											int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();*/
											moveGoti(tempx, tempy);
											//Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
											if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y()) == false)
											{
												checkKill(Turn, goti_no, now_move);
											}
											Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										}




									}
									if (move_hogya == true)
									{
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
										if (position != diceValue.end()) {
											diceValue.erase(position);
										}
										kitnay_ay = 0;
									}
								}
							}
						}


					}
					else
					{

					}
					if (diceValue.size() == 0 && now_move == true)
					{
						//cout << Turn << " ";
						six_count = 0;
						changeTurn();
						now_move = false;
						move_hogya = false;
					}

				}
				break;

			}
			case sf::Event::KeyPressed:
			{
				if (event.key.code == sf::Keyboard::Num6)
				{
					roll_value = 6;

				}
				else if (event.key.code == sf::Keyboard::Num5)
				{
					roll_value = 5;
				}
				else if (event.key.code == sf::Keyboard::Num4)
				{
					roll_value = 4;

				}
				else if (event.key.code == sf::Keyboard::Num3)
				{
					roll_value = 3;
				}
				else if (event.key.code == sf::Keyboard::Num2)
				{
					roll_value = 2;

				}
				else if (event.key.code == sf::Keyboard::Num1)
				{
					roll_value = 1;
				}
				break;
			}

			}


		}



		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		window.clear();
		window.draw(Bg);
		window.draw(board);
		for (int i = 0; i < 6; i++)
		{
			Players[i].Draw(window);
		}
		window.draw(speak);


		
		window.draw(dice_shape);
		
		if (six_count == 0)
		{
			d.Draw(window, diceValue);
		}
		if (six_count >= 0)
		{
			if (six_count == 3)
			{
				d.Draw(window, diceValue);
				diceValue.clear();
				changeTurn();
				six_count = 0;
				
			}
			else
			{
				d.Draw(window, diceValue);
				
			}
		}











		//////////////////////////////////////////////////////////////////////TURN DISPLAY//////////////////////////////////////////////////////////////////


		if (Turn == 0)
		{
			sf::Sprite red;
			red.setTexture(Textures::sign0);
			red.scale(1, 1);
			red.setPosition(1088, 371);
			window.draw(red);
		}
		if (Turn == 1)
		{
			sf::Sprite green;
			green.setTexture(Textures::sign1);
			green.scale(1, 1);
			green.setPosition(1088, 371);
			window.draw(green);
		}
		if (Turn == 2)
		{
			sf::Sprite purple;
			purple.setTexture(Textures::sign2);
			purple.scale(1, 1);
			purple.setPosition(1088, 371);
			window.draw(purple);
		}
		if (Turn == 3)
		{
			sf::Sprite yellow;
			yellow.setTexture(Textures::sign3);
			yellow.scale(1, 1);
			yellow.setPosition(1088, 371);
			window.draw(yellow);
		}
		if (Turn == 4)
		{
			sf::Sprite orange;
			orange.setTexture(Textures::sign4);
			orange.scale(1, 1);
			orange.setPosition(1088, 371);
			window.draw(orange);
		}
		if (Turn == 5)
		{
			sf::Sprite blue;
			blue.setTexture(Textures::sign5);
			blue.scale(1, 1);
			blue.setPosition(1088, 371);
			window.draw(blue);
		}


		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		window.display();
		if (agli_bari == true)
		{
			Sleep(300000);
			agli_bari = false;
			diceValue.clear();
		}
		if (clear_array == true)
		{
			Sleep(300000);
			clear_array = false;
		}
	}

}
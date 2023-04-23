#pragma once
#include "Ludo.h"
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include"Piece.h"
#include"Textures.h"

void Sleep(int n)
{
	for (int i = 0; i < 1000 * n; i++)
	{

	}
}
Ludo::Ludo(int& mode, sf::RenderWindow& window)
{
	//sf::RenderWindow window(sf::VideoMode().getDesktopMode(), "Ludo");
	sf::Sprite multi;
	sf::Event st;
	int n = 0;
	bool krday = false;
	multi.setTexture(Textures::Multi);

	while (window.isOpen())
	{
		while (window.pollEvent(st))
		{
			switch (st.type)
			{
			case sf::Event::Closed:
				window.close();
			case sf::Event::MouseButtonPressed:
			{
				sf::Vector2i pos = sf::Mouse::getPosition();
				cout << pos.x << "," << pos.y;

				if ((pos.x >= 740 && pos.x <= 949) && (pos.y >= 257 && pos.y <= 361))
				{
					n = 2;
					mode = 2;
					krday = true;
					//window.close();
				}
				else if ((pos.x >= 785 && pos.x <= 891) && (pos.y >= 411 && pos.y <= 530))
				{
					n = 4;
					mode = 4;
					krday = true;
					//window.close();
				}
				else if ((pos.x >= 738 && pos.x <= 918) && (pos.y >= 590 && pos.y <= 659))
				{
					n = 6;
					mode = 6;
					krday = true;
					//window.close();
				}
			}
			}

		}
		if (krday == true)
		{
			break;
		}

		window.clear();
		window.draw(multi);
		window.display();
	}

	if (n == 2)
	{
		sf::Color DRed = sf::Color::Color(130, 0, 0);
		sf::Color DYellow = sf::Color::Color(139, 128, 0);

		//Player1
		int** player1_cord = new int* [4];
		int* player1_home = new int[2];
		int* player1_end = new int[2];

		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		player1_home[0] = 93;
		player1_home[1] = 286;

		player1_cord[0] = new int[2];
		player1_cord[1] = new int[2];
		player1_cord[2] = new int[2];
		player1_cord[3] = new int[2];

		player1_cord[0][0] = 135;
		player1_cord[0][1] = 87;

		player1_cord[1][0] = 260;
		player1_cord[1][1] = 87;

		player1_cord[2][0] = 135;
		player1_cord[2][1] = 163;

		player1_cord[3][0] = 260;
		player1_cord[3][1] = 163;

		player1_end[0] = 23;
		player1_end[1] = 332;



		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		//Player3
		int** player3_cord = new int* [4];
		int* player3_home = new int[2];
		int* player3_end = new int[2];


		///////////////////////////////////////////////////////////////////////////////////////////////////////////////




		player3_home[0] = 935;
		player3_home[1] = 378;


		player3_cord[0] = new int[2];
		player3_cord[1] = new int[2];
		player3_cord[2] = new int[2];
		player3_cord[3] = new int[2];

		player3_cord[0][0] = 768;
		player3_cord[0][1] = 502;

		player3_cord[1][0] = 893;
		player3_cord[1][1] = 502;

		player3_cord[2][0] = 893;
		player3_cord[2][1] = 578;

		player3_cord[3][0] = 768;
		player3_cord[3][1] = 578;


		player3_end[0] = 1005;
		player3_end[1] = 332;


		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		Player p1(1, DRed, player1_cord, player1_home, player1_end, 0);
		Player p3(3, DYellow, player3_cord, player3_home, player3_end, 0);
		Players.push_back(p1);
		Players.push_back(p3);
		this->nop = 2;
		this->Turn = 0;
		this->roll_value = 0;
		this->kitnay_ay = 0;
		bool now_move = false;



	}
	if (n == 4)
	{
		sf::Color DRed = sf::Color::Color(130, 0, 0);
		sf::Color DGreen = sf::Color::Color(1, 50, 32);
		sf::Color DYellow = sf::Color::Color(139, 128, 0);
		sf::Color DBlue = sf::Color::Color(0, 114, 160);


		//Player1
		int** player1_cord = new int* [4];
		int* player1_home = new int[2];
		int* player1_end = new int[2];

		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		player1_home[0] = 93;
		player1_home[1] = 286;

		player1_cord[0] = new int[2];
		player1_cord[1] = new int[2];
		player1_cord[2] = new int[2];
		player1_cord[3] = new int[2];

		player1_cord[0][0] = 135;
		player1_cord[0][1] = 87;

		player1_cord[1][0] = 260;
		player1_cord[1][1] = 87;

		player1_cord[2][0] = 135;
		player1_cord[2][1] = 163;

		player1_cord[3][0] = 260;
		player1_cord[3][1] = 163;

		player1_end[0] = 23;
		player1_end[1] = 332;



		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







		//Player2
		int** player2_cord = new int* [4];
		int* player2_home = new int[2];
		int* player2_end = new int[2];

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



		player2_home[0] = 583;
		player2_home[1] = 56;


		player2_cord[0] = new int[2];
		player2_cord[1] = new int[2];
		player2_cord[2] = new int[2];
		player2_cord[3] = new int[2];


		player2_cord[0][0] = 768;
		player2_cord[0][1] = 87;

		player2_cord[1][0] = 893;
		player2_cord[1][1] = 87;

		player2_cord[2][0] = 768;
		player2_cord[2][1] = 163;

		player2_cord[3][0] = 893;
		player2_cord[3][1] = 163;


		player2_end[0] = 513;
		player2_end[1] = 10;


		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		//Player3
		int** player3_cord = new int* [4];
		int* player3_home = new int[2];
		int* player3_end = new int[2];


		///////////////////////////////////////////////////////////////////////////////////////////////////////////////




		player3_home[0] = 935;
		player3_home[1] = 378;


		player3_cord[0] = new int[2];
		player3_cord[1] = new int[2];
		player3_cord[2] = new int[2];
		player3_cord[3] = new int[2];

		player3_cord[0][0] = 768;
		player3_cord[0][1] = 502;

		player3_cord[1][0] = 893;
		player3_cord[1][1] = 502;

		player3_cord[2][0] = 893;
		player3_cord[2][1] = 578;

		player3_cord[3][0] = 768;
		player3_cord[3][1] = 578;


		player3_end[0] = 1005;
		player3_end[1] = 332;


		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




		//Player4
		int** player4_cord = new int* [4];
		int* player4_home = new int[2];
		int* player4_end = new int[2];


		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		player4_home[0] = 443;
		player4_home[1] = 609;


		player4_cord[0] = new int[2];
		player4_cord[1] = new int[2];
		player4_cord[2] = new int[2];
		player4_cord[3] = new int[2];

		player4_cord[0][0] = 135;
		player4_cord[0][1] = 502;

		player4_cord[1][0] = 260;
		player4_cord[1][1] = 502;

		player4_cord[2][0] = 135;
		player4_cord[2][1] = 578;

		player4_cord[3][0] = 260;
		player4_cord[3][1] = 578;


		player4_end[0] = 513;
		player4_end[1] = 655;



		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		Player p1(1, DRed, player1_cord, player1_home, player1_end, 0);
		Player p2(2, DGreen, player2_cord, player2_home, player2_end, 13);
		Player p3(3, DYellow, player3_cord, player3_home, player3_end, 26);
		Player p4(6, DBlue, player4_cord, player4_home, player4_end, 39);
		Players.push_back(p1);
		Players.push_back(p2);
		Players.push_back(p3);
		Players.push_back(p4);
		this->nop = 4;
		this->Turn = 0;
		this->roll_value = 0;
		this->kitnay_ay = 0;
		bool now_move = false;


		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	}
	if (n == 6)
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



		Player p1(1, DRed, player1_cord, player1_home, player1_end, 0);
		Player p2(2, DGreen, player2_cord, player2_home, player2_end, 0);
		Player p3(3, DPurpule, player3_cord, player3_home, player3_end, 0);
		Player p4(4, DYellow, player4_cord, player4_home, player4_end, 0);
		Player p5(5, DOrange, player5_cord, player5_home, player5_end, 0);
		Player p6(6, DBlue, player6_cord, player6_home, player6_end, 0);
		Players.push_back(p1);
		Players.push_back(p2);
		Players.push_back(p3);
		Players.push_back(p4);
		Players.push_back(p5);
		Players.push_back(p6);
		this->nop = 6;
		this->Turn = 0;
		this->roll_value = 0;
		this->kitnay_ay = 0;
		bool now_move = false;
	}
}
bool Ludo::isValidTurn(int Turn)
{
	return Players[Turn].getPassedPieces() == 4;
}
void Ludo::changeTurn(int n)
{

	if (n == 6)
	{
		do
		{
			if (Turn == 5)
			{
				Turn = 0;
			}
			else
			{
				Turn++;
			}
		} while (isValidTurn(Turn));
	}
	else if (n == 4)
	{
		do
		{
			if (Turn == 3)
			{
				Turn = 0;
			}
			else
			{
				Turn++;
			}
		} while (isValidTurn(Turn));
		//Turn = 0;
	}
	else if (n == 2)
	{
		if (Turn == 1)
		{
			Turn = 0;
		}
		else
		{
			Turn = 1;
		}
	}

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
void Ludo::moveGoti4(int Turn, int goti_no, int& cur_x, int& cur_y)
{
	if ((cur_x >= 93 && cur_x < 373) && (cur_y == 286))
	{
		cur_x += 70;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 373) && (cur_y == 286))
	{
		cur_x = 443;
		cur_y = 240;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 443) && (cur_y <= 240 && cur_y > 10))
	{
		cur_y -= 46;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 443) && (cur_y == 10))
	{
		cur_x = 443 + 70;
		cur_y = 10;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 443 + 70) && (cur_y == 10))
	{
		cur_x = 583;
		cur_y = 10;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 583) && (cur_y >= 10 && cur_y < 240))
	{
		cur_y += 46;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 583) && (cur_y == 240))
	{
		cur_x = 655;
		cur_y = 286;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x >= 655 && cur_x < 1005) && (cur_y == 286))
	{
		cur_x += 70;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 1005) && (cur_y == 286))
	{
		cur_x = 1005;
		cur_y = 332;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 1005) && (cur_y == 332))
	{
		cur_x = 1005;
		cur_y = 378;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x <= 1005 && cur_x > 655) && (cur_y == 378))
	{
		cur_x -= 70;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 655) && (cur_y == 378))
	{
		cur_x = 583;
		cur_y = 425;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 583) && (cur_y >= 425 && cur_y < 655))
	{
		cur_y += 46;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 583) && (cur_y == 655))
	{
		cur_x = 513;
		cur_y = 655;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 513) && (cur_y == 655))
	{
		cur_x = 443;
		cur_y = 655;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 443) && (cur_y > 425 && cur_y <= 655))
	{
		cur_y -= 46;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 443) && (cur_y == 425))
	{
		cur_x = 373;
		cur_y = 378;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x <= 373 && cur_x > 23) && (cur_y == 378))
	{
		cur_x -= 70;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 23) && (cur_y == 378))
	{
		cur_x = 23;
		cur_y = 332;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 23) && (cur_y == 332))
	{
		cur_x = 23;
		cur_y = 286;
		//Players[Turn].getPiece(goti_no)->pos++;
	}
	else if ((cur_x == 23) && (cur_y == 286))
	{
		cur_x = 93;
		cur_y = 286;
		//Players[Turn].getPiece(goti_no)->pos=0;
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
				if (goti_no == 0)
				{
					cur_x = 269;
					cur_y = 337;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
				}
				else if (goti_no == 1)
				{
					cur_x = 269;
					cur_y = 309;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
				}
				else if (goti_no == 2)
				{
					cur_x = 269;
					cur_y = 365;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
				}
				else if (goti_no == 3)
				{
					cur_x = 296;
					cur_y = 337;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
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

				if (goti_no == 0)
				{
					cur_x = 319;
					cur_y = 313;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
				}
				else if (goti_no == 1)
				{
					cur_x = 319;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
				}
				else if (goti_no == 2)
				{
					cur_x = 290;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
				}
				else if (goti_no == 3)
				{
					cur_x = 348;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
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

				if (goti_no == 0)
				{
					cur_x = 716;
					cur_y = 313;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
				}
				else if (goti_no == 1)
				{
					cur_x = 716;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
				}
				else if (goti_no == 2)
				{
					cur_x = 687;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
				}
				else if (goti_no == 3)
				{
					cur_x = 745;
					cur_y = 284;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

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
				if (goti_no == 0)
				{
					cur_x = 739;
					cur_y = 337;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

				}
				else if (goti_no == 1)
				{
					cur_x = 766;
					cur_y = 337;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

				}
				else if (goti_no == 2)
				{
					cur_x = 766;
					cur_y = 308;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

				}
				else if (goti_no == 3)
				{
					cur_x = 766;
					cur_y = 366;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

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
				if (goti_no == 0)
				{
					cur_x = 716;
					cur_y = 363;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

				}
				else if (goti_no == 1)
				{
					cur_x = 716;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

				}
				else if (goti_no == 2)
				{
					cur_x = 688;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

				}
				else if (goti_no == 3)
				{
					cur_x = 744;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

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
				if (goti_no == 0)
				{
					cur_x = 347;
					cur_y = 391;
					//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

				}
				else if (goti_no == 1)
				{
					cur_x = 291;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

				}
				else if (goti_no == 2)
				{
					cur_x = 319;
					cur_y = 391;

					//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

				}
				else if (goti_no == 3)
				{
					cur_x = 319;
					cur_y = 360;

					//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

				}
			}
		}
		return true;
	}

	return false;
} //
bool Ludo::movetowardsHome4(bool move, int Turn, int& cur_x, int& cur_y, int goti_no, int mode)
{



	if (mode == 2)
	{

		if ((cur_x >= 23 && cur_x <= 373) && (cur_y == 332) && Turn == 0)
		{
			if (move == true)
			{
				if ((cur_x >= 23 && cur_x < 373) && (cur_y == 332))
				{
					cur_x += 70;
				}
				else if (cur_x == 373 && cur_y == 332)
				{

					if (goti_no == 0)
					{
						cur_x = 463;
						cur_y = 332;
						//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					}
					else if (goti_no == 1)
					{
						cur_x = 428;
						cur_y = 332;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					}
					else if (goti_no == 2)
					{
						cur_x = 428;
						cur_y = 298;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					}
					else if (goti_no == 3)
					{
						cur_x = 428;
						cur_y = 366;

						//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					}
				}
			}
			return true;
		}
		else if ((cur_x >= 655 && cur_x <= 1005) && (cur_y == 332) && Turn == 1)
		{
			if (move == true)
			{
				if ((cur_x > 655 && cur_x <= 1005) && (cur_y == 332))
				{
					cur_x -= 70;
				}
				else if (cur_x == 655 && cur_y == 332)
				{

					if (goti_no == 0)
					{
						cur_x = 565;
						cur_y = 332;
						//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

					}
					else if (goti_no == 1)
					{
						cur_x = 600;
						cur_y = 332;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

					}
					else if (goti_no == 2)
					{
						cur_x = 600;
						cur_y = 298;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

					}
					else if (goti_no == 3)
					{
						cur_x = 600;
						cur_y = 366;

						//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

					}
				}
			}
			return true;
		}
		return false;
	}
	if (mode == 4)
	{

		if ((cur_x >= 23 && cur_x <= 373) && (cur_y == 332) && Turn == 0)
		{
			if (move == true)
			{
				if ((cur_x >= 23 && cur_x < 373) && (cur_y == 332))
				{
					cur_x += 70;
				}
				else if (cur_x == 373 && cur_y == 332)
				{

					if (goti_no == 0)
					{
						cur_x = 463;
						cur_y = 332;
						//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
					}
					else if (goti_no == 1)
					{
						cur_x = 428;
						cur_y = 332;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
					}
					else if (goti_no == 2)
					{
						cur_x = 428;
						cur_y = 298;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
					}
					else if (goti_no == 3)
					{
						cur_x = 428;
						cur_y = 366;

						//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
					}
				}
			}
			return true;
		}
		else if ((cur_y >= 10 && cur_y <= 240) && (cur_x == 513) && Turn == 1)
		{
			if (move == true)
			{
				if ((cur_y >= 10 && cur_y < 240) && (cur_x == 513))
				{
					cur_y += 46;
				}
				else if (cur_y == 240 && cur_x == 513)
				{

					if (goti_no == 0)
					{
						cur_x = 514;
						cur_y = 312;
						//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

					}
					else if (goti_no == 1)
					{
						cur_x = 514;
						cur_y = 278;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

					}
					else if (goti_no == 2)
					{
						cur_x = 548;
						cur_y = 278;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

					}
					else if (goti_no == 3)
					{
						cur_x = 480;
						cur_y = 278;

						//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

					}
				}
			}
			return true;
		}
		else if ((cur_x >= 655 && cur_x <= 1005) && (cur_y == 332) && Turn == 2)
		{
			if (move == true)
			{
				if ((cur_x > 655 && cur_x <= 1005) && (cur_y == 332))
				{
					cur_x -= 70;
				}
				else if (cur_x == 655 && cur_y == 332)
				{

					if (goti_no == 0)
					{
						cur_x = 565;
						cur_y = 332;
						//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

					}
					else if (goti_no == 1)
					{
						cur_x = 600;
						cur_y = 332;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

					}
					else if (goti_no == 2)
					{
						cur_x = 600;
						cur_y = 298;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

					}
					else if (goti_no == 3)
					{
						cur_x = 600;
						cur_y = 366;

						//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

					}
				}
			}
			return true;
		}
		else if ((cur_y >= 425 && cur_y <= 655) && (cur_x == 513) && Turn == 3)
		{
			if (move == true)
			{
				if ((cur_x == 513) && (cur_y <= 655 && cur_y > 425))
				{
					cur_y -= 46;
				}
				else if (cur_x == 513 && cur_y == 425)
				{
					if (goti_no == 0)
					{
						cur_x = 514;
						cur_y = 385;
						//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

					}
					else if (goti_no == 1)
					{
						cur_x = 480;
						cur_y = 385;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

					}
					else if (goti_no == 2)
					{
						cur_x = 548;
						cur_y = 385;

						//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

					}
					else if (goti_no == 3)
					{
						cur_x = 514;
						cur_y = 352;

						//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

					}
				}
			}
			return true;
		}
		return false;
	}
}
bool Ludo::canGoHome(int Turn, int kitnay_ay, int goti_no, int mode)
{

	if (mode == 6)
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
	if (mode == 4)
	{
		int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
		int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
		bool ja_skta = false;
		for (int i = 0; i < kitnay_ay; i++)
		{
			if (movetowardsHome4(false, Turn, tempx, tempy, goti_no, 4) == false)
			{
				moveGoti4(Turn, goti_no, tempx, tempy);
			}
			if (movetowardsHome4(false, Turn, tempx, tempy, goti_no, 4) == true)
			{
				movetowardsHome4(true, Turn, tempx, tempy, goti_no, 4);
				ja_skta = true;
			}
		}

		if (ja_skta == true)
		{
			return true;
		}
		return false;

	}

	if (mode == 2)
	{
		int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
		int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
		bool ja_skta = false;
		for (int i = 0; i < kitnay_ay; i++)
		{
			if (movetowardsHome4(false, Turn, tempx, tempy, goti_no, 2) == false)
			{
				moveGoti4(Turn, goti_no, tempx, tempy);
			}
			if (movetowardsHome4(false, Turn, tempx, tempy, goti_no, 2) == true)
			{
				movetowardsHome4(true, Turn, tempx, tempy, goti_no, 2);
				ja_skta = true;
			}
		}

		if (ja_skta == true)
		{
			return true;
		}
		return false;
	}


}
bool Ludo::checkSavePoints(int cur_x, int cur_y, int mode)
{

	if (mode == 6)
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
	if (mode == 4)
	{
		// stars

		if ((cur_x == 443) && (cur_y == 102))
		{
			return true;
		}
		else if ((cur_x == 865) && (cur_y == 286))
		{
			return true;
		}
		else if ((cur_x == 583) && (cur_y == 563))
		{
			return true;
		}
		else if ((cur_x == 163) && (cur_y == 378))
		{
			return true;
		}
		// home

		else if ((cur_x == 93) && (cur_y == 286))
		{
			return true;
		}
		else if ((cur_x == 583) && (cur_y == 56))
		{
			return true;
		}
		else if ((cur_x == 935) && (cur_y == 378))
		{
			return true;
		}
		else if ((cur_x == 443) && (cur_y == 609))
		{
			return true;
		}
		return false;
	}

}
void Ludo::checkKill(int Turn, int goti_no, bool& now_move, int mode)
{
	sf::SoundBuffer sb;
	sb.loadFromFile("Textures/Kill.ogg");
	sf::Sound s;
	s.setBuffer(sb);

	sf::Music killm;
	killm.openFromFile("Textures/Kill.ogg");

	int kill_goti_no = 0;
	int kill_playerno = 0;
	bool kill = false;

	if (mode == 6)
	{
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
						killm.play();
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
	else if (mode == 4)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j != Turn)
			{
				for (int k = 0; k < 4; k++)
				{
					if ((Players[Turn].getPiece(goti_no)->getPosition_X() == Players[j].getPiece(k)->getPosition_X()) && (Players[Turn].getPiece(goti_no)->getPosition_Y() == Players[j].getPiece(k)->getPosition_Y()))
					{
						kill_goti_no = k;
						kill_playerno = j;
						killm.play();
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
	else if (mode == 2)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j != Turn)
			{
				for (int k = 0; k < 4; k++)
				{
					if ((Players[Turn].getPiece(goti_no)->getPosition_X() == Players[j].getPiece(k)->getPosition_X()) && (Players[Turn].getPiece(goti_no)->getPosition_Y() == Players[j].getPiece(k)->getPosition_Y()))
					{
						kill_goti_no = k;
						kill_playerno = j;
						killm.play();
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


	if (kill == true)
	{
		killm.play();
		Sleep(330000);
		killm.stop();
	}


}
int Ludo::boxestoCenter(int Turn, int goti_no, int mode)
{
	int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
	int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
	int count = 0;

	if (mode == 6)
	{
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
	else if (mode == 4)
	{
		if (Turn == 0)
		{
			while (tempx <= 392)
			{
				tempx += 70;
				count++;
			}
			return count;
		}
		else if (Turn == 1)
		{
			while (tempy <= 252)
			{
				tempy += 46;
				count++;
			}
			return count;
		}
		else if (Turn == 2)
		{
			while (tempx >= 640)
			{
				tempx -= 70;
				count++;
			}
			return count;
		}
		else if (Turn == 3)
		{
			while (tempy >= 415)
			{
				tempy -= 46;
				count++;
			}
			return count;
		}
	}
	else if (mode == 2)
	{
		if (Turn == 0)
		{
			while (tempx <= 392)
			{
				tempx += 70;
				count++;
			}
			return count;
		}
		else if (Turn == 1)
		{
			while (tempx >= 640)
			{
				tempx -= 70;
				count++;
			}
			return count;
		}
	}

}

void Ludo::checkHome(int Turn, int goti_no, int mode)
{

	sf::Music pass;
	pass.openFromFile("Textures/Pass_audio.ogg");
	if (mode == 6)
	{
		if (Turn == 0)
		{
			if (goti_no == 0)
			{
				int cur_x = 269;
				int cur_y = 337;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
			}
			else if (goti_no == 1)
			{
				int cur_x = 269;
				int cur_y = 309;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 269;
				int cur_y = 365;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 296;
				int cur_y = 337;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
			}
		}
		else if (Turn == 1)
		{
			if (goti_no == 0)
			{
				int cur_x = 319;
				int cur_y = 313;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
			}
			else if (goti_no == 1)
			{
				int cur_x = 319;
				int cur_y = 284;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 290;
				int cur_y = 284;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 348;
				int cur_y = 284;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
			}
		}
		else if (Turn == 2)
		{
			if (goti_no == 0)
			{
				int cur_x = 716;
				int cur_y = 313;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
			}
			else if (goti_no == 1)
			{
				int cur_x = 716;
				int cur_y = 284;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 687;
				int cur_y = 284;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 745;
				int cur_y = 284;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

			}
		}
		else if (Turn == 3)
		{
			if (goti_no == 0)
			{
				pass.play();
				Sleep(330000);
				pass.stop();
				int cur_x = 739;
				int cur_y = 337;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

			}
			else if (goti_no == 1)
			{
				int cur_x = 766;
				int cur_y = 337;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

			}
			else if (goti_no == 2)
			{
				int cur_x = 766;
				int cur_y = 308;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

			}
			else if (goti_no == 3)
			{
				int cur_x = 766;
				int cur_y = 366;

				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
			}
		}
		else if (Turn == 4)
		{
			if (goti_no == 0)
			{
				int cur_x = 716;
				int cur_y = 363;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

			}
			else if (goti_no == 1)
			{
				int cur_x = 716;
				int cur_y = 391;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

			}
			else if (goti_no == 2)
			{
				int cur_x = 688;
				int cur_y = 391;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

			}
			else if (goti_no == 3)
			{
				int cur_x = 744;
				int cur_y = 391;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

			}
		}
		else if (Turn == 5)
		{
			if (goti_no == 0)
			{
				int cur_x = 347;
				int cur_y = 391;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

			}
			else if (goti_no == 1)
			{
				int cur_x = 291;
				int cur_y = 391;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

			}
			else if (goti_no == 2)
			{
				int cur_x = 319;
				int cur_y = 391;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

			}
			else if (goti_no == 3)
			{
				int cur_x = 319;
				int cur_y = 360;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

			}

		}
	}
	else if (mode == 4)
	{
		if (Turn == 0)
		{
			if (goti_no == 0)
			{
				int cur_x = 463;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
			}
			else if (goti_no == 1)
			{
				int cur_x = 428;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 428;
				int cur_y = 298;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 428;
				int cur_y = 366;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
			}
		}
		else if (Turn == 1)
		{
			if (goti_no == 0)
			{
				int cur_x = 514;
				int cur_y = 312;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);

			}
			else if (goti_no == 1)
			{
				int cur_x = 514;
				int cur_y = 278;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);

			}
			else if (goti_no == 2)
			{
				int cur_x = 548;
				int cur_y = 278;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);

			}
			else if (goti_no == 3)
			{
				int cur_x = 480;
				int cur_y = 278;

				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
			}
		}
		else if (Turn == 2)
		{
			if (goti_no == 0)
			{
				int cur_x = 565;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
			}
			else if (goti_no == 1)
			{
				int cur_x = 600;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 600;
				int cur_y = 298;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 600;
				int cur_y = 366;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
			}

		}
		else if (Turn == 3)
		{
			if (goti_no == 0)
			{
				int cur_x = 514;
				int cur_y = 385;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
			}
			else if (goti_no == 1)
			{
				int cur_x = 480;
				int cur_y = 385;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 548;
				int cur_y = 385;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 514;
				int cur_y = 352;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);

			}

		}
	}
	else if (mode == 2)
	{
		if (Turn == 0)
		{
			if (goti_no == 0)
			{
				int cur_x = 463;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
			}
			else if (goti_no == 1)
			{
				int cur_x = 428;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 428;
				int cur_y = 298;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 428;
				int cur_y = 366;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
			}
		}
		else if (Turn == 1)
		{
			if (goti_no == 0)
			{
				int cur_x = 565;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();

					Sleep(33000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}
				//Players[Turn].getPiece(goti_no)->setPosition(269, 337);
			}
			else if (goti_no == 1)
			{
				int cur_x = 600;
				int cur_y = 332;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 309);
			}
			else if (goti_no == 2)
			{
				int cur_x = 600;
				int cur_y = 298;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(269, 365);
			}
			else if (goti_no == 3)
			{
				int cur_x = 600;
				int cur_y = 366;
				if (Players[Turn].getPiece(goti_no)->getPosition_X() == cur_x && Players[Turn].getPiece(goti_no)->getPosition_Y() == cur_y)
				{
					pass.play();
					Sleep(330000);
					pass.stop();
					Players[Turn].piecePassed();
					Players[Turn].getPiece(goti_no)->setisPassed(true);
				}

				//Players[Turn].getPiece(goti_no)->setPosition(296, 337);
			}

		}
	}
}








int Ludo::Play(sf::RenderWindow& window)
{

	sf::Music dicem;
	dicem.openFromFile("Textures/Diceroll_audio.ogg");

	sf::Music win;
	win.openFromFile("Textures/Win.ogg");


	sf::Sprite sprite;
	int count = 0;
	//sf::RenderWindow window(sf::VideoMode().getDesktopMode(), " Ludo");
	vector<sf::Texture> textures;
	textures.push_back(Textures::r1);
	textures.push_back(Textures::r2);
	textures.push_back(Textures::r3);
	textures.push_back(Textures::r4);
	textures.push_back(Textures::r5);
	textures.push_back(Textures::r6);
	int frameCount = textures.size();
	int currentFrame = 0;
	sf::Clock clock;
	float frameTime = 1 / 14.0; // animation speed
	float currentTime = 0;


	bool firstTime = true;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






	int six_count = 0;
	//int roll_value=0;
	bool move_hogya = false;
	bool clear_array = false;
	bool agli_bari = false;
	bool do_animation = false;

	bool bexit = false;
	bool brestart = false;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	sf::Sprite exit;
	sf::Sprite restart;
	exit.setTexture(Textures::exit);
	restart.setTexture(Textures::restart);
	exit.setPosition(1300, 650);
	restart.setPosition(1250, 655);



	sf::Text yes;
	yes.setFont(Textures::name);
	yes.setString("Yes");
	yes.setFillColor(sf::Color::Red);
	yes.setPosition(590, 383);
	sf::Text no;
	no.setFont(Textures::name);
	no.setString("No");
	no.setPosition(740, 383);
	no.setFillColor(sf::Color::Red);

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

						do_animation = true;
						dicem.play();
						if (do_animation == true)
						{
							while (count < 100)
							{
								currentTime += clock.restart().asSeconds();

								if (currentTime >= frameTime)
								{
									currentTime -= frameTime;
									currentFrame++;
									if (currentFrame >= frameCount) {
										currentFrame = 0;
									}
									sprite.setTexture(textures[currentFrame]);
									sprite.setPosition(1055, 89);
								}
								count++;
								if (count == 100)
								{
									do_animation = false;
								}
								window.clear();
								window.draw(Bg);
								window.draw(board);
								for (int i = 0; i < 6; i++)
								{
									if (Players[i].getPassedPieces() != 1)
									{
										Players[i].Draw(window);
									}
								}
								window.draw(speak);

								if (six_count >= 0)
								{
									if (six_count == 3)
									{
										d.Draw(window, diceValue);
										diceValue.clear();
										changeTurn(6);
										six_count = 0;
										firstTime = true;
									}
									else
									{
										d.Draw(window, diceValue);
										firstTime = true;
									}
								}
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
								window.draw(sprite);
								window.draw(exit);
								window.draw(restart);
								window.display();
							}
						}
						dicem.stop();
						count = 0;


						diceValue.push_back(roll_value);


						if (roll_value == 6)
						{
							six_count++;
							firstTime = false;
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
							changeTurn(6);
						}

						else
						{
							now_move = true;

							six_count = 0;
						}
					}

				}
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
								if (canGoHome(Turn, kitnay_ay, goti_no, 6) == false)
								{
									for (int i = 0; i < kitnay_ay; i++)
									{
										int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
										int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();

										moveGoti(tempx, tempy);
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);


										window.clear();
										window.draw(Bg);
										window.draw(board);
										for (int i = 0; i < 6; i++)
										{

											Players[i].Draw(window);

										}
										window.draw(speak);

										if (six_count >= 0)
										{
											if (six_count == 3)
											{
												d.Draw(window, diceValue);
												diceValue.clear();
												changeTurn(6);
												six_count = 0;
												firstTime = true;
											}
											else
											{
												d.Draw(window, diceValue);
												firstTime = true;
											}
										}
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
										window.draw(dice_shape);
										window.draw(exit);
										window.draw(restart);
										//window.draw(sprite);
										window.display();

										Sleep(50000);


									}
									if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y(), 6) == false)
									{
										checkKill(Turn, goti_no, now_move, 6);
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
									Piece* tmp = new Piece(Players[Turn].getPiece(goti_no)->getColor(), goti_no, Turn, (Players[Turn].getPiece(goti_no))->getPosition_X(), (Players[Turn].getPiece(goti_no)->getPosition_Y()));
									int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
									int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
									//int count = boxestoCenter(Turn, goti_no);
									for (int i = 0; i < kitnay_ay; i++)
									{
										itny_rah_gay = kitnay_ay - (i + 1);
										if (movetowardsHome(false, Turn, tempx, tempy, goti_no) == true)
										{
											cout << "boxes to home are = " << boxestoCenter(Turn, goti_no, 6) << endl;
											if (boxestoCenter(Turn, goti_no, 6) >= kitnay_ay)
											{
												movetowardsHome(true, Turn, tempx, tempy, goti_no);
												move_hogya = true;
												tmp->setPosition(tempx, tempy);
												window.clear();
												window.draw(Bg);
												window.draw(board);
												for (int i = 0; i < 6; i++)
												{
													if (i == Turn)
													{
														for (int i = 0; i < 4; i++)
														{
															if (goti_no == i)
															{
																window.draw(tmp->Goti);
															}
															else
															{
																window.draw(Players[Turn].getPiece(i)->Goti);
															}
														}
													}
													else
													{
														Players[i].Draw(window);
													}

												}
												window.draw(speak);

												if (six_count >= 0)
												{
													if (six_count == 3)
													{
														d.Draw(window, diceValue);
														diceValue.clear();
														changeTurn(6);
														six_count = 0;
														firstTime = true;
													}
													else
													{
														d.Draw(window, diceValue);
														firstTime = true;
													}
												}

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
													sf::Sprite yellow;
													yellow.setTexture(Textures::sign3);
													yellow.scale(1, 1);
													yellow.setPosition(1088, 371);
													window.draw(yellow);
												}
												if (Turn == 3)
												{
													sf::Sprite Blue;
													Blue.setTexture(Textures::sign5);
													Blue.scale(1, 1);
													Blue.setPosition(1088, 371);
													window.draw(Blue);
												}

												window.draw(dice_shape);
												//window.draw(sprite);
												window.draw(exit);
												window.draw(restart);
												window.display();
												Sleep(50000);
											}
										}
										else
										{
											/*int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
											int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();*/
											moveGoti(tempx, tempy);

											Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
											window.clear();
											window.draw(Bg);
											window.draw(board);
											for (int i = 0; i < 6; i++)
											{

												Players[i].Draw(window);

											}
											window.draw(speak);
											if (six_count >= 0)
											{
												if (six_count == 3)
												{
													d.Draw(window, diceValue);
													diceValue.clear();
													changeTurn(6);
													six_count = 0;
													firstTime = true;
												}
												else
												{
													d.Draw(window, diceValue);
													firstTime = true;
												}
											}
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
											if (do_animation == false)
											{
												count = 0;
												window.draw(dice_shape);
											}
											//window.draw(sprite);
											window.draw(exit);
											window.draw(restart);
											window.display();
											Sleep(50000);
											//Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);




										}

									}

									if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y(), 6) == false)
									{
										checkKill(Turn, goti_no, now_move, 6);
									}

									if (move_hogya == false)
									{
										std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
										if (position != diceValue.end()) {
											diceValue.erase(position);
										}
										kitnay_ay = 0;
									}

									if (move_hogya == true)
									{
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										cout << endl << Players[Turn].getPiece(goti_no)->getPosition_X() << "," << Players[Turn].getPiece(goti_no)->getPosition_Y();
										std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
										if (position != diceValue.end()) {
											diceValue.erase(position);
										}
										kitnay_ay = 0;
									}

									checkHome(Turn, goti_no, 6); /// dont change its position
								}
							}


						}


					}

					else
					{

					}

					if (Players[Turn].getPassedPieces() == 4)
					{
						Players[Turn].isPassed = true;
						winStands.push_back(Turn);
						nop--;
					}


					if (diceValue.size() == 0 && now_move == true)
					{
						//cout << Turn << " ";
						six_count = 0;
						changeTurn(6);
						now_move = false;
						move_hogya = false;
					}


				}


				sf::FloatRect res_pos = restart.getGlobalBounds();
				sf::FloatRect exit_pos = exit.getGlobalBounds();
				sf::FloatRect yes_pos = yes.getGlobalBounds();
				sf::FloatRect no_pos = no.getGlobalBounds();
				if (exit_pos.contains(position.x, position.y))
				{
					bexit = true;

				}
				if (res_pos.contains(position.x, position.y))
				{
					brestart = true;
				}
				if (yes_pos.contains(position.x, position.y) && (bexit == true || brestart == true))
				{
					if (bexit == true)
					{
						return 2;
					}
					if (bexit == false)
					{
						return 1;
					}


				}
				if (no_pos.contains(position.x, position.y) && (bexit == true || brestart == true))
				{
					bexit = false;
					brestart = false;
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

		if (nop == 1)
		{
			break;
		}


		window.clear();
		window.draw(Bg);
		window.draw(board);
		for (int i = 0; i < 6; i++)
		{

			Players[i].Draw(window);


		}
		window.draw(speak);


		if (do_animation == false)
		{
			count = 0;
			window.draw(dice_shape);
		}
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
				changeTurn(6);
				six_count = 0;
				firstTime = true;
			}
			else
			{
				d.Draw(window, diceValue);
				firstTime = true;
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
		if (brestart == true)
		{
			sf::Text line;
			line.setFont(Textures::name);
			line.setString("Do you want to restart?");
			line.setCharacterSize(28);
			line.setPosition(540, 330);
			line.setFillColor(sf::Color::Red);

			sf::Text uper;
			uper.setFont(Textures::name);
			uper.setString("Restart");
			uper.setCharacterSize(36);
			uper.setPosition(630, 213);
			sf::Sprite b;

			b.setPosition(450, 100);
			b.setTexture(Textures::b2);
			window.draw(b);
			window.draw(uper);
			window.draw(line);
			window.draw(yes);
			window.draw(no);
		}
		if (bexit == true)
		{
			sf::Text line;
			line.setFont(Textures::name);
			line.setString("Do you want to exit?");
			line.setCharacterSize(28);
			line.setPosition(555, 330);
			line.setFillColor(sf::Color::Red);

			sf::Text uper;
			uper.setFont(Textures::name);
			uper.setString("Exit");
			uper.setCharacterSize(36);
			uper.setPosition(655, 213);
			sf::Sprite b;

			b.setPosition(450, 100);
			b.setTexture(Textures::b2);

			window.draw(b);
			window.draw(uper);
			window.draw(line);
			window.draw(yes);
			window.draw(no);
		}

		window.draw(exit);
		window.draw(restart);

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		window.display();
		if (do_animation == false)
		{
			if (agli_bari == true)
			{
				Sleep(110000);
				agli_bari = false;
				diceValue.clear();
			}
			if (clear_array == true)
			{
				Sleep(110000);
				clear_array = false;
			}
		}
	}


	/*winStands.push_back(4);
	winStands.push_back(5);
	winStands.push_back(2);*/



	int*** nameArray = new int** [6];
	for (int i = 0; i < 6; i++)
	{
		nameArray[i] = new int* [3];
		for (int j = 0; j < 3; j++)
		{
			nameArray[i][j] = new int[2];
		}
	}

	nameArray[0][0][0] = 600;
	nameArray[0][0][1] = 385;
	nameArray[0][1][0] = 600;
	nameArray[0][1][1] = 485;
	nameArray[0][2][0] = 600;
	nameArray[0][2][1] = 585;


	nameArray[1][0][0] = 560;
	nameArray[1][0][1] = 385;
	nameArray[1][1][0] = 560;
	nameArray[1][1][1] = 485;
	nameArray[1][2][0] = 560;
	nameArray[1][2][1] = 585;


	nameArray[2][0][0] = 580;
	nameArray[2][0][1] = 385;
	nameArray[2][1][0] = 580;
	nameArray[2][1][1] = 485;
	nameArray[2][2][0] = 580;
	nameArray[2][2][1] = 585;

	nameArray[3][0][0] = 560;
	nameArray[3][0][1] = 385;
	nameArray[3][1][0] = 560;
	nameArray[3][1][1] = 485;
	nameArray[3][2][0] = 560;
	nameArray[3][2][1] = 585;


	nameArray[4][0][0] = 560;
	nameArray[4][0][1] = 385;
	nameArray[4][1][0] = 560;
	nameArray[4][1][1] = 485;
	nameArray[4][2][0] = 560;
	nameArray[4][2][1] = 585;

	nameArray[5][0][0] = 600;
	nameArray[5][0][1] = 385;
	nameArray[5][1][0] = 600;
	nameArray[5][1][1] = 485;
	nameArray[5][2][0] = 600;
	nameArray[5][2][1] = 585;



	sf::Sprite winboard;
	winboard.setTexture(Textures::win);

	sf::Text name;
	name.setFont(Textures::name);
	name.setCharacterSize(48);


	sf::Text name1;
	name1.setFont(Textures::name);
	name1.setCharacterSize(48);

	sf::Text name2;
	name2.setFont(Textures::name);
	name2.setCharacterSize(48);

	vector<string> names = { "Red","Green","Purple","Yellow","Orange","Blue" };

	for (int i = 0; i < 3; i++)
	{
		int tempx = 0;
		int tempy = 0;
		int n = winStands[i];
		tempx = nameArray[n][i][0];
		tempy = nameArray[n][i][1];

		if (i == 0)
		{
			name.setString(names[n]);
			name.setPosition(tempx, tempy);
		}
		else if (i == 1)
		{
			name1.setString(names[n]);
			name1.setPosition(tempx, tempy);
		}
		if (i == 2)
		{
			name2.setString(names[n]);
			name2.setPosition(tempx, tempy);
		}

	}

	Sleep(100);
	win.play();

	while (window.isOpen())
	{

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

			}

		}
		window.clear();
		window.draw(winboard);
		window.draw(name);
		window.draw(name1);
		window.draw(name2);
		window.display();
	}
	return 0;
}
int Ludo::Play4(sf::RenderWindow& window)
{

	sf::Music dicem;
	dicem.openFromFile("Textures/Diceroll_audio.ogg");

	sf::Music win;
	win.openFromFile("Textures/Win.ogg");


	sf::Sprite sprite;
	int count = 0;
	//sf::RenderWindow window(sf::VideoMode().getDesktopMode(), " Ludo");
	vector<sf::Texture> textures;
	textures.push_back(Textures::r1);
	textures.push_back(Textures::r2);
	textures.push_back(Textures::r3);
	textures.push_back(Textures::r4);
	textures.push_back(Textures::r5);
	textures.push_back(Textures::r6);
	int frameCount = textures.size();
	int currentFrame = 0;
	sf::Clock clock;
	float frameTime = 1 / 14.0; // animation speed
	float currentTime = 0;


	bool firstTime = true;
	bool bexit = false;
	bool brestart = false;
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	sf::Sprite exit;
	sf::Sprite restart;
	exit.setTexture(Textures::exit);
	restart.setTexture(Textures::restart);
	exit.setPosition(1300, 650);
	restart.setPosition(1250, 655);



	sf::Text yes;
	yes.setFont(Textures::name);
	yes.setString("Yes");
	yes.setFillColor(sf::Color::Red);
	yes.setPosition(590, 383);
	sf::Text no;
	no.setFont(Textures::name);
	no.setString("No");
	no.setPosition(740, 383);
	no.setFillColor(sf::Color::Red);







	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	int six_count = 0;
	//int roll_value=0;
	bool move_hogya = false;
	bool clear_array = false;
	bool agli_bari = false;
	bool do_animation = false;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	sf::Sprite board;
	sf::Sprite Bg;
	sf::Sprite speak;
	speak.setTexture(Textures::speak);
	speak.setPosition(1050, 358);
	sf::Sprite dice_shape;
	dice_shape.setTexture(Textures::Dice1);
	dice_shape.setPosition(1055, 89);
	board.setTexture(Textures::Board4);
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
						do_animation = true;
						if (do_animation == true)
						{
							while (count < 100)
							{
								currentTime += clock.restart().asSeconds();

								if (currentTime >= frameTime)
								{
									currentTime -= frameTime;
									currentFrame++;
									if (currentFrame >= frameCount) {
										currentFrame = 0;
									}
									sprite.setTexture(textures[currentFrame]);
									sprite.setPosition(1055, 89);
								}
								count++;
								if (count == 100)
								{
									do_animation = false;
								}
								window.clear();
								window.draw(Bg);
								window.draw(board);
								for (int i = 0; i < 4; i++)
								{

									Players[i].Draw(window);

								}
								window.draw(speak);

								if (six_count >= 0)
								{
									if (six_count == 3)
									{
										d.Draw(window, diceValue);
										diceValue.clear();
										changeTurn(6);
										six_count = 0;
										firstTime = true;
									}
									else
									{
										d.Draw(window, diceValue);
										firstTime = true;
									}
								}


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
									sf::Sprite yellow;
									yellow.setTexture(Textures::sign3);
									yellow.scale(1, 1);
									yellow.setPosition(1088, 371);
									window.draw(yellow);
								}
								if (Turn == 3)
								{
									sf::Sprite Blue;
									Blue.setTexture(Textures::sign5);
									Blue.scale(1, 1);
									Blue.setPosition(1088, 371);
									window.draw(Blue);
								}


								window.draw(sprite);
								window.draw(exit);
								window.draw(restart);
								window.display();
							}
						}
						dicem.stop();
						count = 0;

						diceValue.push_back(roll_value);
						if (roll_value == 6)
						{
							six_count++;
							firstTime = false;
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
							changeTurn(4);
						}
						else
						{
							now_move = true;

							six_count = 0;
						}
					}
				}
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
								if (canGoHome(Turn, kitnay_ay, goti_no, 4) == false)
								{
									for (int i = 0; i < kitnay_ay; i++)
									{
										int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
										int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
										moveGoti4(Turn, goti_no, tempx, tempy);
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										window.clear();
										window.draw(Bg);
										window.draw(board);
										for (int i = 0; i < 4; i++)
										{

											Players[i].Draw(window);

										}
										window.draw(speak);

										if (six_count >= 0)
										{
											if (six_count == 3)
											{
												d.Draw(window, diceValue);
												diceValue.clear();
												changeTurn(6);
												six_count = 0;
												firstTime = true;
											}
											else
											{
												d.Draw(window, diceValue);
												firstTime = true;
											}
										}


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
											sf::Sprite yellow;
											yellow.setTexture(Textures::sign3);
											yellow.scale(1, 1);
											yellow.setPosition(1088, 371);
											window.draw(yellow);
										}
										if (Turn == 3)
										{
											sf::Sprite Blue;
											Blue.setTexture(Textures::sign5);
											Blue.scale(1, 1);
											Blue.setPosition(1088, 371);
											window.draw(Blue);
										}

										window.draw(dice_shape);
										//window.draw(sprite);
										window.draw(exit);
										window.draw(restart);
										window.display();
										Sleep(50000);
									}
									if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y(), 4) == false)
									{
										checkKill(Turn, goti_no, now_move, 4);
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
									Piece* tmp = new Piece(Players[Turn].getPiece(goti_no)->getColor(), goti_no, Turn, (Players[Turn].getPiece(goti_no))->getPosition_X(), (Players[Turn].getPiece(goti_no)->getPosition_Y()));
									int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
									int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
									//int count = boxestoCenter(Turn, goti_no);
									for (int i = 0; i < kitnay_ay; i++)
									{
										itny_rah_gay = kitnay_ay - (i + 1);
										if (movetowardsHome4(false, Turn, tempx, tempy, goti_no, 4) == true)
										{
											cout << "boxes to home are = " << boxestoCenter(Turn, goti_no, 4) << endl;
											if (boxestoCenter(Turn, goti_no, 4) >= kitnay_ay)
											{
												movetowardsHome4(true, Turn, tempx, tempy, goti_no, 4);
												move_hogya = true;
												tmp->setPosition(tempx, tempy);
												window.clear();
												window.draw(Bg);
												window.draw(board);
												for (int i = 0; i < 4; i++)
												{
													if (i == Turn)
													{
														for (int i = 0; i < 4; i++)
														{
															if (goti_no == i)
															{
																window.draw(tmp->Goti);
															}
															else
															{
																window.draw(Players[Turn].getPiece(i)->Goti);
															}
														}
													}
													else
													{
														Players[i].Draw(window);
													}

												}
												window.draw(speak);

												if (six_count >= 0)
												{
													if (six_count == 3)
													{
														d.Draw(window, diceValue);
														diceValue.clear();
														changeTurn(6);
														six_count = 0;
														firstTime = true;
													}
													else
													{
														d.Draw(window, diceValue);
														firstTime = true;
													}
												}

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
													sf::Sprite yellow;
													yellow.setTexture(Textures::sign3);
													yellow.scale(1, 1);
													yellow.setPosition(1088, 371);
													window.draw(yellow);
												}
												if (Turn == 3)
												{
													sf::Sprite Blue;
													Blue.setTexture(Textures::sign5);
													Blue.scale(1, 1);
													Blue.setPosition(1088, 371);
													window.draw(Blue);
												}

												window.draw(dice_shape);
												//window.draw(sprite);
												window.draw(exit);
												window.draw(restart);
												window.display();
												Sleep(50000);
											}
										}
										else
										{
											/*int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
											int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();*/
											moveGoti4(Turn, goti_no, tempx, tempy);

											Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
											window.clear();
											window.draw(Bg);
											window.draw(board);
											for (int i = 0; i < 4; i++)
											{

												Players[i].Draw(window);

											}
											window.draw(speak);

											if (six_count >= 0)
											{
												if (six_count == 3)
												{
													d.Draw(window, diceValue);
													diceValue.clear();
													changeTurn(6);
													six_count = 0;
													firstTime = true;
												}
												else
												{
													d.Draw(window, diceValue);
													firstTime = true;
												}
											}


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
												sf::Sprite yellow;
												yellow.setTexture(Textures::sign3);
												yellow.scale(1, 1);
												yellow.setPosition(1088, 371);
												window.draw(yellow);
											}
											if (Turn == 3)
											{
												sf::Sprite Blue;
												Blue.setTexture(Textures::sign5);
												Blue.scale(1, 1);
												Blue.setPosition(1088, 371);
												window.draw(Blue);
											}

											window.draw(dice_shape);
											//window.draw(sprite);
											window.draw(exit);
											window.draw(restart);
											window.display();

											Sleep(50000);
											//Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);



										}

									}

									if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y(), 4) == false)
									{
										checkKill(Turn, goti_no, now_move, 4);
									}

									if (move_hogya == false)
									{
										std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
										if (position != diceValue.end()) {
											diceValue.erase(position);
										}
										kitnay_ay = 0;
									}

									if (move_hogya == true)
									{
										cout << endl << Players[Turn].getPiece(goti_no)->getPosition_X() << "," << Players[Turn].getPiece(goti_no)->getPosition_Y();
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
										if (position != diceValue.end()) {
											diceValue.erase(position);
										}
										kitnay_ay = 0;
									}

									checkHome(Turn, goti_no, 4); /// dont change its position
								}
							}
							cout << Turn << " ";
							cout << endl;
							cout << Players[Turn].getPiece(goti_no)->getPosition_X() << "," << Players[Turn].getPiece(goti_no)->getPosition_Y();
						}


					}

					else
					{

					}

					if (Players[Turn].getPassedPieces() == 4)
					{
						Players[Turn].isPassed = true;
						winStands.push_back(Turn);
						nop--;
					}


					if (diceValue.size() == 0 && now_move == true)
					{
						//cout << Turn << " ";
						six_count = 0;
						changeTurn(4);
						now_move = false;
						move_hogya = false;
					}


				}

				sf::FloatRect res_pos = restart.getGlobalBounds();
				sf::FloatRect exit_pos = exit.getGlobalBounds();
				sf::FloatRect yes_pos = yes.getGlobalBounds();
				sf::FloatRect no_pos = no.getGlobalBounds();
				if (exit_pos.contains(position.x, position.y))
				{
					bexit = true;

				}
				if (res_pos.contains(position.x, position.y))
				{
					brestart = true;
				}
				if (yes_pos.contains(position.x, position.y) && (bexit == true || brestart == true))
				{
					if (bexit == true)
					{
						return 2;
					}
					if (bexit == false)
					{
						return 1;
					}


				}
				if (no_pos.contains(position.x, position.y) && (bexit == true || brestart == true))
				{
					bexit = false;
					brestart = false;
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

		if (nop == 1)
		{
			break;
		}


		window.clear();
		window.draw(Bg);
		window.draw(board);
		for (int i = 0; i < 4; i++)
		{

			Players[i].Draw(window);


		}
		Players[Turn].Draw(window);
		window.draw(speak);


		if (do_animation == false)
		{
			count = 0;
			window.draw(dice_shape);
		}
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
				changeTurn(4);
				six_count = 0;
				firstTime = true;
			}
			else
			{
				d.Draw(window, diceValue);
				firstTime = true;
			}
		}

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
			sf::Sprite yellow;
			yellow.setTexture(Textures::sign3);
			yellow.scale(1, 1);
			yellow.setPosition(1088, 371);
			window.draw(yellow);
		}
		if (Turn == 3)
		{
			sf::Sprite Blue;
			Blue.setTexture(Textures::sign5);
			Blue.scale(1, 1);
			Blue.setPosition(1088, 371);
			window.draw(Blue);
		}

		if (brestart == true)
		{
			sf::Text line;
			line.setFont(Textures::name);
			line.setString("Do you want to restart?");
			line.setCharacterSize(28);
			line.setPosition(540, 330);
			line.setFillColor(sf::Color::Red);

			sf::Text uper;
			uper.setFont(Textures::name);
			uper.setString("Restart");
			uper.setCharacterSize(36);
			uper.setPosition(630, 213);
			sf::Sprite b;

			b.setPosition(450, 100);
			b.setTexture(Textures::b2);
			window.draw(b);
			window.draw(uper);
			window.draw(line);
			window.draw(yes);
			window.draw(no);
		}
		if (bexit == true)
		{
			sf::Text line;
			line.setFont(Textures::name);
			line.setString("Do you want to exit?");
			line.setCharacterSize(28);
			line.setPosition(555, 330);
			line.setFillColor(sf::Color::Red);

			sf::Text uper;
			uper.setFont(Textures::name);
			uper.setString("Exit");
			uper.setCharacterSize(36);
			uper.setPosition(655, 213);
			sf::Sprite b;

			b.setPosition(450, 100);
			b.setTexture(Textures::b2);

			window.draw(b);
			window.draw(uper);
			window.draw(line);
			window.draw(yes);
			window.draw(no);
		}

		window.draw(exit);
		window.draw(restart);
		window.display();
		if (do_animation == false)
		{
			if (agli_bari == true)
			{
				Sleep(110000);
				agli_bari = false;
				diceValue.clear();
			}
			if (clear_array == true)
			{
				Sleep(110000);
				clear_array = false;
			}
		}
	}


	int*** nameArray = new int** [4];
	for (int i = 0; i < 4; i++)
	{
		nameArray[i] = new int* [3];
		for (int j = 0; j < 3; j++)
		{
			nameArray[i][j] = new int[2];
		}
	}

	nameArray[0][0][0] = 600;
	nameArray[0][0][1] = 385;
	nameArray[0][1][0] = 600;
	nameArray[0][1][1] = 485;
	nameArray[0][2][0] = 600;
	nameArray[0][2][1] = 585;


	nameArray[1][0][0] = 560;
	nameArray[1][0][1] = 385;
	nameArray[1][1][0] = 560;
	nameArray[1][1][1] = 485;
	nameArray[1][2][0] = 560;
	nameArray[1][2][1] = 585;


	nameArray[2][0][0] = 560;
	nameArray[2][0][1] = 385;
	nameArray[2][1][0] = 560;
	nameArray[2][1][1] = 485;
	nameArray[2][2][0] = 560;
	nameArray[2][2][1] = 585;

	nameArray[3][0][0] = 600;
	nameArray[3][0][1] = 385;
	nameArray[3][1][0] = 600;
	nameArray[3][1][1] = 485;
	nameArray[3][2][0] = 600;
	nameArray[3][2][1] = 585;


	sf::Sprite winboard;
	winboard.setTexture(Textures::win);

	sf::Text name;
	name.setFont(Textures::name);
	name.setCharacterSize(48);


	sf::Text name1;
	name1.setFont(Textures::name);
	name1.setCharacterSize(48);

	sf::Text name2;
	name2.setFont(Textures::name);
	name2.setCharacterSize(48);

	vector<string> names = { "Red","Green","Yellow","Blue" };

	for (int i = 0; i < 3; i++)
	{
		int tempx = 0;
		int tempy = 0;
		int n = winStands[i];
		tempx = nameArray[n][i][0];
		tempy = nameArray[n][i][1];

		if (i == 0)
		{
			name.setString(names[n]);
			name.setPosition(tempx, tempy);
		}
		else if (i == 1)
		{
			name1.setString(names[n]);
			name1.setPosition(tempx, tempy);
		}
		if (i == 2)
		{
			name2.setString(names[n]);
			name2.setPosition(tempx, tempy);
		}

	}

	Sleep(100);
	win.play();


	while (window.isOpen())
	{

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

			}

		}
		window.clear();
		window.draw(winboard);
		window.draw(name);
		window.draw(name1);
		window.draw(name2);
		window.display();
	}
	return 0;
}
int Ludo::Play2(sf::RenderWindow& window)
{

	sf::Music dicem;
	dicem.openFromFile("Textures/Diceroll_audio.ogg");

	sf::Music win;
	win.openFromFile("Textures/Win.ogg");

	sf::Music red;
	red.openFromFile("Textures/Red_audio.ogg");


	sf::Sprite winboard;
	winboard.setTexture(Textures::win);
	sf::Text name;
	name.setFont(Textures::name);
	name.setString("Yellow");
	name.setCharacterSize(48);


	sf::Text name1;
	name1.setFont(Textures::name);
	name1.setString("Red");
	name1.setCharacterSize(48);




	sf::Sprite sprite;
	int count = 0;
	//sf::RenderWindow window(sf::VideoMode().getDesktopMode(), " Ludo");
	vector<sf::Texture> textures;
	textures.push_back(Textures::r1);
	textures.push_back(Textures::r2);
	textures.push_back(Textures::r3);
	textures.push_back(Textures::r4);
	textures.push_back(Textures::r5);
	textures.push_back(Textures::r6);
	int frameCount = textures.size();
	int currentFrame = 0;
	sf::Clock clock;
	float frameTime = 1 / 14.0; // animation speed
	float currentTime = 0;


	bool firstTime = true;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	sf::Text yes;
	yes.setFont(Textures::name);
	yes.setString("Yes");
	yes.setFillColor(sf::Color::Red);
	yes.setPosition(590, 383);
	sf::Text no;
	no.setFont(Textures::name);
	no.setString("No");
	no.setPosition(740, 383);
	no.setFillColor(sf::Color::Red);

	int six_count = 0;
	//int roll_value=0;
	bool move_hogya = false;
	bool clear_array = false;
	bool agli_bari = false;
	bool do_animation = false;
	bool bexit = false;
	bool brestart = false;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	sf::Sprite exit;
	sf::Sprite restart;
	exit.setTexture(Textures::exit);
	restart.setTexture(Textures::restart);
	exit.setPosition(1300, 650);
	restart.setPosition(1250, 655);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	sf::Sprite board;
	sf::Sprite Bg;
	sf::Sprite speak;
	speak.setTexture(Textures::speak);
	speak.setPosition(1050, 358);
	sf::Sprite dice_shape;
	dice_shape.setTexture(Textures::Dice1);
	dice_shape.setPosition(1055, 89);
	board.setTexture(Textures::Board4);
	Bg.setTexture(Textures::Bg);
	sf::Event event;




	while (window.isOpen())
	{

		while (window.pollEvent(event))
		{
			//window.close();
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

				sf::FloatRect res_pos = restart.getGlobalBounds();
				sf::FloatRect exit_pos = exit.getGlobalBounds();
				sf::FloatRect yes_pos = yes.getGlobalBounds();
				sf::FloatRect no_pos = no.getGlobalBounds();
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

						dicem.play();


						do_animation = true;


						if (do_animation == true)
						{

							while (count < 150)
							{

								currentTime += clock.restart().asSeconds();

								if (currentTime >= frameTime)
								{
									currentTime -= frameTime;
									currentFrame++;
									if (currentFrame >= frameCount) {
										currentFrame = 0;
									}
									sprite.setTexture(textures[currentFrame]);
									sprite.setPosition(1055, 89);
								}
								count++;
								if (count == 150)
								{
									do_animation = false;
								}
								window.clear();
								window.draw(Bg);
								window.draw(board);

								Players[0].Draw(window);
								Players[1].Draw(window);

								window.draw(speak);

								if (six_count >= 0)
								{
									if (six_count == 3)
									{
										d.Draw(window, diceValue);
										diceValue.clear();
										changeTurn(6);
										six_count = 0;
										firstTime = true;
									}
									else
									{
										d.Draw(window, diceValue);
										firstTime = true;
									}
								}


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
									sf::Sprite yellow;
									yellow.setTexture(Textures::sign3);
									yellow.scale(1, 1);
									yellow.setPosition(1088, 371);
									window.draw(yellow);
								}


								window.draw(exit);
								window.draw(restart);
								window.draw(sprite);
								window.display();
							}
						}
						dicem.stop();
						count = 0;

						diceValue.push_back(roll_value);
						if (roll_value == 6)
						{
							six_count++;
							firstTime = false;
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
							changeTurn(2);
						}
						else
						{
							now_move = true;

							six_count = 0;
						}
					}
				}
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
								if (canGoHome(Turn, kitnay_ay, goti_no, 2) == false)
								{
									for (int i = 0; i < kitnay_ay; i++)
									{
										int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
										int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
										moveGoti4(Turn, goti_no, tempx, tempy);
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										window.clear();
										window.draw(Bg);
										window.draw(board);

										Players[0].Draw(window);
										Players[1].Draw(window);

										window.draw(speak);

										if (six_count >= 0)
										{
											if (six_count == 3)
											{
												d.Draw(window, diceValue);
												diceValue.clear();
												changeTurn(6);
												six_count = 0;
												firstTime = true;
											}
											else
											{
												d.Draw(window, diceValue);
												firstTime = true;
											}
										}


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
											sf::Sprite yellow;
											yellow.setTexture(Textures::sign3);
											yellow.scale(1, 1);
											yellow.setPosition(1088, 371);
											window.draw(yellow);
										}
										window.draw(exit);
										window.draw(restart);
										window.draw(dice_shape);
										window.display();
										Sleep(50000);
									}
									if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y(), 4) == false)
									{
										checkKill(Turn, goti_no, now_move, 2);
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
									Piece* tmp = new Piece(Players[Turn].getPiece(goti_no)->getColor(), goti_no, Turn, (Players[Turn].getPiece(goti_no))->getPosition_X(), (Players[Turn].getPiece(goti_no)->getPosition_Y()));
									int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
									int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();
									//int count = boxestoCenter(Turn, goti_no);
									for (int i = 0; i < kitnay_ay; i++)
									{
										itny_rah_gay = kitnay_ay - (i + 1);
										if (movetowardsHome4(false, Turn, tempx, tempy, goti_no, 2) == true)
										{
											cout << "boxes to home are = " << boxestoCenter(Turn, goti_no, 2) << endl;
											if (boxestoCenter(Turn, goti_no, 2) >= kitnay_ay)
											{
												movetowardsHome4(true, Turn, tempx, tempy, goti_no, 2);
												move_hogya = true;
												tmp->setPosition(tempx, tempy);
												window.clear();
												window.draw(Bg);
												window.draw(board);

												for (int i = 0; i < 2; i++)
												{
													if (i == Turn)
													{
														for (int i = 0; i < 4; i++)
														{
															if (goti_no == i)
															{
																window.draw(tmp->Goti);
															}
															else
															{
																window.draw(Players[Turn].getPiece(i)->Goti);
															}
														}
													}
													else
													{
														Players[i].Draw(window);
													}
												}

												window.draw(speak);

												if (six_count >= 0)
												{
													if (six_count == 3)
													{
														d.Draw(window, diceValue);
														diceValue.clear();
														changeTurn(6);
														six_count = 0;
														firstTime = true;
													}
													else
													{
														d.Draw(window, diceValue);
														firstTime = true;
													}
												}

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
													sf::Sprite yellow;
													yellow.setTexture(Textures::sign3);
													yellow.scale(1, 1);
													yellow.setPosition(1088, 371);
													window.draw(yellow);
												}
												window.draw(dice_shape);
												window.draw(exit);
												window.draw(restart);
												window.display();
												Sleep(50000);

											}
										}
										else
										{
											/*int tempx = Players[Turn].getPiece(goti_no)->getPosition_X();
											int tempy = Players[Turn].getPiece(goti_no)->getPosition_Y();*/
											moveGoti4(Turn, goti_no, tempx, tempy);
											tmp->setPosition(tempx, tempy);

											Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
											window.clear();
											window.draw(Bg);
											window.draw(board);

											for (int i = 0; i < 2; i++)
											{
												if (i == Turn)
												{
													for (int i = 0; i < 4; i++)
													{
														if (goti_no == i)
														{
															window.draw(tmp->Goti);
														}
														else
														{
															window.draw(Players[Turn].getPiece(i)->Goti);
														}
													}
												}
												else
												{
													Players[i].Draw(window);
												}
											}

											window.draw(speak);

											if (six_count >= 0)
											{
												if (six_count == 3)
												{
													d.Draw(window, diceValue);
													diceValue.clear();
													changeTurn(6);
													six_count = 0;
													firstTime = true;
												}
												else
												{
													d.Draw(window, diceValue);
													firstTime = true;
												}
											}


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
												sf::Sprite yellow;
												yellow.setTexture(Textures::sign3);
												yellow.scale(1, 1);
												yellow.setPosition(1088, 371);
												window.draw(yellow);
											}
											window.draw(exit);
											window.draw(restart);
											window.draw(dice_shape);
											window.display();
											Sleep(50000);
											//Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);


										}

									}

									if (checkSavePoints(Players[Turn].getPiece(goti_no)->getPosition_X(), Players[Turn].getPiece(goti_no)->getPosition_Y(), 4) == false)
									{
										checkKill(Turn, goti_no, now_move, 2);
									}

									if (move_hogya == false)
									{
										std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										if (position != diceValue.end()) {
											diceValue.erase(position);
										}
										kitnay_ay = 0;
									}


									if (move_hogya == true)
									{
										cout << endl << Players[Turn].getPiece(goti_no)->getPosition_X() << "," << Players[Turn].getPiece(goti_no)->getPosition_Y();
										Players[Turn].getPiece(goti_no)->setPosition(tempx, tempy);
										std::vector<int>::iterator position = std::find(diceValue.begin(), diceValue.end(), kitnay_ay);
										if (position != diceValue.end()) {
											diceValue.erase(position);
										}
										kitnay_ay = 0;
									}

									checkHome(Turn, goti_no, 2); /// dont change its position
								}
							}
							cout << Turn << " ";
							cout << endl;
							cout << Players[Turn].getPiece(goti_no)->getPosition_X() << "," << Players[Turn].getPiece(goti_no)->getPosition_Y();
						}


					}

					else
					{

					}

					if (Players[Turn].getPassedPieces() == 1)
					{
						Players[Turn].isPassed = true;
						winStands.push_back(Turn);
						nop--;
					}
					if (diceValue.size() == 0 && now_move == true)
					{
						//cout << Turn << " ";
						six_count = 0;
						changeTurn(2);
						now_move = false;
						move_hogya = false;
					}
				}


				if (exit_pos.contains(position.x, position.y))
				{
					bexit = true;

				}
				if (res_pos.contains(position.x, position.y))
				{
					brestart = true;
				}
				if (yes_pos.contains(position.x, position.y) && (bexit == true || brestart == true))
				{
					if (bexit == true)
					{
						return 2;
					}
					if (bexit == false)
					{
						return 1;
					}


				}
				if (no_pos.contains(position.x, position.y) && (bexit == true || brestart == true))
				{
					bexit = false;
					brestart = false;
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

		if (nop == 1)
		{
			break;
		}

		window.clear();
		window.draw(Bg);
		window.draw(board);

		Players[0].Draw(window);
		Players[1].Draw(window);

		window.draw(speak);


		if (do_animation == false)
		{
			count = 0;
			window.draw(dice_shape);
		}
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
				changeTurn(2);
				six_count = 0;
				firstTime = true;
			}
			else
			{
				d.Draw(window, diceValue);
				firstTime = true;
			}
		}
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
			sf::Sprite yellow;
			yellow.setTexture(Textures::sign3);
			yellow.scale(1, 1);
			yellow.setPosition(1088, 371);
			window.draw(yellow);
		}

		window.draw(exit);
		window.draw(restart);
		if (brestart == true)
		{
			sf::Text line;
			line.setFont(Textures::name);
			line.setString("Do you want to restart?");
			line.setCharacterSize(28);
			line.setPosition(540, 330);
			line.setFillColor(sf::Color::Red);

			sf::Text uper;
			uper.setFont(Textures::name);
			uper.setString("Restart");
			uper.setCharacterSize(36);
			uper.setPosition(630, 213);
			sf::Sprite b;

			b.setPosition(450, 100);
			b.setTexture(Textures::b2);
			window.draw(b);
			window.draw(uper);
			window.draw(line);
			window.draw(yes);
			window.draw(no);
		}
		if (bexit == true)
		{
			sf::Text line;
			line.setFont(Textures::name);
			line.setString("Do you want to exit?");
			line.setCharacterSize(28);
			line.setPosition(555, 330);
			line.setFillColor(sf::Color::Red);

			sf::Text uper;
			uper.setFont(Textures::name);
			uper.setString("Exit");
			uper.setCharacterSize(36);
			uper.setPosition(655, 213);
			sf::Sprite b;

			b.setPosition(450, 100);
			b.setTexture(Textures::b2);

			window.draw(b);
			window.draw(uper);
			window.draw(line);
			window.draw(yes);
			window.draw(no);
		}

		window.display();
		if (do_animation == false)
		{
			if (agli_bari == true)
			{
				Sleep(110000);
				agli_bari = false;
				diceValue.clear();
			}
			if (clear_array == true)
			{
				Sleep(110000);
				clear_array = false;
			}
		}
	}




	if (this->winStands[0] == 0)
	{
		name1.setPosition(600, 385);
		name.setPosition(560, 485);
	}

	if (this->winStands[0] == 1)
	{
		name.setPosition(560, 385);
		name1.setPosition(600, 585);
	}


	////////////////////////1ST POSITION///////////////////////

	/*name.setPosition(560, 385);
	name1.setPosition(600, 385);*/

	//////////////////////////////////////////////////////////


	///////////////////////2ND POSITON/////////////////////////////////


	/*name1.setPosition(600, 485);*/
	/*name.setPosition(560, 485);*/


	////////////////////////////////////////////////////////////

	//winStands.push_back(1);

	Sleep(100);
	win.play();

	while (window.isOpen())
	{

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

			}

		}
		window.clear();
		window.draw(winboard);
		window.draw(name);
		window.draw(name1);
		window.display();
	}

	return 0;

}
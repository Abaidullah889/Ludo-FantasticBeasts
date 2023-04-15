#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
using namespace std;

class Piece
{
	int Goti_Number;
	int x_cord;
	int y_cord;
	bool isPassed;
	bool atHome;
	sf::Color Color;
public:

	sf::CircleShape Goti;


	Piece();
	Piece(sf::Color, int goti_num, int Player_num, int x, int y);
	void setatHome(bool ah);
	bool getatHome();
	void setisPassed(bool ah);
	bool getisPassed();
	void setPosition(int x, int y);
	int getPosition_X();
	int getPosition_Y();

	sf::CircleShape getGoti();
	sf::Color getColor();
};


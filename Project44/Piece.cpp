#include "Piece.h"
#include<iostream>
#include<SFML/Graphics.hpp>
#include"Textures.h"
using namespace std;

Piece::Piece()
{

}
Piece::Piece(sf::Color c, int goti_num, int Player_num, int x, int y)
{
	this->Goti_Number = goti_num;
	this->isPassed = false;
	this->atHome = true;
	this->Color = c;

	this->x_cord = x;
	this->y_cord = y;

	Goti.setPosition(x, y);
	Goti.setFillColor(c);
	Goti.setRadius(13.f);

}

void Piece::setatHome(bool ah)
{
	this->atHome = ah;
}
bool Piece::getatHome()
{
	return this->atHome;
}
void Piece::setisPassed(bool ah)
{
	this->isPassed = ah;
}
bool Piece::getisPassed()
{
	return this->isPassed;
}
void Piece::setPosition(int x, int y)
{
	this->x_cord = x;
	this->y_cord = y;
	Goti.setPosition(x, y);
}
int Piece::getPosition_X()
{
	return this->x_cord;
}
int Piece::getPosition_Y()
{
	return this->y_cord;
}
sf::CircleShape Piece::getGoti()
{
	return this->Goti;
}
sf::Color Piece::getColor()
{
	return this->Color;
}

#include "Player.h"
#include"Piece.h"

Player::Player()
{

}
Player::Player(int Player_n, sf::Color col, int** Gcords, int* Scords, int* Encords)
{
	Piece* P1 = new Piece(col, 1, Player_n, Gcords[0][0], Gcords[0][1]);
	Piece* P2 = new Piece(col, 2, Player_n, Gcords[1][0], Gcords[1][1]);
	Piece* P3 = new Piece(col, 3, Player_n, Gcords[2][0], Gcords[2][1]);
	Piece* P4 = new Piece(col, 4, Player_n, Gcords[3][0], Gcords[3][1]);

	Pieces.push_back(P1);
	Pieces.push_back(P2);
	Pieces.push_back(P3);
	Pieces.push_back(P4);

	this->Player_number = Player_n;
	this->c = col;
	this->Pieces_atHome = 4;
	////////////////////////////////////////////////////////////////////////
	this->Home_cord[0] = Scords[0];
	this->Home_cord[1] = Scords[1];
	this->End_cord[0] = Encords[0];
	this->End_cord[1] = Encords[1];
	/////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			this->Pieces_cord[i][j] = Gcords[i][j];
		}
	}



	this->Passed_Pieces = 0;
	this->Name = "Abaid";
	this->Can_Go_Inside = false;


}
void Player::Draw(sf::RenderWindow& w)
{
	sf::CircleShape s1 = (*Pieces[0]).getGoti();
	w.draw(s1);
	sf::CircleShape s2 = (*Pieces[1]).getGoti();
	w.draw(s2);
	sf::CircleShape s3 = (*Pieces[2]).getGoti();
	w.draw(s3);
	sf::CircleShape s4 = (*Pieces[3]).getGoti();
	w.draw(s4);
}

Piece* Player::getPiece(int i)
{
	return Pieces[i];
}

void Player::setPiece(int i, int x, int y)
{
	(*Pieces[i]).setPosition(x, y);
}

int Player::piecesHome()
{
	return this->Pieces_atHome;
}


void Player::pieceHomeIn()
{
	Pieces_atHome++;
}

void Player::pieceHomeOut()
{
	Pieces_atHome--;
}

void Player::piecePassed()
{
	Passed_Pieces++;
}

int Player::getPassedPieces()
{
	return this->Passed_Pieces;
}

bool Player::CheckWin()
{
	if (Passed_Pieces == 4)
	{
		return true;
	}
	else
	{
		return false;
	}


}

void Player::setCanGoInside()
{
	this->Can_Go_Inside = true;
}

bool Player::getCanGoInside()
{
	return this->Can_Go_Inside;
}


bool Player::checkGoti(int mousex, int mousey, int& goti)
{
	for (int i = 0; i < 4; i++)
	{
		sf::FloatRect goti_position = Pieces[i]->Goti.getGlobalBounds();
		if (goti_position.contains(mousex, mousey))
		{
			goti = i;
			return true;
		}
	}
	return false;
}
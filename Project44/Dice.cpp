#include "Dice.h"
#include"Textures.h"

#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

Dice::Dice()
{
	this->Value = 0;
}
void Dice::Draw(sf::RenderWindow& w, vector<int>dice_value)
{

	sf::Sprite d1;
	d1.setTexture(Textures::Dice1);

	sf::Sprite d2;
	d2.setTexture(Textures::Dice2);

	sf::Sprite d3;
	d3.setTexture(Textures::Dice3);

	sf::Sprite d4;
	d4.setTexture(Textures::Dice4);

	sf::Sprite d5;
	d5.setTexture(Textures::Dice5);

	sf::Sprite d6;
	d6.setTexture(Textures::Dice6);



	for (int i = 0; i < dice_value.size(); i++)
	{
		if (dice_value[i] == 1)
		{
			d1.setPosition(1110 + (60 * (i - 1)), 208);
			w.draw(d1);

		}
		else if (dice_value[i] == 2)
		{
			d2.setPosition(1110 + (50 * (i - 1)), 208);
			w.draw(d2);

		}
		else if (dice_value[i] == 3)
		{
			d3.setPosition(1110 + (50 * (i - 1)), 208);
			w.draw(d3);

		}
		else if (dice_value[i] == 4)
		{
			d4.setPosition(1110 + (50 * (i - 1)), 208);
			w.draw(d4);

		}
		else if (dice_value[i] == 5)
		{
			d5.setPosition(1110 + (50 * (i - 1)), 206);
			w.draw(d5);

		}
		else if (dice_value[i] == 6)
		{
			d6.setPosition(1110 + (50 * (i - 1)), 208);
			w.draw(d6);

		}
	}

}
void Dice::rollDice()
{
	srand(time(0));
	this->Value = rand() % 6 + 1;
}
int Dice::getDiceValue()
{
	return this->Value;
}
#pragma once
#include"SFML/Graphics.hpp"
#include<vector>
using namespace std;
class Dice
{
	int Value;
	sf::Sprite dshape;
public:
	Dice();
	void Draw(sf::RenderWindow& w, vector<int> v);
	void rollDice();
	int getDiceValue();
};


#pragma once
#include"SFML/Graphics.hpp"
#include<string>
using namespace std;
class Textures
{
public:

	static sf::Texture Board;
	static sf::Texture Bg;
	static sf::Texture start;
	static sf::Texture agay;

	static sf::Texture speak;

	static sf::Texture sign0;
	static sf::Texture sign1;
	static sf::Texture sign2;
	static sf::Texture sign3;
	static sf::Texture sign4;
	static sf::Texture sign5;

	static sf::Texture r1;
	static sf::Texture r2;
	static sf::Texture r3;
	static sf::Texture r4;
	static sf::Texture r5;
	static sf::Texture r6;

	static sf::Texture Player1;
	static sf::Texture Player2;
	static sf::Texture Player3;
	static sf::Texture Player4;
	static sf::Texture Player5;
	static sf::Texture Player6;


	static sf::Texture Dice1;
	static sf::Texture Dice2;
	static sf::Texture Dice3;
	static sf::Texture Dice4;
	static sf::Texture Dice5;
	static sf::Texture Dice6;


	static sf::Texture loadTexture(string str);

};


#include "Textures.h"
#include<string>
#include<iostream>
using namespace std;

sf::Texture Textures::Player1 = Textures::loadTexture("Textures/Player1.png");
sf::Texture Textures::Player2 = Textures::loadTexture("Textures/Player2.png");
sf::Texture Textures::Player3 = Textures::loadTexture("Textures/Player3.png");
sf::Texture Textures::Player4 = Textures::loadTexture("Textures/Player4.png");
sf::Texture Textures::Player5 = Textures::loadTexture("Textures/Player5.png");
sf::Texture Textures::Player6 = Textures::loadTexture("Textures/Player6.png");


sf::Font Textures::name = Textures::loadFont("Textures/name.ttf");

sf::Texture Textures::exit = Textures::loadTexture("Textures/exit.png");
sf::Texture Textures::restart = Textures::loadTexture("Textures/restart.png");
sf::Texture Textures::b2 = Textures::loadTexture("Textures/menu.png");


sf::Texture Textures::Multi = Textures::loadTexture("Textures/multi.png");
sf::Texture Textures::win = Textures::loadTexture("Textures/win.png");
sf::Texture Textures::Board = Textures::loadTexture("Textures/Board3.jpg");
sf::Texture Textures::Board4 = Textures::loadTexture("Textures/Board4.jpg");
sf::Texture Textures::Bg = Textures::loadTexture("Textures/Bg.png");
sf::Texture Textures::start = Textures::loadTexture("Textures/start.png");
sf::Texture Textures::agay = Textures::loadTexture("Textures/agay.png");
sf::Texture Textures::speak = Textures::loadTexture("Textures/speak.png");


sf::Texture Textures::Dice1 = Textures::loadTexture("Textures/d11.png");
sf::Texture Textures::Dice2 = Textures::loadTexture("Textures/d9.png");
sf::Texture Textures::Dice3 = Textures::loadTexture("Textures/d8.png");
sf::Texture Textures::Dice4 = Textures::loadTexture("Textures/d6.png");
sf::Texture Textures::Dice5 = Textures::loadTexture("Textures/d2.png");
sf::Texture Textures::Dice6 = Textures::loadTexture("Textures/d3.png");


sf::Texture Textures::r1 = Textures::loadTexture("Textures/r1.png");
sf::Texture Textures::r2 = Textures::loadTexture("Textures/r2.png");
sf::Texture Textures::r3 = Textures::loadTexture("Textures/r3.png");
sf::Texture Textures::r4 = Textures::loadTexture("Textures/r4.png");
sf::Texture Textures::r5 = Textures::loadTexture("Textures/r5.png");
sf::Texture Textures::r6 = Textures::loadTexture("Textures/r6.png");

sf::Texture Textures::credit = Textures::loadTexture("Textures/credit.png");

sf::Texture Textures::sign0 = Textures::loadTexture("Textures/red.png");
sf::Texture Textures::sign1 = Textures::loadTexture("Textures/green.png");

sf::Texture Textures::sign2 = Textures::loadTexture("Textures/purple.png");
sf::Texture Textures::sign3 = Textures::loadTexture("Textures/yellow.png");


sf::Texture Textures::sign4 = Textures::loadTexture("Textures/orange.png");
sf::Texture Textures::sign5 = Textures::loadTexture("Textures/blue.png");


sf::Texture Textures::loadTexture(string str)
{
    sf::Texture tmp;
    if (!tmp.loadFromFile(str))
        cout << "Error loading file\n";
    return tmp;
}
sf::Font Textures::loadFont(string str)
{
    sf::Font tmp;
    if (!tmp.loadFromFile(str))
        cout << "Error loading file\n";
    return tmp;
}

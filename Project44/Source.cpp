#include<iostream>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include"Textures.h"
#include"Ludo.h"
using namespace std;







int main()
{

	int n = 0;
	int i = 0;
	bool krday = false;
	sf::RenderWindow window(sf::VideoMode().getDesktopMode(), "Ludo");
	sf::Sprite credit;
	credit.setTexture(Textures::credit);
	sf::Event st;
	while (window.isOpen())
	{
		while (window.pollEvent(st))
		{
			switch (st.type)
			{
			case sf::Event::Closed:

				window.close();
			}
		}

		if (i == 600)
		{
			break;
		}
		i++;
		window.clear();
		window.draw(credit);
		window.display();
	}

	do
	{
		sf::Sprite start;
		sf::Sprite agay;
		agay.setTexture(Textures::agay);
		agay.setPosition(460, 541);
		bool chlna = true;
		sf::RectangleShape rect;
		rect.setFillColor(sf::Color::Color(232, 163, 23));
		rect.setPosition(360, 560);
		rect.setSize(sf::Vector2f(10, 12));
		sf::Event st;
		float i = 0;
		start.setTexture(Textures::start);


		while (window.isOpen())
		{
			while (window.pollEvent(st))
			{
				switch (st.type)
				{
				case sf::Event::Closed:

					krday = true;
					window.close();
				}
			}

			if (chlna == true)
			{
				rect.setSize(sf::Vector2f(14 + i, 12));
				agay.setPosition(360 + i + 10, 541);
			}
			i += 1;

			if (i == 600)
			{
				chlna = false;
				break;
			}

			window.clear();
			window.draw(start);
			window.draw(rect);
			window.draw(agay);
			window.display();

		}
		int mode = 0;
		Ludo l(mode, window);
		switch (mode)
		{
		case 2:
			n = l.Play2(window);
			break;
		case 4:
			n = l.Play2b(window);
			break;
		case 6:
			n = l.Play(window);
			break;
		}
		if (krday == true)
		{
			break;
		}

	} while (n == 1);





	return 0;
}

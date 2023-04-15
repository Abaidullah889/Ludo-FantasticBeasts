#include<SFML/Graphics.hpp>





int main()
{
	sf::RenderWindow window(sf::VideoMode().getDesktopMode(), "ludo");

	while(window.isOpen())
	{




		window.clear();
		//window.draw();
		window.display();



	}
}
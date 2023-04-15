#include<SFML/Graphics.hpp>





int main()
{
	sf::RenderWindow window(sf::VideoMode().getDesktopMode(), "ludo");

	while(window.isOpen())
	{

		sf::Event event;


		window.clear();
		//window.draw();
		window.display();
		cout << endl;


	}
}
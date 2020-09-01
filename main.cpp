#include <SFML/Graphics.hpp>
#include "ClickFunctionality.h"
#include "TextureHandling.h"
#include <iostream>

ClickFunctinality clickObj;
TextureHandling textureObj;


int main()
{

	sf::RenderWindow window(sf::VideoMode(1422, 800), "SFML works!"); //Width made by taking percentage from 1920 1080
	textureObj.f_setScale(sf::Vector2f(0.1,0.1));
	TextureHandling();
	std::cout << "Entry";
	//WINDOW
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::MouseButtonReleased:
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					clickObj.f_clickCookie(textureObj.f_getSpriteGlobalBound(), window);
					textureObj.f_setCookieCountText(clickObj.v_cookieNumber);
					
				}
			} break;

			default:
				break;
		}
		}
		//DRAW
		
		window.clear();
		TextureHandling().f_updateCookies();
		window.draw(textureObj.f_getCountText());
		window.draw(textureObj.f_getSprite());
	
		window.display();
	}

	return 0;
}
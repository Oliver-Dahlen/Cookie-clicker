#pragma once
#include <SFML\Graphics.hpp>
#include "TextureHandling.h"
#include <iostream>
class ClickFunctinality
{
public:
	ClickFunctinality();
	~ClickFunctinality();
	void f_clickCookie(sf::FloatRect rect, sf::RenderWindow& window);
	unsigned long long int v_cookieNumber;
	unsigned long long int f_getCookies(); //0 to 18,446,744,073,709,551,615
private:
	 //0 to 18,446,744,073,709,551,615
	float v_mouseX;
	float v_mouseY;

};
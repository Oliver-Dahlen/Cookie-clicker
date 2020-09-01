#include "ClickFunctionality.h"

ClickFunctinality::ClickFunctinality()
{
	v_cookieNumber = 0;
}

ClickFunctinality::~ClickFunctinality()
{
}

void ClickFunctinality::f_clickCookie(sf::FloatRect rect, sf::RenderWindow &window)
{	
	if (rect.contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
		v_cookieNumber++;
}

unsigned long long int ClickFunctinality::f_getCookies()
{
	return v_cookieNumber;
}

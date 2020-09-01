#pragma once
#include <SFML/Graphics.hpp>
#include "ClickFunctionality.h"
#include <iostream>
#include <string>
class TextureHandling
{

public:
	TextureHandling();
	~TextureHandling();
	void f_setScale(sf::Vector2f v_scale);
	sf::Sprite f_getSprite();
	sf::FloatRect f_getSpriteGlobalBound();
	sf::Text f_getCountText();
	void f_setCookieCountText(unsigned long long num);
	void f_updateCookies();
	sf::Texture f_getTexture();
private:
	sf::Sprite s_cookieSprite;
	sf::Texture t_cookieTexture;
	sf::Vector2f v_scale;
	sf::Text t_cookieCountText;
	sf::Font v_textFont;
};

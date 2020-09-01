#include "TextureHandling.h"
ClickFunctinality clickObj1;

TextureHandling::TextureHandling()
{
	v_scale = sf::Vector2f(0.1, 0.1);
	t_cookieTexture.loadFromFile("cookie-png-transparent-images-background-23.png");
	s_cookieSprite.setTexture(t_cookieTexture);
	s_cookieSprite.setScale(v_scale);
	s_cookieSprite.setPosition((1422/2) - (s_cookieSprite.getGlobalBounds().width/2), (800/2) - (s_cookieSprite.getGlobalBounds().height/2)); //Position is deviding the resolution in two and subtracing half of sprite bound
	v_textFont.loadFromFile("Kavoon-Regular.ttf");
	t_cookieCountText.setFont(v_textFont);
	t_cookieCountText.setScale(2, 2);
	f_updateCookies();
}

TextureHandling::~TextureHandling()
{
}

void TextureHandling::f_setScale(sf::Vector2f v_scale)
{
	v_scale = this->v_scale;
}

sf::Sprite TextureHandling::f_getSprite()
{
	return s_cookieSprite;
}

sf::FloatRect TextureHandling::f_getSpriteGlobalBound()
{
	return s_cookieSprite.getGlobalBounds();
}

sf::Text TextureHandling::f_getCountText()
{
	return t_cookieCountText;
}

void TextureHandling::f_setCookieCountText(unsigned long long num)
{
	t_cookieCountText.setString(std::to_string(num));
}

void TextureHandling::f_updateCookies()
{
	t_cookieCountText.setString(std::to_string(clickObj1.f_getCookies()));
}

sf::Texture TextureHandling::f_getTexture()
{
	return t_cookieTexture;
}

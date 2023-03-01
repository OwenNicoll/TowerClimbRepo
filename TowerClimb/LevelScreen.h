#pragma once
#include "Screen.h"
#include <SFML/Graphics.hpp>


class LevelScreen : public Screen
{
public:
	LevelScreen(Game* newGamePtr);

	 void Update(sf::Time frameTime) override;
	 void Draw(sf::RenderTarget& target) override;


private:
	sf::Texture tempTex;
	sf::Sprite tempSprite;
};


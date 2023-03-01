#pragma once
#include <SFML/Graphics.hpp>
#include "Game.h"


class Screen
{

public:
	
	Screen(Game* gamePtr);

	virtual void Update(sf::Time frameTime);
	virtual void Draw(sf::RenderTarget& target);

protected:

	Game* gamePtr;
	


};


#pragma once
#include <SFML\Graphics.hpp>

class Cloudclass{
	private:
		sf::Clock cloudt;

	public:
		void cloudmove(bool flag, float acccloud, sf::RectangleShape& cloud1, sf::RectangleShape& cloud2, sf::RectangleShape& cloud3, sf::RectangleShape& cloud4, sf::Time deltaTime);
};


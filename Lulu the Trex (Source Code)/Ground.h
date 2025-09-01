#pragma once
#include <SFML\Graphics.hpp>

class Groundclass{
	private:
		sf::Clock groundt;
		bool flag = true;

	public:
		void groundmove(bool flag, float accground, sf::RectangleShape& ground, sf::RectangleShape& ground2, sf::Time deltaTime);
		void groundmax(bool flag, float accground, sf::RectangleShape& ground, sf::RectangleShape& ground2, sf::Time deltaTime);
		void groundslow(float slow, float accground, sf::RectangleShape& ground, sf::RectangleShape& ground2, sf::Time deltaTime);
};


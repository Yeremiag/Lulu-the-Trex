#pragma once
#include <SFML\Graphics.hpp>

class Enemy{
private:
	sf::Clock enemyt;

public:
	void enemymove(bool flag, float accenemy, sf::RectangleShape& cactus, sf::RectangleShape& cactushitbox, sf::RectangleShape& cactushitbox1, sf::RectangleShape& cactushitbox2, sf::Time deltaTime);
	void enemymax(bool flag, float accenemy, sf::RectangleShape& cactus, sf::RectangleShape& cactushitbox, sf::RectangleShape& cactushitbox1, sf::RectangleShape& cactushitbox2, sf::Time deltaTime);
};


#include "Enemy.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void Enemy::enemymove(bool flag, float accenemy, sf::RectangleShape& cactus, sf::RectangleShape& cactushitbox, sf::RectangleShape& cactushitbox1, sf::RectangleShape& cactushitbox2, sf::Time deltaTime){
	float t = enemyt.getElapsedTime().asSeconds();
	if (flag) {
		enemyt.restart();
	}
	cactus.move(accenemy + (t*-0.02) * deltaTime.asMilliseconds(), 0);
	cactushitbox.move(accenemy + (t * -0.02) * deltaTime.asMilliseconds(), 0);
	cactushitbox1.move(accenemy + (t * -0.02) * deltaTime.asMilliseconds(), 0);
	cactushitbox2.move(accenemy + (t * -0.02) * deltaTime.asMilliseconds(), 0);
	float speed = accenemy + (t * -0.02) * deltaTime.asMilliseconds();
	std::cout << speed << std::endl;
}

void Enemy::enemymax(bool flag, float accenemy, sf::RectangleShape& cactus, sf::RectangleShape& cactushitbox, sf::RectangleShape& cactushitbox1, sf::RectangleShape& cactushitbox2, sf::Time deltaTime){
	cactus.move(-1.2 * deltaTime.asMilliseconds(), 0);
	cactushitbox.move(-1.2 * deltaTime.asMilliseconds(), 0);
	cactushitbox1.move(-1.2 * deltaTime.asMilliseconds(), 0);
	cactushitbox2.move(-1.2 * deltaTime.asMilliseconds(), 0);
}

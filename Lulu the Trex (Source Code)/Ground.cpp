#include "Ground.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void Groundclass::groundmove(bool flag, float accground, sf::RectangleShape& ground, sf::RectangleShape& ground2, sf::Time deltaTime) {
	float t = groundt.getElapsedTime().asSeconds();
	if (flag) {
		groundt.restart();
	}
	ground.move(accground + (t * -0.02) * deltaTime.asMilliseconds(), 0);
	ground2.move(accground + (t * -0.02) * deltaTime.asMilliseconds(), 0);
}

void Groundclass::groundmax(bool flag, float accground, sf::RectangleShape& ground, sf::RectangleShape& ground2, sf::Time deltaTime){
	ground.move(-1.2 * deltaTime.asMilliseconds(), 0);
	ground2.move(-1.2 * deltaTime.asMilliseconds(), 0);
}

void Groundclass::groundslow(float slow, float accground, sf::RectangleShape& ground, sf::RectangleShape& ground2, sf::Time deltaTime){
	if (flag) {
		ground.move(accground * deltaTime.asMilliseconds(), 0);
		ground2.move(accground * deltaTime.asMilliseconds(), 0);
		if (accground > 0.0) {
			flag = false;
		}
	}
}

#include "cloud.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void Cloudclass::cloudmove(bool flag, float acccloud, sf::RectangleShape& cloud1, sf::RectangleShape& cloud2, sf::RectangleShape& cloud3, sf::RectangleShape& cloud4, sf::Time deltaTime)
{
	float t = cloudt.getElapsedTime().asSeconds();
	if (flag) {
		cloudt.restart();
		t = 1;
	}
	cloud1.move(0.5 * acccloud * (t / 60) * deltaTime.asMilliseconds()/2, 0);
	cloud2.move(0.5 * acccloud * (t / 40) * deltaTime.asMilliseconds() / 2, 0);
	cloud3.move(0.5 * acccloud * (t / 70) * deltaTime.asMilliseconds() / 2, 0);
	cloud4.move(0.5 * acccloud * (t / 80) * deltaTime.asMilliseconds() / 2, 0);
}

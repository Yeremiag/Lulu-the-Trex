#include "Lulunimation.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Lulunimation::Lulunimation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime){
	this->imageCount = imageCount;
	this->switchTime = switchTime;
	totalTime = 0.0f;
	currentImage.y = 0;
	uvRect.width = texture->getSize().x / float(imageCount.x);
	uvRect.height = texture->getSize().y / float(imageCount.y);
}

Lulunimation::~Lulunimation() {
}


void Lulunimation::Update(int row, float deltaTime){
	currentImage.x = row;
	totalTime += deltaTime;
	if (totalTime >= switchTime) {
		totalTime -= switchTime;
		currentImage.y++;
		if (currentImage.y >= imageCount.y) {
			currentImage.y = 0;
		}
	}
	uvRect.left = currentImage.x * uvRect.width;
	uvRect.top = currentImage.y * uvRect.height;
}

bool Lulunimation::lulujump(sf::RectangleShape& playerrun, sf::RectangleShape& lulurun1, sf::RectangleShape& lulurun2, sf::RectangleShape& lulurun3, sf::RectangleShape& lulurun4, sf::RectangleShape& lulurun5, sf::RectangleShape& lulurun6, sf::RectangleShape& lulurun7, sf::RectangleShape& lulurun8, sf::RectangleShape& lulurun9, sf::RectangleShape& lulurun10, sf::RectangleShape& lulurun11, sf::RectangleShape& lulurun12, sf::RectangleShape& lulurun13, sf::RectangleShape& lulurun14, sf::RectangleShape& lulurun15, sf::RectangleShape& lulurun16, sf::RectangleShape& lulurun17, sf::RectangleShape& lulurun18, sf::RectangleShape& lulurun19, sf::RectangleShape& lulurun20, sf::RectangleShape& lulurun21, sf::RectangleShape& lulurun22, sf::RectangleShape& lulurun23, float& v)
{
	float t = jump.getElapsedTime().asSeconds() * 10;
	jump.restart();
	playerrun.move(0, v * t  * -1);
	lulurun1.move(0, v * t * -1 * 1);
	lulurun2.move(0, v * t * -1 * 1);
	lulurun3.move(0, v * t * -1 * 1);
	lulurun4.move(0, v * t * -1 * 1);
	lulurun5.move(0, v * t * -1 * 1);
	lulurun6.move(0, v * t * -1 * 1);
	lulurun7.move(0, v * t * -1 * 1);
	lulurun8.move(0, v * t * -1 * 1);
	lulurun9.move(0, v * t * -1 * 1);
	lulurun10.move(0, v * t * -1 * 1);
	lulurun11.move(0, v * t * -1 * 1);
	lulurun12.move(0, v * t * -1 * 1);
	lulurun13.move(0, v * t * -1 * 1);
	lulurun14.move(0, v * t * -1 * 1);
	lulurun15.move(0, v * t * -1 * 1);
	lulurun16.move(0, v * t * -1 * 1);
	lulurun17.move(0, v * t * -1 * 1);
	lulurun18.move(0, v * t * -1 * 1);
	lulurun19.move(0, v * t * -1 * 1);
	lulurun20.move(0, v * t * -1 * 1);
	lulurun21.move(0, v * t * -1 * 1);
	lulurun22.move(0, v * t * -1 * 1);
	lulurun23.move(0, v * t * -1 * 1);
	v -= 30 * t;
	if (v < -125.0) {
		return true;
	}
	return false;
}

void Lulunimation::resetjump()
{
	jump.restart();
}

#include "Runanimation.h"
#include <SFML/Graphics.hpp>
#include <iostream>

Runanimation::Runanimation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime){
	this->imageCount = imageCount;
	this->switchTime = switchTime;
	totalTime = 0.0f;
	currentImage.y = 0;
	uvRect.width = texture->getSize().x / float(imageCount.x);
	uvRect.height = texture->getSize().y / float(imageCount.y);
}

Runanimation::~Runanimation(){
}

void Runanimation::Update(int row, float deltaTime){
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

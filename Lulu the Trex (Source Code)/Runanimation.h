#pragma once
#include <SFML\Graphics.hpp>

class Runanimation{
private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;
	float totalTime;
	float switchTime;

public:
	Runanimation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~Runanimation();
	sf::IntRect uvRect;
	void Update(int row, float deltaTime);
};


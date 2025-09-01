#pragma once
#include <SFML\Graphics.hpp>

class bird{
private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;
	float totalTime;
	float switchTime;
public:
	bird(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~bird();
	sf::IntRect uvRect;
	void Update(int row, float deltaTime);
};

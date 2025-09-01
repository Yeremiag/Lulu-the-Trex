#pragma once
#include <SFML\Graphics.hpp>
	
class Lulunimation{
private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;
	float totalTime;
	float switchTime;
	sf::Clock jump;

public:
	Lulunimation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~Lulunimation();
	sf::IntRect uvRect;
	void Update(int row, float deltaTime);
	bool lulujump(sf::RectangleShape &player, sf::RectangleShape &lulurun1, sf::RectangleShape& lulurun2, sf::RectangleShape& lulurun3, sf::RectangleShape& lulurun4, sf::RectangleShape& lulurun5, sf::RectangleShape& lulurun6, sf::RectangleShape& lulurun7, sf::RectangleShape& lulurun8, sf::RectangleShape& lulurun9, sf::RectangleShape& lulurun10, sf::RectangleShape& lulurun11, sf::RectangleShape& lulurun12, sf::RectangleShape& lulurun13, sf::RectangleShape& lulurun14, sf::RectangleShape& lulurun15, sf::RectangleShape& lulurun16, sf::RectangleShape& lulurun17, sf::RectangleShape& lulurun18, sf::RectangleShape& lulurun19, sf::RectangleShape& lulurun20, sf::RectangleShape& lulurun21, sf::RectangleShape& lulurun22, sf::RectangleShape& lulurun23, float& v);
	void resetjump();
};


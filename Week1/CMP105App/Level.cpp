#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	circle.setRadius(50);
	circle.setPosition(500, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(10.f);


	rectR.setSize(sf::Vector2f(100, 100));
	rectR.setPosition(300, 300);
	rectR.setFillColor(sf::Color::Red);

	rectG.setSize(sf::Vector2f(50, 50));
	rectG.setPosition(325, 325);
	rectG.setFillColor(sf::Color::Green);

	rectB.setSize(sf::Vector2f(25, 25));
	rectB.setPosition(338, 337);
	rectB.setFillColor(sf::Color::Blue);

	rectG2.setSize(sf::Vector2f(50, 50));
	rectG2.setPosition(1150,620);
	rectG2.setFillColor(sf::Color::Green);


	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(15);
	text.setPosition(500, 0);
	text.setFillColor(sf::Color::Red);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rectG2.setPosition(pos.x - 50, pos.y - 50);
	rectG2.getSize();
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(circle);
	window->draw(rectR);
	window->draw(rectG);
	window->draw(rectG2);
	window->draw(rectB);
	window->draw(text);
	endDraw();
}



void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
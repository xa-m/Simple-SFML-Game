#include "Game.h"

// privite functions
void Game::initVariables()
{
	this->window = nullptr;
}

void Game::initWindow()
{
	this->videoMode.height = 480;
	this->videoMode.width = 640;
	this->window = new RenderWindow(this->videoMode, "C++/SFML Project", Style::Titlebar | Style::Close);

	this->window->setFramerateLimit(144);
}


void Game::initEnemies()
{
	this->enemy.setPosition(10.f, 10.f);

	this->enemy.setSize(Vector2f(100.f, 100.f));
	this->enemy.setScale(Vector2f(0.5f, 0.5f));
	this->enemy.setFillColor(Color(176, 5, 46));
	this->enemy.setOutlineColor(Color::Black);
	this->enemy.setOutlineThickness(1.f);
}




// Consts

Game::Game() {
	this->initVariables();
	this->initWindow();
	this->initEnemies();
}

Game::~Game() {
	delete this->window;
}

const bool Game::running() const
{
	return this->window->isOpen();
}

// Accescors


// Functions

void Game::pollEvents()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case Event::Closed:
			this->window->close();
			break;

		case Event::KeyPressed:
			if (this->ev.key.code == Keyboard::Escape)
			{
				this->window->close();
			}
			break;
		}
	}
}

void Game::update()
{
	this->pollEvents();

	// Realtive to the screen
	//std::cout << "Mause pos: " << sf::Mouse::getPosition().x << " " << sf::Mouse::getPosition().y << "\n";

	// Relative to the window

	//std::cout << "Mause pos: " << sf::Mouse::getPosition(*this->window).x << " " << sf::Mouse::getPosition(*this->window).y << "\n";

	int mauseX = sf::Mouse::getPosition(*this->window).x - 25;
	int mauseY = sf::Mouse::getPosition(*this->window).y - 25;

	this->setEnemyPosition(mauseX, mauseY);
}

void Game::render()
{
	this->window->clear();

	// draw game

	this->window->draw(this->enemy);

	this->window->display();
}


void Game::setEnemyPosition(int x, int y)
{
	/*if (x >= 0 && x <= 590 && y >= 0 && y <= 430)
	{
		this->enemy.setPosition(x, y);
	}*/

	

	if (x < 0)
	{
		x = 0;
	}
	else if (x > 590)
	{
		x = 590;
	}

	if (y < 0)
	{
		y = 0;
	}
	else if (y > 430)
	{
		y = 430;
	}

	this->enemy.setPosition(x, y);


}


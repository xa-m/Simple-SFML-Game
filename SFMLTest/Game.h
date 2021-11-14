#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace sf;


class Game
{
private:
	// Variables
	// Window
	RenderWindow* window;
	Event ev;
	VideoMode videoMode;
	
	// game objects

	RectangleShape enemy;


	// privite functions
	void initVariables();
	void initWindow();
	void initEnemies();
	void setEnemyPosition(int x, int y);

public:
	//Constrs
	Game();
	virtual ~Game();

	// Accescors
	const bool running() const;


	// Functions
	void pollEvents();
	void update();
	void render();

};


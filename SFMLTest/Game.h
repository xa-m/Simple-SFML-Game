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
	int windowHeight;
	int windowWidth;
	int squareSize;
	int frameRate;

	// Window
	RenderWindow* window;
	Event ev;
	VideoMode videoMode;
	
	// game objects

	RectangleShape enemy;


	// privite functions
	void initVariables();
	void setEnemyPosition(int x, int y);

public:
	//Constrs
	Game();
	virtual ~Game();
	void initWindow();
	void initEnemies();

	// Accescors
	const bool running() const;


	// Functions
	void pollEvents();
	void update();
	void render();

	void initParams(int windowHeight, int windowWidth, int squareSize, int frameRate);

};


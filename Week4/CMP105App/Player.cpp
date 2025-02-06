#include <iostream>
#include "Player.h"



Player::Player(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	

}

Player::~Player()
{

}

// handle user input
void Player::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::A))
	{
		
	}

}

// Update game objects
void Player::update(float dt)
{

}


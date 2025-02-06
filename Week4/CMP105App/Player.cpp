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
	if (input->isKeyDown(sf::Keyboard::W))
	{
		move(0, -1);
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		move(0, 1);
	}

	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(+1,0);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(-1, 0);
	}
}

// Update game objects
void Player::update(float dt)
{

}


#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>


class Player : public GameObject {
public:
	Player(sf::RenderWindow* hwnd, Input* in);
	Player()
	{
	};
	
	~Player();



	void handleInput(float dt) override;
	void update(float dt) override;

private:


};
#pragma once

#include "Actor.h"
#include "Enemy.h"
#include "Animation.h" 
#include "Projectile.h" 

class Minion : public Enemy
{
public:
	Minion(float x, float y, Game* game);
};

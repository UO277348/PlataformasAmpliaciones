#include "Zombie.h"

Zombie::Zombie(float x, float y, Game* game)
	: Enemy("res/enemigo.png", x, y, 36, 40, game) {

	onAir = false;
	orientation = game->orientationRight;
	state = game->stateMoving;

	aDyingRight = new Animation("res/enemydieright.png", width, height,
		320, 40, 6, 8, true, game);
	aDyingLeft = new Animation("res/enemydie.png", width, height,
		320, 40, 6, 8, true, game);
	aIdleRight = new Animation("res/enemyidleright.png", width, height,
		320, 40, 6, 8, true, game);
	aIdleLeft = new Animation("res/enemyidle.png", width, height,
		320, 40, 6, 8, true, game);
	aRunningRight = new Animation("res/enemyrunningright.png", width, height,
		320, 40, 6, 8, true, game);
	aRunningLeft = new Animation("res/enemyrunning.png", width, height,
		320, 40, 6, 8, true, game);

	animation = aIdleRight;
}
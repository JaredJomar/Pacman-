#pragma once
#include "Powerup.h"
#include "Player.h"

class StrawberryPowerup: public Powerup {
    public:
        StrawberryPowerup(Player* p);
        void activate();
        Player* p;
};
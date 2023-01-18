#pragma once
#include "Powerup.h"
#include "Player.h"

class CherryPowerup: public Powerup {
    public:
        void activate();
        CherryPowerup(Player* p);
        Player* p;
};
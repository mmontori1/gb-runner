#ifndef STATE_H
#define STATE_H

#include "selector.h"
#include "start.h"
#include "game.h"
#include "over.h"

#include "../helpers/clear.h"
#include "../models/gameState.h"

void updateState(Action type, UINT8 numSpriteTiles);

#endif

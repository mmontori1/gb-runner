#ifndef OVER_H
#define OVER_H

#include "input.h"
#include "state.h"

#include "../helpers/clear.h"
#include "../models/backdrop.h"
#include "../models/data.h"
#include "../models/dimension.h"
#include "../models/gameState.h"

void setupOver();
void initOver();
void restartGame();
void returnToMenu();
void selectorUp();
void selectorDown();
void selectorSelectOption();
void updateSelector();

#endif

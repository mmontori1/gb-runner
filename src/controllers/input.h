#ifndef INPUT_H
#define INPUT_H

#include "../models/gameState.h"

void checkInput();
void clearInputs();

extern void (*start_button) ();
extern void (*select_button) ();
extern void (*up_button) ();
extern void (*left_button) ();
extern void (*right_button) ();
extern void (*down_button) ();
extern void (*a_button) ();
extern void (*b_button) ();

#endif
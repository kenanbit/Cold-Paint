#ifndef EVENTS
#define EVENTS

#include "objects.h"

int arrows();
int wasd();

bool up(GameObject* go);
bool down(GameObject* go);
bool left(GameObject* go);
bool right(GameObject* go);
bool F();
bool P();
int handleEvents();
#endif

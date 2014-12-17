#ifndef REGLES_H
#define REGLES_H

#include "tools.h"
#include <iostream>
#include <vector>
using namespace std;


bool isMoveValid(int* pos, int move, int player);

void playMove(int* pos, int move, int player);

int* getResult(int* pos, int move, int player);

bool inOpponentSide(int move, int player);

bool sideEmpty(int* pos, int player);

vector<int> availableMoves(int* pos, int player);









#endif

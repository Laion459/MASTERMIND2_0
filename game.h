#pragma once
#include "testGame.h"
#include "allTest.h"
#include <iostream>
#include <string>
#include <ctime>


void welcom();
void win();
void gameOver();
void menu();
const char KEYCOLORS[6] = {'G','B','O','Y','P','R'};
const char PIN[3] = {'W','B','N'};
std::string randomKey(int lengthRandomKey);
std::string randomKeySystem();
std::string inputPlayer();
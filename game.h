#pragma once
#include "testGame.h"
#include "allTest.h"
#include <iostream>
#include <string>
#include <ctime>

const char KEYCOLORS[6] = {'G','B','O','Y','P','R'};
const char PIN[3] = {'W','B','N'};
std::string randomKey(int lengthKey);
std::string inputPlayer();
std::string testPin(std::string input, std::string randomKey);
std::string verificador(std::string input,std::string randomKey);
void pins(std::string input,std::string randomKey);
std::string gameOver(int number);

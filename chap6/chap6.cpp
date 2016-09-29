// chap6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Chap6.h"

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>


using namespace std;



Dice::Dice()
{
	MaxDiceValue = 6;
	DiceValue = 0;
}

Dice::~Dice()
{
}

int Dice::RollDice(){
	DiceValue = rand()%MaxDiceValue+1;
	return DiceValue;
}


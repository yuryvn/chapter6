
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>

class Dice
{
public:
	Dice();
	~Dice();
	int RollDice();


private:
	int MaxDiceValue;
	int DiceValue;
};

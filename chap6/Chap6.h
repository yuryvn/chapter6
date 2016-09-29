#pragma once

#ifndef Chap6_h
#define Chap6_h



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

#endif
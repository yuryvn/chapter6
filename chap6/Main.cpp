
#include "stdafx.h"
#include "Chap6.h"

using namespace std;

int main(void)
{
	Dice OurDice;
	srand(time(NULL));
	
	cout << "Dice roll=" << OurDice.RollDice();

	return 0;
}


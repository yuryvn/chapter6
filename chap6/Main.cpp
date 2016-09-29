
#include "stdafx.h"
#include "Chap6.h"

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

int main(void)
{
	Dice OurDice;
	srand(time(NULL));
	
	cout << "Dice roll=" << OurDice.RollDice() << endl;
	

	return 0;
}


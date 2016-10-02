
#include "stdafx.h"
//#include "Chap6.h"
#include "exercises.h"

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>

using namespace std;

int main(void)
{
	srand(time(NULL));
	
	TComplex a, b, c;

	a.SetNumber(3.4, 5.6);
	b.SetNumber(-1.2, 4.6);

	c.PrintNumber();
	c.Sum(a, b);
	c.PrintNumber();
	c.Minus(a, b);
	c.PrintNumber();
	

	return 0;
}


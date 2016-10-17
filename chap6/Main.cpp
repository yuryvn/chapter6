
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
	
	TRational a(64,16), b(-3,9), c(5.9,'s');

	a.PrintInt();
	b.PrintInt(); b.PrintFloat();
	c.PrintInt(); c.PrintFloat();
	cout << "I am here" << endl;
	c.Sum(a, b);

	c.PrintInt(); c.PrintFloat();
	

	return 0;
}


#include "stdafx.h"
#include "exercises.h"

using namespace std;
//ex 6.6 complex numbers operations

TComplex::TComplex(double r1, double r2)
{
	Re2 = 0.0; Im2 = 0.0;
	SetNumber(r1, r2);
}

TComplex::~TComplex()
{
}

void TComplex::SetNumber(double Real, double Imagine){
	Re1 = Real;
	Im1 = Imagine;
}

void TComplex::Summation_private() {
	Re1 += Re2;
	Im1 += Im2;
}

void TComplex::Minus_private() {
	Re1 -= Re2;
	Im1 -= Im2;
}

double TComplex::GetRe(){ return Re1; }
double TComplex::GetIm(){ return Im1; }


void TComplex::Sum(TComplex &Var1, TComplex &Var2){
	Re1 = Var1.GetRe();
	Im1 = Var1.GetIm();
	Re2 = Var2.GetRe();
	Im2 = Var2.GetIm();

	Summation_private();
}

void TComplex::Minus( TComplex &Var1,  TComplex &Var2){
	Re1 = Var1.GetRe();
	Im1 = Var1.GetIm();
	Re2 = Var2.GetRe();
	Im2 = Var2.GetIm();

	Minus_private();
}

void TComplex::PrintNumber(){
	cout << "Complex Number is " << "(" << Re1 << "," << Im1 << ")" << endl;
}

//ex 3.7 rational class


TRational::TRational(int A_init = 1, int B_init = 1){ SetNumber(A_init,B_init); }

TRational::~TRational(){}


void TRational::ReduceNumber(){
	for(int i=1;i<
}


template <class InitClass>

void TRational::SetNumber(InitClass A_init, InitClass B_init){
	while (((int)A_init != A_init){
		cout << "A must be integer, reenter A:";
		cin >> A_init;
	}
	a = (int)A_init;

	while (((int)B_init != B_init||B_init==0){
		cout << "B must be integer and not equal to 0, reenter B:";
		cin >> B_init;
	}
	b = (int)B_init;
	ReduceNumber();
}

void TRational::PrintNormal(){
	cout << a << "/" << b << endl;
}

void TRational::PrintFloat(){
	double out = (double)a / (double)b;
	cout << out << endl;
}


void Sum(TRational  &Var1, TRational  &Var2);
void Minus(TRational &Var1, TRational &Var2);
void Mult(TRational  &Var1, TRational  &Var2);
void Del(TRational &Var1, TRational &Var2);


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
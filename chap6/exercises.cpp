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

void TComplex::Minus(TComplex &Var1, TComplex &Var2){
	Re1 = Var1.GetRe();
	Im1 = Var1.GetIm();
	Re2 = Var2.GetRe();
	Im2 = Var2.GetIm();

	Minus_private();
}

void TComplex::PrintNumber(){
	cout << "Complex Number is " << "(" << Re1 << "," << Im1 << ")" << endl;
}

//-------------------Rational
TRational::TRational(int a, int b ){
	SetValues(a, b);
}
TRational::~TRational(){}

void TRational::Sum(TRational &var1, TRational &var2){
	Up = var1.GetUp()*var2.GetBottom() + var1.GetBottom()*var2.GetUp();
	Bottom = var1.GetBottom() * var2.GetBottom();
	MakeSmall();
}
void TRational::Minus(TRational &var1, TRational &var2){
	Up = var1.GetUp()*var2.GetBottom() - var1.GetBottom()*var2.GetUp();
	Bottom = var1.GetBottom() * var2.GetBottom();
	MakeSmall();
}

void TRational::Mult(TRational &var1, TRational &var2){
	Up = var1.GetUp()*var2.GetUp();
	Bottom = var1.GetBottom()*var2.GetBottom();
	MakeSmall();
}

void TRational::Delete(TRational &var1, TRational &var2){
	Up = var1.GetUp()*var2.GetBottom();
	Bottom = var1.GetBottom()*var2.GetUp();
	MakeSmall();
}
void TRational::PrintInt(){
	cout << Up << "/" << Bottom << endl;
}
void TRational::PrintFloat(){
	cout << (float)Up / Bottom << endl;
}

int TRational::GetUp(){
	return Up;
}

int TRational::GetBottom(){
	return Bottom;
}

template <class TValues>
void TRational::SetValues(TValues a, TValues b){

	while (a != (int)a){
		cout << "Incorrect input for top, enter integer" << endl;
		cin >> a;
	}
	Up = a;

	while (b != (int)b){
		cout << "Incorrect input for bottom, enter integer" << endl;
		cin >> b;
	}
	Bottom = b;

	MakeSmall();
}

void TRational::MakeSmall(){
	int C;
	abs(Up) > abs(Bottom) ? C = abs(Bottom) : C = abs(Up);
	for (int i = 2; i <= C; i++){
		while (Up%i == 0 && Bottom%i == 0) {
			Up /= i; Bottom /= i;
		}
	}
}
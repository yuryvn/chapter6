#pragma once

//ex 6.6 complex numbers operations
class TComplex
{
public:
	TComplex(double r1 = 1.0,double i1=1.0);
	~TComplex();
	void SetNumber(double, double);
	double GetRe();
	double GetIm();
	void Sum(TComplex  &, TComplex  &);
	void Minus( TComplex &Var1,  TComplex &Var2);
	void PrintNumber();
	

private:
	double Re1,Im1;
	double Re2, Im2;
	void Summation_private();
	void Minus_private();
};


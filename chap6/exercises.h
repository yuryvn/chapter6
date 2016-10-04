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

//ex 6.7 Rational numbers operations
class TRational
{
public:
	TRational(int A_init = 1, int B_init = 1);
	~TRational();
	template <class InitClass>
	void SetNumber(InitClass A_init, InitClass B_init);

	void PrintNormal();
	void PrintFloat();
	void Sum(TRational  &Var1, TRational  &Var2);
	void Minus(TRational &Var1, TRational &Var2);
	void Mult(TRational  &Var1, TRational  &Var2);
	void Del(TRational &Var1, TRational &Var2);


private:
	int a, b;
	void ReduceNumber();
};
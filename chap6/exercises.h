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

class TRational
{
public:
	TRational(int a=1,int b=1);
	~TRational();
	void Sum(TRational &var1, TRational &var2);
	void Minus(TRational &var1, TRational &var2);
	void Mult(TRational &var1, TRational &var2);
	void Delete(TRational &var1, TRational &var2);
	void PrintInt();
	void PrintFloat();
	int GetUp();
	int GetBottom();

	template <class TValues> 
		void SetValues(TValues a, TValues b);
		
private:
	int Up;
	int Bottom;
	void MakeSmall();//
};

//BLYADS KII GIT


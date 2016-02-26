/*Kshir Ramruthan (214502398)
  Computer Methods 3
  Tut 2 - Fraction*/
#include<iostream>

using namespace std;

class Fraction
{
private:
	int numer;
	int denom;

public:
	Fraction(int numerator,int denominator) //Default constructor
	{
		numer = numerator;
		denom = denominator;
	}//End constructor

	~Fraction()//Default destructor
	{
		numer = 0;
		denom = 1;
	}//End destructor

	int getNumDenom()
	{
		return denom;
	}//End getNumDenom()

	int getNumNumer()
	{
		return numer;
	}//End getNumNumer()

	void setNumDenom(int denominator)
	{
		denom = denominator;
	}//End setNumDenom()

	void setNumNumer(int numerator)
	{
		numer = numerator;
	}//End setNumNumer()

	float add(Fraction fract)
	{
		return float((numer / denom)) + float((fract.getNumNumer() / fract.getNumDenom())); //Type cast to float to keep precision
	}//End add()

	float subtract(Fraction fract)
	{
		return float((numer / denom)) - float((fract.getNumNumer() / fract.getNumDenom()));
	}//End subtract

	float multiply(Fraction fract)
	{
		return float((numer / denom)) * float((fract.getNumNumer() / fract.getNumDenom()));
	}//End multiply

	float divide(Fraction fract)
	{
		return float((numer / denom)) / float((fract.getNumNumer() / fract.getNumDenom()));
	}//End multiply

};

int main()
{
	return 1;
}
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

	~Fraction()
	{
		numer = 0;
		denom = 1;
	}
};

int main()
{
	return 1;
}
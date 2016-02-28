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
	Fraction(int numerator = 1,int denominator = 1) //Default constructor
	{
		numer = numerator;
		denom = denominator;
	}//End constructor

	~Fraction()//Default destructor
	{
		numer = 0;
		denom = 1;
	}//End destructor

	int getNumDenom() //Accessor
	{
		return denom;
	}//End getNumDenom()

	int getNumNumer() //Accessor
	{
		return numer;
	}//End getNumNumer()

	void setNumDenom(int denominator) //Mutator
	{
		denom = denominator;
	}//End setNumDenom()

	void setNumNumer(int numerator) //Mutator
	{
		numer = numerator;
	}//End setNumNumer()

	Fraction add(Fraction fract) //Add a fraction to an existing fraction
	{
		Fraction temp;
		temp.numer = (numer*fract.denom)+(denom*fract.numer);
		temp.denom = denom*fract.denom;
		return temp;
	}//End add()

	Fraction subtract(Fraction fract) //Subtract a fraction from an existing fraction
	{
		Fraction temp;
		temp.numer = (numer*fract.denom) - (denom*fract.numer);
		temp.denom = denom*fract.denom;
		return temp;
	}//End subtract

	Fraction multiply(Fraction fract) //Multiply an existing fraction with another fraction 
	{
		Fraction temp;
		temp.numer = numer*fract.numer;
		temp.denom = denom*fract.denom;
		return temp;
	}//End multiply

	Fraction divide(Fraction fract) //Divide an existing fraction by another fraction 
	{
		Fraction temp;
		temp.numer = numer*fract.denom;
		temp.denom = denom*fract.numer;
	}//End multiply

	void print() //Output fraction in standard form
	{
		cout << numer / denom << " " << numer - denom*(numer / denom) << "/" << denom << endl;
	}//End print
};

Fraction multiply(Fraction fract);

int main()
{
	int numer, denom;
	cin >> numer;
	cin >> denom;
	cout << numer / denom << " " << numer - denom*(numer / denom) << "/" << denom << endl;

	Fraction test(7, 6);
	Fraction test2(6,7);
	cout << test.multiply(test2).getNumDenom() << endl;

	return 1;
}
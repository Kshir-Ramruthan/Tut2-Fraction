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

	~Fraction() //Default destructor
	{
		numer = 0;
		denom = 1;
	}//End destructor

	void getNumDenom(int *numerator, int *denominator) //Accessor method (Retrieve both the numerator and denominator)
	{
		 *denominator = denom;
		 *numerator = numer;
	}//End getNumDenom()

	void setNumDenom(int denominator, int numerator) //Mutator method (Change the value of the numerator and denominator)
	{
		denom = denominator;
		numer = numerator;
	}//End setNumDenom()

	Fraction operator +(Fraction fract) //Add a fraction to an existing fraction
	{
		Fraction temp;
		temp.numer = (numer*fract.denom)+(denom*fract.numer);
		temp.denom = denom*fract.denom;
		return temp;
	}//End add()

	Fraction operator -(Fraction fract) //Subtract a fraction from an existing fraction
	{
		Fraction temp;
		temp.numer = (numer*fract.denom) - (denom*fract.numer);
		temp.denom = denom*fract.denom;
		return temp;
	}//End subtract

	Fraction operator *(Fraction fract) //Multiply an existing fraction with another fraction 
	{
		Fraction temp;
		temp.numer = numer*fract.numer;
		temp.denom = denom*fract.denom;
		return temp;
	}//End multiply

	Fraction operator /(Fraction fract) //Divide an existing fraction by another fraction 
	{
		Fraction temp;
		temp.numer = numer*fract.denom;
		temp.denom = denom*fract.numer;
		return temp;
	}//End multiply

	int HCF(int num, int den) //Find the highest common factor of the numerator and denominator
	{
		if (den == 0)
			return num;
		else
			return HCF(den,num%den);
	}//End HCF

	void print() //Output fraction in standard form ie. mixed number
	{
		int hcf = HCF(numer - denom*(numer / denom), denom);
		if (numer>denom)
			cout << numer / denom << " " << (numer - denom*(numer / denom))/hcf << "/" << denom/hcf << endl;
		else
			cout << (numer - denom*(numer / denom))/hcf << "/" << denom/hcf << endl;
	}//End print
};//End class Fraction

int main()
{
	Fraction test1(4,7);    /*Test class Fraction*/
	Fraction test2(1,2);
	(test1+test2).print();
	(test1-test2).print();
	(test1*test2).print();
	(test1/test2).print();

	return 1;
}//End main function
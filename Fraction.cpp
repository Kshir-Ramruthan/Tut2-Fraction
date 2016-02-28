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

	int getNumDenom() //Accessor method
	{
		return denom;
	}//End getNumDenom()

	int getNumNumer() //Accessor method
	{
		return numer;
	}//End getNumNumer()

	void setNumDenom(int denominator) //Mutator method
	{
		denom = denominator;
	}//End setNumDenom()

	void setNumNumer(int numerator) //Mutator method
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
		return temp;
	}//End multiply

	void print() //Output fraction in standard form
	{
		cout << numer / denom << " " << numer - denom*(numer / denom) << "/" << denom << endl;
	}//End print
};//End class Fraction

Fraction add(Fraction fract);         /*Declare functions to be used*/
Fraction subtract(Fraction fract);
Fraction multiply(Fraction fract);
Fraction divide(Fraction fract);
void print();

int main()
{
	Fraction test1(4,7);    /*Test class Fraction*/
	Fraction test2(1,2);
	cout << "Add half: " << test1.add(test2).getNumNumer() << "/" << test1.add(test2).getNumDenom() << endl;
	cout << "Subtract half: " << test1.subtract(test2).getNumNumer() << "/" << test1.subtract(test2).getNumDenom() << endl;
	cout << "Multiply by half: " << test1.multiply(test2).getNumNumer() << "/" << test1.multiply(test2).getNumDenom() << endl;
	cout << "Divide by half: " << test1.divide(test2).getNumNumer() << "/" << test1.divide(test2).getNumDenom() << endl;
	test1.print();

	return 1;
}//End main function
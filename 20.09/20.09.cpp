#include <iostream>
#include <math.h>
using namespace std;

class Fraction
{
	double numerator;
	double denominator;

public:
	Fraction()
	{
		numerator = 0.0;
		denominator = 0.0;
	}

	void Init()
	{
		cout << "Numerator: ";
		cin >> numerator;
		cout << "Denominator: ";
		cin >> denominator;
	}
	void Print()
	{
		cout << "Result: " << numerator << "/" << denominator << endl;
	}
	friend istream& operator>>(istream& is, Fraction& obj)
	{
		is >> obj.numerator;
		is >> obj.denominator;
		return is;
	}
	friend ostream& operator<<(ostream& os, Fraction& obj)
	{
		os << "Numerator: " << obj.numerator << endl;
		os << "Denominator: " << obj.denominator << endl;
		return os;
	}
	Fraction operator +(Fraction obj)
	{
		Fraction result;
		result.numerator = numerator * obj.denominator + obj.numerator * denominator;
		result.denominator = denominator * obj.denominator;
		return result;
	}
	Fraction operator -(Fraction obj)
	{
		Fraction result;
		result.numerator = numerator * obj.denominator - obj.numerator * denominator;
		result.denominator = denominator * obj.denominator;
		return result;
	}
	Fraction operator *(Fraction obj)
	{
		Fraction result;
		result.numerator = numerator * obj.denominator;
		result.denominator = denominator * obj.numerator;
		return result;
	}
	Fraction operator /(Fraction obj)
	{
		Fraction result;
		result.numerator = numerator * obj.numerator;
		result.denominator = denominator * obj.denominator;
		return result;
	}
};

int main()//Клиент
{
	Fraction obj1;
	cin >> obj1;
	cout << obj1;

	/*Fraction first;
	first.Init();
	first.Print();

	Fraction second;
	second.Init();
	second.Print();

	Fraction result;

	result = first + second;
	result.Print();

	result = first - second;
	result.Print();

	result = first * second;
	result.Print();

	result = first / second;
	result.Print();*/


	/*result.Sum(first, second).Print();
	result.Multiply(first, second).Print();
	result.Minus(first, second).Print();
	result.Del(first, second).Print();*/

}

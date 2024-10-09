

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Fraction
{
	int num, denum;
public:
	
	
	Fraction(int num, int denum)
		: num(num), denum(denum)
	{
	}
	Fraction addition(Fraction fr) {
		int general_denum = denum * fr.denum;
		int sum_num = num * fr.denum + fr.num * denum;
		return Fraction{ sum_num, general_denum };
	}
	void print() {
		cout << num << '/' << denum << endl;
	}
};




int main()
{
	setlocale(LC_ALL, "");
	Fraction fr1 = Fraction{ 3,7 };
	Fraction fr2 =  Fraction{ 1,7 };
	Fraction result = fr1.addition(fr2);
	result.print();
}
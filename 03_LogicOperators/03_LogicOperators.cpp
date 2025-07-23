#include <iostream>
using namespace std;

int main()
{
   
	//cout << "Hello guys" << endl;
	/// унарні 
	///  -     +5   -5   ++  --
	/// бінарні 
	/// + - * / < > <= >= 
	/// 5 + 6     9 > 6
	/// тернарні
	/// 
	/// 5 % 2 =       5/2=2.5   2*2=4   5-4 = 1
	/// 15%4=3         15/4 = 3.25    4*3 = 12   15-12= 3
	/// 9%2 = 1
	/// 14%5 = 4
	/// 7%3=1
	/// 9%5 = 4
	/// 5/2 = 2.5  5%2 = 1
	/// 6/2 = 3.0   6%2 = 0
	/// 7/2
	/// 3%10 = 3  3/10 = 0.3  0*10 = 0  3-0 = 3
	
	//Increment and Decrement
	/*int a = 8;
	cout << "a = " << a << endl;
	a = a + 1;
	cout << "a = " << a << endl;
	a++;//a = a + 1;
	cout << "a = " << a << endl;
	++a;
	cout << "a = " << a << endl;

	a = a - 1;
	cout << "a = " << a << endl;
	a--;
	cout << "a = " << a << endl;
	--a;
	cout << "a = " << a << endl;

	int b = 7;
	cout << ++b << endl;//8
	cout << b++ << endl;//9
	cout << b << endl;//9

	b = b + 12;
	cout << b << endl;
	b += 12;
	cout << b << endl;
	b -= 12;
	cout << b << endl;
	b *= 12;
	cout << b << endl;
	b /= 12;
	cout << b << endl;

	int number = 5;

	float number2 = 3.4;

	int A = 23.5;//double ---> int
	cout << A << endl;


	double B = 3.33;//3.3300000000000000
	cout << B << endl;

	double d = 5.4;
	int num =(int) d;//5

	int digit;
	cout << "Enter number : ";
	cin >> digit;
	float res = (float)digit / 100;
	cout << "Res = " << res << endl;

	int o = 4;
	int y(5);
	int g{ 6 };
	cout << g << endl;
	*/

	/////////////////////////////////////////////////////
	//cout << (5 > 3) << endl;
	//cout << (5 <  3) << endl;
	//cout << ( 6 > 3) << endl;
	//cout << ( 6 >= 6) << endl;
	//cout << ( 5 <= 5) << endl;
	//cout << ( 5 == 5) << endl;
	//cout << ( 5 == 3) << endl;
	//cout << ( 5 != 3) << endl;
	//cout << ( 40 > 0 && 40 < 120) << endl;

	//if (true)
	//{
	//	//dia1;
	//}
	//else
	//{
	//	//dia2;
	//}
	//int age;
	//cout << "Enter your age : " << endl;
	//cin >> age;
	//if (age > 0 && age <= 120)
	//{
	//	cout << "Correct age "<< age << endl;
	//}
	//else
	//{
	//	cout << "Incorrect age "<< age << endl;
	//}

	//int day;
	//cout << "Enter number of day of the week : ";
	//cin >> day;
	//if (day == 1)
	//{
	//	cout << "Monday" << endl;
	//}
	//else if (day == 2)
	//{
	//	cout << "Tuesday" << endl;
	//}
	//else if (day == 3)
	//{
	//	cout << "Wednesday" << endl;
	//}
	//else if (day == 4)
	//{
	//	cout << "Thursday" << endl;
	//}
	//else if (day == 5)
	//{
	//	cout << "Friday" << endl;
	//}
	//else if (day == 6)
	//{
	//	cout << "Saturday" << endl;
	//}
	//else if (day == 7)
	//{
	//	cout << "Sunday" << endl;
	//}
	//else
	//{
	//	cout << "Incorrect day" << endl;
	//}


	float a = 5, b = 2;

	if (b == 0)
	{
		cout << "Study math" << endl;
	}
	else
	{
		cout << a / b << endl;
	}
	//ymova ? true : false;
	(b == 0)? cout << "Study math" << endl : cout << a / b << endl;


	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;

	int max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	cout << "Max  " << max << endl;

	(a > b) ? max = a :max = b;
	cout << "Max  " << max << endl;

}


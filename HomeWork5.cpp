#include <iostream>

using namespace std;

int main() 
{
	double Price_minute, Price_second, Time, Time_second, Price_all;
	cout << "Enter the call price" << endl;
	cin >> Price_minute;
	cout << "Call duration (minutes and seconds)" << endl;
	cin >> Time;
	Time_second = ((int)Time * 60) + ((Time * 100) - (int)Time * 100);
	Price_second = Price_minute / 60;
	Price_all = Time_second * Price_second;
	cout << "Call cost - " << Price_all << endl;

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int month=0, year=0;
	cout << "Enter the year: \n";
	cin >> year;
	cout << "Enter the month: \n";
	cin >> month;
	{
		if (month == 2)
		{
			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			{
				cout << month << " month of year " << year << " has " << 29 << "days";
			}
			else
			{
				cout << month << " month of year " << year << " has " << 28 << "days";
			}
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
			|| month == 10 || month == 12)
		{
			cout << month << " month of year " << year << " has " << 31 << "days";
		}
		else
		{
			cout << month << " month of year " << year << " has " << 30 << "days";
		}
	}
}
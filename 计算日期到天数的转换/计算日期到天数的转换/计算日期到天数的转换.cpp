//输入年月日，输出日期是这一年的第多少天
#include<iostream>

class Date
{
public: static int iConverDateToDay(int year, int month, int day)
	{
		if (year > 1000 && month > 0 && month < 13 && day > 0 && day < 32)
		{
			int sum = 0;
			int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			if (year / 400 == 0 || (year % 4 == 0 && year / 100 != 0))
			{
				arr[2] = 29;
			}
			for (int i = 0; i < month; i++)
			{
				sum += arr[i];
			}
			sum = sum + day;
			return sum;
		}
		else
		{
			return -1;
		}
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	int year, month, day;
	while (std::cin >> year >> month >> day)
	{
		std::cout << Date::iConverDateToDay(year, month, day) << std::endl;
	}
	return 0;
}
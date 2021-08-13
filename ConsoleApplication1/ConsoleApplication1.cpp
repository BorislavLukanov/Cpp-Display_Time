#include <iostream>
#include <ctime>


int main()
{
	errno_t err;
	char str[100];
	struct tm tim;
	time_t t;
	t = time(NULL);
	localtime_s(&tim,&t);
	err = asctime_s(str, 100, &tim);
	std::cout << tim.tm_year + 1900 << std::endl;
	std::cout << str;
}
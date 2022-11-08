#include <iostream>

int main()
{
	int summ=0, count_min = 0, count = 0, num;

	while (summ < 50 && count_min < 5)
	{
		std::cout << "Enter numb\n";
		std::cin >> num;

		summ = summ +num;
		if (num < 0)
			count_min++;
		count++;
	}
	std::cout << "Wprowadzono " << count << " liczb.\n" << "Suma wprowadzonych liczb: " << summ;

	return 0;
}

#include <iostream>


int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

double Tip(double bill, double tipAmount, int people)
{
	std::cout << "***************" << std::endl;
	std::cout << "Total Bill ($" << bill << ") at a tip rate of (" << tipAmount <<
		") split between " << people << " people will result in each person paying $"
		<< "***************" << std::endl;


	return (bill * tipAmount) / people;
}
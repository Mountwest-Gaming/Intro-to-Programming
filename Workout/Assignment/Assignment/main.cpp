#include <iostream>
#include "math.h"

using namespace std;

int main()
{

	string name = "Cory";

	for (int i = 0; i < name.length(); i++)
	{
		cout << name[i] << endl;
	
	}

	cout << name << endl;

	name.append(" Michael Brown");

	cout << name;


	int n1 = 0, n2 = 0;

	cin >> n1;
	cin >> n2;

	cout << Add(n1, n2);

	return 0;
}
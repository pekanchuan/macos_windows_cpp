#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "primer/exercises.h"

using namespace std;

int main(int argc, char* argv[]) {

	int sum = 0, value = 0;

	while (cin >> value)
	{
		sum += value;
	}

	cout << "Sum is: " << sum << endl;

	return 0;
}

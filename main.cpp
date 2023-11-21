#include <cstddef>
using std::size_t;

#include <vector>
using std::vector;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include <cctype>
using std::isupper;
using std::toupper;
using std::islower;
using std::tolower;
using std::isalpha;
using std::isspace;

#include "primer/Sales_item.h"

int ia[] = { 0,1,2,3,4,5,6,7,8,9 };

int main(int argc, char* argv[]) {
	cout << sizeof(ia) << " " << sizeof(*ia) << endl;
	constexpr size_t sz = sizeof(ia) / sizeof(*ia);

	int arr2[sz];

	cout << "ia size: " << sz << endl;

	return 0;
}

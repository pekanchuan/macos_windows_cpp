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

int main(int argc, char* argv[]) {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    for (vector<int>::const_iterator it = v.begin();
         it != v.end();
         ++it)
        cout << *it << " ";
    cout << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << ", ";
    cout << endl;

    for (const auto&value: v)
        cout << value << "-";
    cout << endl;

    return 0;
}

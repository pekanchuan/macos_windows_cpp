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

#include <stdexcept>

using std::runtime_error;

#include "primer/Sales_item.h"
#include "primer/Sales_data.h"


int main(int argc, char *argv[]) {
    vector<int> ivec;
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto &r: v)
        r *= 2;

    for (int r: v)
        cout << r << " ";
    cout << endl;

    char letter = 'A';
    const char *p = &letter;
//    *p = 'B';
    p = nullptr;

    char * const cp = &letter;
    *cp = 'B';
//    cp = nullptr;

    return 0;
}

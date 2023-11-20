#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "primer/exercises.h"

using namespace std;

void exercise_1_3() {
    std::cout << "Hello, World" << std::endl;
}

void exercise_1_4() {
    cout << "Enter 2 numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
}

void exercise_1_5() {
    std::ostream &os = std::cout;
    os << "Hello, World";
    os << "!";
    os << endl;
}

int main(int argc, char* argv[]) {
    // string path = "primer/demo.txt";
    //
    // auto foo = readFileIntoVector(path);
    // for (const auto&text: foo) {
    //     cout << text << endl;
    // }


    return 0;
}

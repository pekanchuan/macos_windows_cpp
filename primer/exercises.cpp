//
// Created by Chia on 2023/11/20.
//

#include "exercises.h"

vector<string> readFileIntoVector(const string&path) {
    ifstream file(path);
    vector<string> lines;
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    }
    else {
        cerr << "Unable to open the file." << endl;
    }

    return lines;
}
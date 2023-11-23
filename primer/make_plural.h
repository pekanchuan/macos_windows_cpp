//
// Created by Chia on 2023/11/23.
//

#ifndef MAKE_PLURAL_H
#define MAKE_PLURAL_H

#include <cstddef>

using std::size_t;

#include <string>

using std::string;

#include <iostream>

using std::cout;
using std::cin;

inline
string make_plural(size_t ctr,
                   const string &word,
                   const string &ending) {
    return (ctr > 1) ? word + ending : word;
}


#endif //MAKE_PLURAL_H

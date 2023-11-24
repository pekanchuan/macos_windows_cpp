//
// Created by Chia on 2023/11/24.
//

#ifndef WINDOWMGR_H
#define WINDOWMGR_H

#include <vector>
#include <string>
#include <iostream>
#include "Screen.h"

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;

    ScreenIndex addScreen(const Screen &);

    void clear(ScreenIndex);

    void resize(Screen::pos r, Screen::pos c, ScreenIndex i);

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

#endif //WINDOWMGR_H

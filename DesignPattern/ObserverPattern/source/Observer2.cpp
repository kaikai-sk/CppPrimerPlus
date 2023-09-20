//
// Created by shand on 2023/9/19.
//

#include "../include/Observer2.h"
#include <iostream>

void Observer2::update(int state) {
    std::cout << "Observer2_" << m_strName << " get the update.New state is: "
    << state << std::endl;
}
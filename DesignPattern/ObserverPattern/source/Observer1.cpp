#include <string>
#include <iostream>
#include "../include/Observer.h"
#include "../include/Observer1.h"

Observer1::Observer1(const std::string &name) {
    this->m_strName = name;
}

void Observer1::update(int state) {
    std::cout << "Observer1_" << m_strName << " get the update.New state is: "
    << state << std::endl;
}
//
// Created by shand on 2023/9/20.
//
#include <cstring>
#include "../include/StringBad.h"
using std::cout;

// initializing static class member
int StringBad::num_strings = 0;

StringBad::StringBad(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

StringBad::StringBad() {
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
}

StringBad::~StringBad() {
    --num_strings;
    cout << num_strings << " objects left" << std::endl;
    delete[] str;
}

std::ostream & operator<<(std::ostream& os, const StringBad& st) {
    os << st.str;
    return os;
}


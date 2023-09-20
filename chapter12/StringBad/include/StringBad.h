//
// Created by shand on 2023/9/20.
//

#ifndef CPPPRIMERPLUS_STRINGBAD_H
#define CPPPRIMERPLUS_STRINGBAD_H

#include <iostream>

class StringBad {
private:
    char* str;
    int len;
    // number of objects.
    static int num_strings;
public:
    StringBad();
    StringBad(const char* s);
    ~StringBad();
    /**
     * frend function
     */
     friend std::ostream& operator <<(std::ostream& os, const StringBad& st);
};

#endif //CPPPRIMERPLUS_STRINGBAD_H

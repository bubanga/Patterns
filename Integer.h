#ifndef PATTERNS_INTEGER_H
#define PATTERNS_INTEGER_H
#include <iostream>

using namespace std;

class Integer {
private:
    int value;
public:
    Integer();
    void print(ostream &os) const;
};

ostream &operator<<(ostream &os, const Integer &integer);


#endif //PATTERNS_INTEGER_H

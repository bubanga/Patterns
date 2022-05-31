#include "Integer.h"

Integer::Integer() {
    value = rand() % 100;
}

void Integer::print(ostream &os) const {
    os << value;
}

ostream &operator<<(ostream &os, const Integer &integer) {
    integer.print(os);
    return os;
}
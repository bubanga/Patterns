#include <iostream>
#include "CyclicBuffer.h"
#include "Integer.h"

using namespace std;

int main() {
    srand(time(nullptr));
    CyclicBuffer<Integer> cyclicBuffer;
    cyclicBuffer.get();
    return 0;
}

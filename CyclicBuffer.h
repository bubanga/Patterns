#ifndef PATTERNS_CYCLICBUFFER_H
#define PATTERNS_CYCLICBUFFER_H
#include <iostream>
#include "Integer.h"

using namespace std;


template<typename T, int CAPACITY = 8>
class CyclicBuffer {
private:
    T buffer[CAPACITY];
    int p_read = 0; // index to read
    int p_write = 0; // index to write
    int count = 0; // number of elements
public:
    bool empty(); // check if empty
    bool full();  // check if full
    T get();           // get element from buffer (if not empty)
    void put(T value); // put value to buffer (if not full)
    void print() const; // print buffer
};


template class CyclicBuffer<Integer>;
template class CyclicBuffer<Integer, 10>;
#endif //PATTERNS_CYCLICBUFFER_H

#include "CyclicBuffer.h"

/*template<typename T, int CAPACITY>
CyclicBuffer<T, CAPACITY>::CyclicBuffer() {
    this->p_read = 0;
    this->p_write = 0;
    this->count = 0;
}*/

template<typename T, int CAPACITY>
bool CyclicBuffer<T, CAPACITY>::empty() {
    return this->count == 0;
}

template<typename T, int CAPACITY>
bool CyclicBuffer<T, CAPACITY>::full() {
    return this->count == CAPACITY-1;
}

template<typename T, int CAPACITY>
T CyclicBuffer<T, CAPACITY>::get() {
    int temp = this->p_read++;
    if (this->p_read == CAPACITY)
        this->p_read = 0;

    if (--this->count < 0)
        this->count = 0;

    return this->buffer[temp];
}

template<typename T, int CAPACITY>
void CyclicBuffer<T, CAPACITY>::put(T value) {
    int temp = this->p_write++;
    if (this->p_write == CAPACITY)
        this->p_write = 0;

    if (++this->count > CAPACITY-1)
        this->count = CAPACITY-1;

    this->buffer[temp] = value;
}

template<typename T, int CAPACITY>
void CyclicBuffer<T, CAPACITY>::print() const {
    for (int i = 0; i < this->count; ++i) {
        cout << this->buffer[i];
    }
}









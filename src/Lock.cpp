#include "../include/Lock.hpp"

#include <iostream>

Lock::Lock(std::mutex *mutex) : mutex(mutex) {
    this->mutex->lock();
    std::cout << "Mutex locked" << std::endl;
}

Lock::~Lock() {
    mutex->unlock();
    std::cout << "Mutex unlocked" << std::endl;
}
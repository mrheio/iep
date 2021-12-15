#include <memory>
#include <mutex>

#ifndef LOCK_H
#define LOCK_H

class Lock {
   private:
    Lock();
    Lock(const Lock &);
    Lock &operator=(const Lock &);
    std::mutex *mutex;

   public:
    Lock(std::mutex *mutex);
    ~Lock();
};
#endif
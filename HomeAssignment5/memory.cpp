
#include "memory.h"

double Memory :: getCapacity()
{
    return _capacity;
}


void Memory :: setCapacity(double newCapacity)
{
    _capacity = newCapacity;
}

std::string Memory :: getSpeed()
{
    return _speed;
}

void Memory :: setSpeed(std:: string& newSpeed)
{
    _speed = newSpeed;
}

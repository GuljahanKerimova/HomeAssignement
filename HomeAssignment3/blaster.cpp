

#include "blaster.h"  

class blaster {  
private:
    double _capacity;
    std::string _speed;

public:
    double getCapacity();
    void setCapacity(double newCapacity);
    std::string getSpeed();
    void setSpeed(std::string& newSpeed);
};

double blaster::getCapacity() {
    return _capacity;
}

void blaster::setCapacity(double newCapacity) {
    _capacity = newCapacity;
}

std::string blaster::getSpeed() {
    return _speed;
}

void blaster::setSpeed(std::string& newSpeed) {
    _speed = newSpeed;
}

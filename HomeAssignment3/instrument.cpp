

#include "instrument.h"

std::string Instrument::getName() const {
    return _name;
}

void Instrument::setName(const std::string& newName) {
    _name = newName;
}

int Instrument::getSize() const {
    return _size;
}

void Instrument::setSize(int newSize) {
    _size = newSize;
}

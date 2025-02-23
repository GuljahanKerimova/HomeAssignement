
#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <iostream>
#include <string>

class Instrument {
    private:
        std::string _name;
        int _size;

    public:
        std::string getName() const;

        void setName(const std::string& newName);

        int getSize() const;

        void setSize(int newSize);
};

#endif

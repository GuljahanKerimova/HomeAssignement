

#include "Transformers.h"
#ifndef PREDACON_H
#define PREDACON_H
#include <iostream>
#include <string>
class Predacon: public BaseTransformer
{
    private:
    std::string _beastForm;
    std::string _peaceful;

    public:
    //constructors
    Predacon();

    bool operator <(const Predacon& other) const;
    bool operator >(const Predacon& other) const;

    //constructor with parameter
    Predacon(std::string beast, std::string peace);

    //third con
    Predacon(std::string beast);


    std::string getBeastForm() const;
    void setBeastForm(std::string newBeastForm);
    std::string getPeaceful() const;
    void setPeaceful(std::string newPeaceful);
    void aboutRobot()  override;
};

std::ostream& operator<<(std::ostream& os, const Predacon& pcon);

 #endif


#include "predacon.h"

Predacon :: Predacon()
{

}

Predacon :: Predacon(std::string beast, std::string peace)
{
    _beastForm = beast;
    _peaceful= peace;
}

//third
Predacon::Predacon(std::string beast)
{
    _beastForm = beast;
}

//set method
void Predacon:: setBeastForm(std::string newBeastForm){
    _beastForm = newBeastForm;
}
void Predacon:: setPeaceful(std::string newPeaceful){
    _peaceful = newPeaceful;
}


//comparison

bool Predacon::operator <(const Predacon& other) const
{
    return _beastForm < other.getBeastForm();
}

bool Predacon::operator >(const Predacon& other) const
{
    return _peaceful > other.getPeaceful();
}
   
//get.set
std::string Predacon:: getBeastForm() const
{
    return _beastForm;
}

void setBeastForm(std::string newBeastForm);

std::string Predacon::getPeaceful() const
{
    return _peaceful;
}

void setPeaceful(std::string newPeaceful);

void Predacon :: aboutRobot()
{
    std::cout<<"BeastForm : "<<_beastForm<<"\n";
    std::cout<<"Peace : "<<_peaceful<<"\n";
}

std::ostream& operator<<(std::ostream& os, const Predacon& pcon)
{
    os << pcon.getBeastForm() << ' ';
    os << pcon.getPeaceful() << ' ';

    return os;
}

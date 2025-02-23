

#include "decepticon.h"

Decepticon::Decepticon()
{

}

Decepticon::Decepticon(std::string beast, std::string peace)
{
    _beastForm = beast;
    _peaceful = peace;
}
//3
Decepticon::Decepticon(std::string beast)
{
Decepticon(beast, "l");
}

//set method
void Decepticon::setBeastForm(std::string newBeastForm){
    _beastForm = newBeastForm;
}
void Decepticon::setPeaceful(std::string newPeaceful){
    _peaceful = newPeaceful;
}

//comparison
bool Decepticon::operator<(const Decepticon& other) const
{
    return _beastForm < other.getBeastForm();
}

bool Decepticon::operator>(const Decepticon& other) const
{
    return _peaceful > other.getPeaceful();
}

//get.set
std::string Decepticon::getBeastForm() const
{
    return _beastForm;
}

void Decepticon::setBeastForm(std::string newBeastForm); 

std::string Decepticon::getPeaceful() const
{
    return _peaceful;
}

void Decepticon::setPeaceful(std::string newPeaceful); 

void Decepticon::aboutRobot()
{
    std::cout<<"BeastForm : "<<_beastForm<<"\n";
    std::cout<<"Peace : "<<_peaceful<<"\n";
}

std::ostream& operator<<(std::ostream& os, const Decepticon& dcon)
{
    os << dcon.getBeastForm() << ' ';
    os << dcon.getPeaceful() << ' ';

    return os;
}

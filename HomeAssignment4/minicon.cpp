


#include "minicon.h"  
#include <string>

Minicon::Minicon()  
{
    miniconCounter++;  
}

Minicon::Minicon(std::string dinosaur, std::string dangerous)  
{
    _dinosaurForm = dinosaur; 
    _dangerous = dangerous;
}
//3
Minicon::Minicon(std::string dinosaur)  
{
Minicon(dinosaur,"k");  
}

// Set methods
void Minicon::setDinosaurForm(std::string newDinosaurForm)  
{
    _dinosaurForm = newDinosaurForm;
}

void Minicon::setDangerous(std::string newDangerous)  
{
    _dangerous = newDangerous;
}

// Operation for comparison
bool Minicon::operator <(const Minicon& other) const  
{
    return _dinosaurForm < other.getDinosaurForm();
}

bool Minicon::operator >(const Minicon& other) const  
{
    return _dangerous > other.getDangerous();
}

std::string Minicon::getDinosaurForm() const  
{
    return _dinosaurForm;
}

std::string Minicon::getDangerous() const  
{
    return _dangerous;
}

void Minicon::aboutRobot()  
{
    std::cout << "dinosaur " << _dinosaurForm << "\n";
    std::cout << "dangerous : " << _dangerous << "\n";
}

// Output stream operator
std::ostream& operator<<(std::ostream& os, const Minicon& dino)  
{
    os << dino.getDinosaurForm() << ' ';
    os << dino.getDangerous() << ' ';

    return os;
}

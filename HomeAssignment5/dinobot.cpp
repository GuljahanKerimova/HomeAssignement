

#include "dinobot.h"
#include <string>


Dinobot::Dinobot(){
    
}
Dinobot :: Dinobot(std::string dinosaur, std::string dangerous)
{
    _dinosaurForm = dinosaur; 
    _dangerous = dangerous;
}
//third con
Dinobot::Dinobot(std::string dinosaur)
{
    _dinosaurForm = dinosaur;
}

//virtual
void Dinobot::transform() {
    std::cout << "Method 'transform' of class 'Dinobot'\n";
    std::cout << "TRANSFORMING OF Dinobot\n\n";
}

void Dinobot::openFire() {
    std::cout << "Method 'openFire' of class 'Dinobot'\n";
    std::cout << "Dinobot go \n\n";
}

void Dinobot::ulta() {
    std::cout << "Method 'ulta' of class 'Dinobot'\n";
    std::cout << "MEGA ULTA OF Dinobot \n\n";
}

//set methods
void Dinobot:: setDinosaurForm(std::string newDinosaurForm){
    _dinosaurForm = newDinosaurForm;
}
void Dinobot:: setDangerous(std::string newDangerous){
    _dangerous = newDangerous;
}


//operation for comparison
bool Dinobot::operator <(const Dinobot& other) const
{
    return _dinosaurForm < other.getDinosaurForm();
}

bool Dinobot::operator >(const Dinobot& other) const
{
    return _dangerous > other.getDangerous();
}

std::string Dinobot :: getDinosaurForm() const
{
    return _dinosaurForm;
}

//void  setDinosaurForm(std::string newDinosaurForm);

std::string Dinobot :: getDangerous() const
{
    return _dangerous;
}

void Dinobot :: aboutRobot()
{
    std::cout<<"dinosaur "<<_dinosaurForm<<"\n";
    std::cout<<"dangerous : "<<_dangerous<<"\n";
}

//os
std::ostream& operator<<(std::ostream& os, const Dinobot& dino)
{
    os << dino.getDinosaurForm() << ' ';
    os << dino.getDangerous() << ' ';

    return os;
}

    
    

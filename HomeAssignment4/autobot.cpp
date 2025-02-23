
#include "autobot.h"
#include <string>

//+1 when an object is created
    
//constructor

Autobot::Autobot(std::string moral, std::string vehicle)
{
    _moralAlignment = moral;
    _groundVehicle= vehicle;
}

Autobot::Autobot()
{
    autobotCounter++;
}

Autobot::Autobot(std::string  moral){
    Autobot(moral, "m");
	}
//comparison operators
bool Autobot::operator<(const Autobot& other) const
{
    return _moralAlignment < other.getMoralAlignemt();
}
bool Autobot::operator>(const Autobot& other) const
{
    return _groundVehicle > other.getGroundVehicle();
}
  
//get/set
std::string Autobot :: getMoralAlignemt() const
{
    return _moralAlignment;
}
void Autobot::setMoralAlignmet(std::string newMoralAlignment){
    _moralAlignment = newMoralAlignment;
};

std::string Autobot :: getGroundVehicle() const
{
    return _groundVehicle;
}
void setGroundVehicle(std::string newGroundVehicle);

//information about the transformer
void Autobot :: aboutRobot()
{
    std::cout<<"MoralAlignement : "<<_moralAlignment<<"\n";
    std::cout<<"groundVehicle : "<<_groundVehicle<<"\n";
}

std::ostream& operator<<(std::ostream& os,const Autobot& abot)
{
    os << abot.getMoralAlignemt() << ' ';
    os << abot.getGroundVehicle() <<' ';

    return os;
} 

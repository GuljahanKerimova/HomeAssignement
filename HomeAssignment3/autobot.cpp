

#include "autobot.h"
#include <string>

  //+1 when an object is created
    
//constructor

Autobot::Autobot(std::string moral, std::string vehicle){
    _moralAlignment = moral;
    _groundVehicle= vehicle;
}

Autobot::Autobot(){
        autobotCounter++;
    }

std::string Autobot :: getMoralAlignemt() const{
        return _moralAlignment;
    }
    void setMoralAlignmet(std::string newMoralAlignment);

    std::string Autobot :: getGroundVehicle() const{
        return _groundVehicle;
    }
    void setGroundVehicle(std::string newGroundVehicle);

//information about the transformer
void Autobot :: aboutRobot() {
    std::cout<<"MoralAlignement : "<<_moralAlignment<<"\n";
    std::cout<<"groundVehicle : "<<_groundVehicle<<"\n";
}

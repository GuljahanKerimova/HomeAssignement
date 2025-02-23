

#include "Transformers.h"
#ifndef AUTOBOT_H
#define AUTOBOT_H
#include <iostream>
#include <string>

class Autobot : public BaseTransformer{
    private:
        std::string _moralAlignment;
        std::string _groundVehicle;
    
    public:
    static int  autobotCounter;
    //constructor
    Autobot();
    //constructor with parameter
    Autobot(std::string moral, std::string vehicle);



    std::string getMoralAlignemt() const;
    void setMoralAlignmet(std::string newMoralAlignment);

   std:: string getGroundVehicle() const;
    void setGroundVehicle(std::string newGroundVehicle);
    void aboutRobot()  override;
    
 };
#endif

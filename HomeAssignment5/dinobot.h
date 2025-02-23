

#include "Transformers.h"
#ifndef DINOBOT_H
#define DINOBOT_H
#include <iostream>
#include <string>


class Dinobot : public BaseTransformer
{
    private:
    std::string _dinosaurForm;
    std::string _dangerous;

    public:

    void transform() override;
    void openFire() override;
    void ulta() override;

    //+1 when an object is created
    static  int  dinobotCounter;

    //Default constructor
    Dinobot();

    //constructor with parameter
    Dinobot(std::string dinosaur, std::string dangerous);

    //third
    Dinobot(std::string dinosaur);


    //comparison
    bool operator <(const Dinobot& other) const;
    bool operator >(const Dinobot& other) const;

    std::string getDinosaurForm() const;
    void setDinosaurForm(std::string newDinosaurForm);
    std::string getDangerous() const;
    void setDangerous(std::string newDangerous);
    void aboutRobot()  override;

};

std::ostream& operator<<(std::ostream& os, const Dinobot& dino);
    
 #endif

 

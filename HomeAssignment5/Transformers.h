


#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H

#include "weapon.h"
#include "memory.h"
#include <string>

class BaseTransformer
{
    private:
    std::string _name;
    std::string _brand;
    std::string _colour;
    std::string _shape;
    int _height;
    Memory *_memory;
    Weapon _weapon;

    public:
    //default constructor.
    BaseTransformer();
    //constructor
    BaseTransformer(std::string _name, std::string _brand, std::string _colour, std::string _shape, int _height, Memory _memory );

    //third
    BaseTransformer(int height);
    
    //destructor
    //~BaseTransformer();

    //information about the transformer
    virtual void  aboutRobot();

    //comparison
    bool operator <(const BaseTransformer& other) const;
    bool operator >(const BaseTransformer& other) const;

    //virtual
    virtual void transform();
    virtual void openFire();
    virtual void ulta();


    //get method set method and validation
    std::string getName() const;
    void setName( const std::string& newName);
    bool isValidName() const;

    //brand
    std::string getBrand();
    void setBrand(std::string newBrand);
    bool isValidBrand() const;
    //colour
    std:: string getColour();
    void setColour(std::string newColour);
    bool isValidColour() const;
    //shape
    std::string getShape();
    void setShape(std::string newShape);
    bool isValidShape() const;
    //height
    int getHeight();
    void setHeight(int newHeight);
    bool isValidHeight() const;

};
std::ostream& operator<<(std::ostream& os, const BaseTransformer& trans);

#endif

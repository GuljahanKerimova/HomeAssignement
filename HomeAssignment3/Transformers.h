#ifndef TRANSFORMERS_H
#define TRANSFORMERS_H

#include "instrument.h" 
#include "blaster.h"    
#include <string>

class BaseTransformer {
private: 
    std::string _name;
    std::string _brand;
    std::string _colour;
    std::string _shape;
    int _height;
    Blaster *_blaster; 
    Instrument _instrument; 

public:
    // Default constructor
    BaseTransformer();
    
    // Constructor
    BaseTransformer(std::string _name, std::string _brand, std::string _colour, 
                    std::string _shape, int _height, Blaster _blaster); 
    
    // Destructor
    ~BaseTransformer();

    // Information about the transformer
    virtual void aboutRobot();

    // Get method, set method, and validation
    std::string getName() const;
    void setName(const std::string& newName);
    bool isValidName() const;

    // Brand
    std::string getBrand();
    void setBrand(std::string newBrand);
    bool isValidBrand() const;

    // Colour
    std::string getColour();
    void setColour(std::string newColour);
    bool isValidColour() const;

    // Shape
    std::string getShape();
    void setShape(std::string newShape);
    bool isValidShape() const;

    // Height
    int getHeight();
    void setHeight(int newHeight);
    bool isValidHeight() const;
};

#endif

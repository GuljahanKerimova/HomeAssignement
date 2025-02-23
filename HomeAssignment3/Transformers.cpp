#include "Transformers.h"
#include "instrument.h" 
#include <string>
#include <iostream> 

// Constructor
BaseTransformer::BaseTransformer() {}

BaseTransformer::BaseTransformer(std::string name, std::string brand, std::string colour,
                                  std::string shape, int height, Blaster blaster) { 
    _name = name;
    _brand = brand;
    _colour = colour;
    _shape = shape;
    _height = height;
    _instrument = Instrument(); 
    *_blaster = blaster; 
}

// Destructor
BaseTransformer::~BaseTransformer() {
    std::cout << "Destructor clears " << std::endl;
}

// Information about the transformer
void BaseTransformer::aboutRobot() {
    std::cout << "Information about " << _name << "\n";
    std::cout << "Brand : " << _brand << "\n";
    std::cout << "Colour : " << _colour << "\n";
    std::cout << "Shape : " << _shape << "\n";
    std::cout << "Height :" << _height << "\n";
}

// Get method, set method, and validation
std::string BaseTransformer::getName() const {
    return _name;
}

void BaseTransformer::setName(const std::string& newName) {
    _name = newName;
}

bool BaseTransformer::isValidName() const {
    return !_name.empty();
}

// Brand
std::string BaseTransformer::getBrand() {
    return _brand;
}

void BaseTransformer::setBrand(std::string newBrand) {
    _brand = newBrand;
}

bool BaseTransformer::isValidBrand() const {
    return !_brand.empty();
}

// Colour
std::string BaseTransformer::getColour() {
    return _colour;
}

void BaseTransformer::setColour(std::string newColour) {
    _colour = newColour;
}

bool BaseTransformer::isValidColour() const {
    return !_colour.empty();
}

// Shape
std::string BaseTransformer::getShape() {
    return _shape;
}

void BaseTransformer::setShape(std::string newShape) {
    _shape = newShape; // Added implementation for setShape
}

bool BaseTransformer::isValidShape() const {
    return !_shape.empty();
}

// Height
int BaseTransformer::getHeight() {
    return _height;
}

void BaseTransformer::setHeight(int newHeight) {
    _height = newHeight;
}

bool BaseTransformer::isValidHeight() const {
    return _height > 0; // Fixed the validation logic
}


#include "Transformers.h"
#ifndef MINICON_H  
#define MINICON_H
#include <iostream>
#include <string>

class Minicon : public BaseTransformer  
{
    private:
    std::string _dinosaurForm;
    std::string _dangerous;

    public:
    //+1 when an object is created
    static int miniconCounter;  

    //constructor
    Minicon();  

    //constructor with parameters
    Minicon(std::string dinosaur, std::string dangerous); 
	//3  
	Minicon(std::string dinosaur);
	
    //comparison operators
    bool operator<(const Minicon& other) const;  
    bool operator>(const Minicon& other) const;  

    //get/set methods
    std::string getDinosaurForm() const;  
    void setDinosaurForm(std::string newDinosaurForm);  
    std::string getDangerous() const;  
    void setDangerous(std::string newDangerous);  

    //information about the transformer
    void aboutRobot() override;  
};

std::ostream& operator<<(std::ostream& os, const Minicon& dino);  

#endif



#include "Transformers.h"
#ifndef MINICON_H
#define MINICON_H
#include <iostream>
#include <string>

class Minicon : public BaseTransformer {
private:
    std::string _blasterForm;  
    std::string _instrument;    

public:
    // +1 when an object is created
    static int miniconCounter;  

    // Constructor
    Minicon();

    // Constructor with parameters
    Minicon(std::string blaster, std::string instrument);  

    std::string getBlasterForm() const;  
    void setBlasterForm(std::string newBlasterForm);  

    std::string getInstrument() const;  
    void setInstrument(std::string newInstrument);  

    void aboutRobot() override;  
};

#endif

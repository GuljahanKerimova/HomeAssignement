

#include "Transformers.h"
#ifndef DECEPTICON_H  
#define DECEPTICON_H
#include <iostream>
#include <string>

class Decepticon : public BaseTransformer { 
private:
    std::string _beastForm;
    std::string _peaceful;

public:
    // Constructors
    Decepticon();  
    Decepticon(std::string beast, std::string peace);  
    std::string getBeastForm() const;
    void setDinosaurForm(std::string newBeastForm);

    std::string getPeaceful() const;
    void setPeaceful(std::string newPeaceful);
    void aboutRobot() override;  
};

#endif  // 

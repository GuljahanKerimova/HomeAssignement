

#include "Transformers.h"
#ifndef DECEPTICON_H  
#define DECEPTICON_H
#include <iostream>
#include <string>

class Decepticon : public BaseTransformer  
{
    private:
    std::string _beastForm;
    std::string _peaceful;

    public:
    //constructors
    Decepticon();  

    bool operator <(const Decepticon& other) const;  
    bool operator >(const Decepticon& other) const;  

    Decepticon(std::string beast, std::string peace);  
	//3
	Decepticon(std::string beast);
	
    std::string getBeastForm() const;

    void setBeastForm(std::string newBeastForm);
    std::string getPeaceful() const;
    void setPeaceful(std::string newPeaceful);
    void aboutRobot() override;  
};

std::ostream& operator<<(std::ostream& os, const Decepticon& dcon);  

#endif

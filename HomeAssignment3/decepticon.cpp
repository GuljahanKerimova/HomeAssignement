
#include "decepticon.h"  

Decepticon::Decepticon() {}  
Decepticon::Decepticon(std::string beast, std::string peace) {
    _beastForm = beast;
    _peaceful = peace;
}

std::string Decepticon::getBeastForm() const {
    return _beastForm;
}

void Decepticon::setDinosaurForm(std::string newBeastForm) {
    _beastForm = newBeastForm;  // Assuming you want to set the new beast form
}

std::string Decepticon::getPeaceful() const {
    return _peaceful;
}

void Decepticon::setPeaceful(std::string newPeaceful) {
    _peaceful = newPeaceful;  // Assuming you want to set the new peaceful state
}

void Decepticon::aboutRobot() {
    std::cout << "BeastForm : " << _beastForm << "\n";
    std::cout << "Peace : " << _peaceful << "\n";
}

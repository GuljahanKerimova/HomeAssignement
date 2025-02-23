

#include "minicon.h"
#include <string>

Minicon::Minicon() {
    miniconCounter++;
}

Minicon::Minicon(std::string blaster, std::string instrument) {
    _blasterForm = blaster;
    _instrument = instrument;
}

std::string Minicon::getBlasterForm() const {
    return _blasterForm;
}

// void setBlasterForm(std::string newBlasterForm);

std::string Minicon::getInstrument() const {
    return _instrument;
}

void Minicon::aboutRobot() {
    std::cout << "blaster " << _blasterForm << "\n";
    std::cout << "instrument: " << _instrument << "\n";
}

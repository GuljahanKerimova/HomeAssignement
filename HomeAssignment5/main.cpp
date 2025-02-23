
#include "Transformers.h"
#include "autobot.h"
#include "dinobot.h"
#include "predacon.h"
#include <vector>
#include <variant>
#include <memory>

int main() {
    Autobot a;
    a.transform();

    Dinobot enemy;
    Dinobot* b = &enemy;
    b->openFire();
    
    using VarType = std::variant<std::shared_ptr<BaseTransformer>, std::shared_ptr<Autobot>, std::shared_ptr<Dinobot>>;
    
    std::vector<VarType> arr;
    
    for (int i = 0; i < 3; ++i) {
        BaseTransformer t;
        arr.emplace_back(std::make_shared<BaseTransformer>(t));
    }
    for (int i = 0; i < 3; ++i) {
       Autobot a;
        arr.emplace_back(std::make_shared<Autobot>(a));
    }
    for (int i = 0; i < 3; ++i) {
        Dinobot d;
        arr.emplace_back(std::make_shared<Dinobot>(d));
    }

    std::cout << "\nTesting vector of pointers...\n";

    for (auto& item : arr) {
        std:visit([](const auto& ptr) {
            ptr->transform();
            ptr->openFire();
            ptr->ulta();

            std::cout << '\n';
        }, item);
    }
    return 0;
}

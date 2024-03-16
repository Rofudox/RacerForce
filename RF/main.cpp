#include "printing.h"
#include <iostream>
#include <vector>

int main() {

    Button MB("MainB");
    std::cout << MB.get_button();
    //std::cout << MB.get_movement();
    std::vector<int> movements = MB.get_movement();
    for (int movement : movements) {
        std::cout << movement << " ";
    }
    std::cout << movements.size();
}

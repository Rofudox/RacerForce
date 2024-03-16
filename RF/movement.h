#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <vector>
#include <string>
class Movement {
std::vector<int> direction = {1,2,3,4,5,6,7,8};
switch (direction) {
    case 1:
        std::cout << "Move 1";
    case 2:
        std::cout << "Move 2";
    case 3:
        std::cout << "Move 3";
    case 4:
        std::cout << "Move 4";
    case 5:
        std::cout << "Move 5";
    case 6:
        std::cout << "Move 6";    
    case 7:
        std::cout << "Move 7";
    case 8:
        std::cout << "Move 8";
    default:
        std::cout << "Waiting for movement";
        break;
}
}


#endif
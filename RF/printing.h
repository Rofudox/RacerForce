#ifndef PRINTING_H
#define PRINTING_H

#include <string>
#include <vector>
class Button {
    std::string button;
    std::vector<int> movement;
    static std::vector<int> movements;
    public:
        Button(std::string new_button, std::vector<int> curr_movement = {});
        std::string get_button();
        std::vector<int> get_movement();
     
};

#endif
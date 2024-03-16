#include "printing.h"
std::vector<int> Button::movements = {1, 2, 3, 4, 5, 6};

Button::Button(std::string new_button, std::vector<int> curr_movement) 
    : button(new_button), movement(curr_movement) {}
    std::string Button::get_button() {
        return button;
    }
    std::vector<int> Button::get_movement() {
        return movement;
    }

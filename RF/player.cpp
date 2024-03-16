#include "movement.h"
#include <string>

class Player {
    
    struct {
        string player_name;
        string Car;
        int sips;
        int posistion;
        int gear;
        bool on_track;
        bool flipped;
        bool broken;
        float damaged;
    }


}
//TODO

/*
Make attributes:
    Playername
    Car
    Current sips
    Posistion
    N of dice (gear)
    Is player on track
    Car flipped?
    Car broken?
    Car damaged?

Player movement:
    On players turn:
        Correct prev player if mistakes were made
        if false correction, take sips.
        Roll dice
        Choose next field
        Choose stopping field
        Announce sips
        Place dice in cup
        End turn
*/


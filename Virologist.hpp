#include <iostream>
#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class Virologist: public Player{

        public:
            Virologist(Board board, City city) : Player(board, city) {}

    };
    
}

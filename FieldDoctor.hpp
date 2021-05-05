#include <iostream>
#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class FieldDoctor: public Player{

        public:
            FieldDoctor(Board board, City city) : Player(board, city) {}

    };
    
}

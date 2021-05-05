#include <iostream>
#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class GeneSplicer: public Player{

        public:
            GeneSplicer(Board board, City city) : Player(board, city) {}

    };
    
}

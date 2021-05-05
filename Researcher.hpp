#include <iostream>
#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class Researcher: public Player{

        public:
            Researcher(Board board, City city) : Player(board, city) {}

    };
    
}

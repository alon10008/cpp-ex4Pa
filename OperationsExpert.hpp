#include <iostream>
#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class OperationsExpert: public Player{

        public:
            OperationsExpert(Board board, City city) : Player(board, city) {}

    };
    
}

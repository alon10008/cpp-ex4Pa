#include <iostream>
#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class Scientist: public Player{

        public:
            Scientist(Board board, City city) : Player(board, city) {}
            Scientist(Board board, City city, int n) : Player(board, city) , n(n) {}
            int n;

    };
    
}

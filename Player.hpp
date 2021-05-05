#include <iostream>
#include <string>
#include "Board.hpp"
#include "City.hpp"

#ifndef PLAYER
#define PLAYER

using namespace std;

namespace pandemic {

    class Player{

        public:

            Player(Board board, City city)
            {
                this->board = board;
                this->city = city;
            }
            Player(){}
            Player drive(City city);
            Player fly_direct(City city);
            Player fly_charter(City city);
            Player fly_shuttle(City city);
            void build();
            void discover_cure(Color color);
            Player treat(City city);
            Player take_card(City city);
            int role();

        private:

            Board board;
            City city;

    };
    
}

#endif

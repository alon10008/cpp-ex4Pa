#include <iostream>
#include <string>
#include <map>
#include <string>
#include <fstream>
#include "City.hpp"
#include "Color.hpp"

#ifndef BOARD
#define BOARD

using namespace std;
using namespace pandemic;

namespace pandemic{

   class Board {

        public:
            Board(){}
            map<City, int> cities;
            int& operator[](City city);
            friend ostream& operator<<(ostream& os, Board board);
            bool is_clean();
            void remove_cures();
        private:
       
   };

}
#endif
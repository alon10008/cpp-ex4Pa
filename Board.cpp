#include "Board.hpp"
#include <stdexcept>
#include <string>
#include "Color.hpp"
#include "City.hpp"
#include <map>

using namespace std;
using namespace pandemic;

int& pandemic::Board::operator[](City city) {

    return this->cities[city];

}
ostream& pandemic::operator<<(ostream& os, Board board) {

    return os;

}
bool pandemic::Board::is_clean() {

    return true;

}
void pandemic::Board::remove_cures() {

    

}




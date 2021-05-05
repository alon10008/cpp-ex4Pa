#include <iostream>
#include "doctest.h"

#include "Board.hpp"
#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"

#include "Medic.hpp"
#include "OperationsExpert.hpp"
#include "Researcher.hpp"
#include "Dispatcher.hpp"
#include "Scientist.hpp"
#include "Virologist.hpp"
#include "GeneSplicer.hpp"
#include "FieldDoctor.hpp"

using namespace std;
using namespace pandemic;

TEST_CASE("Something") {

    Board board;
    CHECK(board.is_clean());
    CHECK_NOTHROW(board[City::Algiers] = 8);
    CHECK_NOTHROW(board[City::Chennai] = 4);
    CHECK_NOTHROW(board[City::LosAngeles] = 1);
    CHECK_NOTHROW(board[City::Moscow] = 0);
    CHECK_THROWS(board[City::Mumbai] = -1);
    CHECK_THROWS(board[City::Osaka] = -8);
    CHECK_FALSE(board.is_clean());
    OperationsExpert oe(board, City::Seoul);
    CHECK_NOTHROW(oe.take_card(City::Shanghai).take_card(City::Taipei).take_card(City::Cairo).take_card(City::Istanbul).take_card(City::Lagos));
    CHECK_NOTHROW(oe.build());
    CHECK_THROWS(oe.drive(City::Sydney));
    Researcher r(board, City::StPetersburg);
    CHECK_NOTHROW(r.take_card(City::Shanghai).take_card(City::Sydney).take_card(City::Tehran).take_card(City::Washington).take_card(City::StPetersburg));
    CHECK_NOTHROW(r.discover_cure(Color::Red));
    Dispatcher d(board, City::Seoul);
    CHECK_NOTHROW(d.take_card(City::Beijing).take_card(City::Chennai).take_card(City::Jakarta).take_card(City::Lima).take_card(City::Paris));
    CHECK_NOTHROW(d.fly_direct(City::Taipei));
    Scientist s(board, City::SanFrancisco, 4);
    CHECK_NOTHROW(s.take_card(City::Riyadh).take_card(City::Mumbai).take_card(City::HongKong).take_card(City::Essen));
    CHECK_NOTHROW(s.discover_cure(Color::Red));
    Medic m(board, City::Bogota);
    CHECK_NOTHROW(m.take_card(City::Bangkok).take_card(City::Baghdad).take_card(City::Algiers).take_card(City::Atlanta).take_card(City::HoChiMinhCity));
    CHECK_NOTHROW(m.discover_cure(Color::Black));
    CHECK(board[City::Bogota] == 0);
    Virologist v(board, City::Jakarta);
    CHECK_NOTHROW(v.take_card(City::Shanghai).take_card(City::Taipei).take_card(City::Cairo).take_card(City::Istanbul).take_card(City::Lagos));
    CHECK_NOTHROW(v.build());
    GeneSplicer gs(board, City::London);
    CHECK_NOTHROW(gs.take_card(City::Shanghai).take_card(City::Taipei).take_card(City::Cairo).take_card(City::Istanbul).take_card(City::Lagos));
    CHECK_THROWS(gs.fly_charter(City::HoChiMinhCity));
    FieldDoctor fd(board, City::Delhi);
    CHECK_NOTHROW(fd.take_card(City::Shanghai).take_card(City::Taipei).take_card(City::Cairo).take_card(City::Istanbul).take_card(City::Lagos));
    CHECK_THROWS(fd.fly_shuttle(City::Tehran));


    



    
    

}

#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;
using namespace pandemic;

Player pandemic::Player::drive(City city){return *this;}
Player pandemic::Player::fly_direct(City city){return *this;}
Player pandemic::Player::fly_charter(City city){return *this;}
Player pandemic::Player::fly_shuttle(City city){return *this;}
void pandemic::Player::build(){}
void pandemic::Player::discover_cure(Color color){}
Player pandemic::Player::treat(City city){return *this;}
Player pandemic::Player::take_card(City city){return *this;}
int pandemic::Player::role(){return 4;}



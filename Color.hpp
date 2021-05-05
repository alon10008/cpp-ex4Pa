#include <iostream>
#include <map>
#include <string>

using namespace std;

#ifndef COLOR
#define COLOR

namespace pandemic{

    class Color{

        public:

            Color(){}
            static map<string, Color> colors;
            static Color Yellow;
            static Color Black;
            static Color Red;
            static Color Blue;
        

    };

}

#endif
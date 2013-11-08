#ifndef POSITION_H
#define POSITION_H

#ifndef STRING_L
#define STRING_L
#include <string>
#include <sstream>
#endif

class Position
{
    int x;
    int y;
public:
    Position();
    Position(int x, int y);
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);

    std::string toString();
};

#endif // POSITION_H

#ifndef HITBOX_H
#define HITBOX_H
#include "position.h"

#ifndef STRING_L
#define STRING_L
#include <string>
#include <sstream>
#endif

class HitBox
{
    Position topLeft;
    Position topRight;
    Position botLeft;
    Position botRight;

public:
    HitBox();
    HitBox(Position _topLeft, Position _topRight, Position _botLeft, Position _botRight);
    Position getTopLeft() const;
    void setTopLeft(const Position &value);
    Position getTopRight() const;
    void setTopRight(const Position &value);
    Position getBotLeft() const;
    void setBotLeft(const Position &value);
    Position getBotRight() const;
    void setBotRight(const Position &value);

    std::string toString();
};

#endif // HITBOX_H

#include "position.h"

int Position::getX() const
{
    return x;
}

void Position::setX(int value)
{
    x = value;
}

int Position::getY() const
{
    return y;
}

void Position::setY(int value)
{
    y = value;
}

Position::Position()
{
    x = 0;
    y = 0;
}

Position::Position(int _x, int _y)
{
    x = _x;
    y = _y;
}

std::string Position::toString()
{
    std::stringstream ss;
    ss << "X position : ";
    ss << getX();
    ss << "\nY position : ";
    ss << getY();
    return ss.str();
}

#include "hitbox.h"


Position HitBox::getTopLeft() const
{
    return topLeft;
}

void HitBox::setTopLeft(const Position &value)
{
    topLeft = value;
}

Position HitBox::getTopRight() const
{
    return topRight;
}

void HitBox::setTopRight(const Position &value)
{
    topRight = value;
}

Position HitBox::getBotLeft() const
{
    return botLeft;
}

void HitBox::setBotLeft(const Position &value)
{
    botLeft = value;
}

Position HitBox::getBotRight() const
{
    return botRight;
}

void HitBox::setBotRight(const Position &value)
{
    botRight = value;
}

HitBox::HitBox()
{
    topLeft = Position(0,0);
    topRight = Position(0,0);
    botLeft = Position(0,0);
    botRight = Position(0,0);
}

HitBox::HitBox(Position _topLeft, Position _topRight, Position _botLeft, Position _botRight)
{
    topLeft = _topLeft;
    topRight = _topRight;
    botLeft = _botLeft;
    botRight = _botRight;
}

std::string HitBox::toString()
{
    std::string result = "";
    result.append("Top left : ");
    result.append(getTopLeft().toString());
    result.append("\nTop right : ");
    result.append(getTopRight().toString());
    result.append("\nBottom left : ");
    result.append(getBotLeft().toString());
    result.append("\nBottom right : ");
    result.append(getBotRight().toString());

    return result;
}

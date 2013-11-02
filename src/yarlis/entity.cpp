#include "entity.h"


bool Entity::isBulletProof() const
{
    return bulletProof;
}

void Entity::setBulletProof(bool value)
{
    bulletProof = value;
}

double Entity::getHp() const
{
    return hp;
}

void Entity::setHp(double value)
{
    hp = value;
}

Position Entity::getPosition() const
{
    return position;
}

void Entity::setPosition(const Position &value)
{
    position = value;
}

HitBox Entity::getHitbox() const
{
    return hitbox;
}

void Entity::setHitbox(const HitBox &value)
{
    hitbox = value;
}

std::string Entity::getName() const
{
    return name;
}

void Entity::setName(const std::string &value)
{
    name = value;
}

Entity::Entity()
{
    bulletProof = false;
    hp = 0;
    position = Position(0,0);
    name = "Default_entity";
}

std::string Entity::toPrettyString(){
    std::stringstream ss;
    ss << "isBulletProof : ";
    ss << isBulletProof();
    ss << "\nHP : ";
    ss << getHp();
    ss << "\nPosition : ";
    ss << getPosition().toString();
    ss << "\nHitBox : ";
    ss << getHitbox().toString();
    ss << "\nName : ";
    ss << getName();
    return ss.str();
}

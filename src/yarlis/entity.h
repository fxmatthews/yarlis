#ifndef ENTITY_H
#define ENTITY_H

#ifndef STRING_L
#define STRING_L
#include <string>
#include <sstream>
#endif

#include "position.h"
#include "hitbox.h"

class Entity
{
    bool bulletProof;
    double hp;
    Position position;
    HitBox hitbox;
    std::string name;

public:
    virtual void getDamage(double damages) = 0;
    virtual bool isDestroyed();

    // basic operations
    Entity();
    bool isBulletProof() const;
    void setBulletProof(bool value);
    double getHp() const;
    void setHp(double value);
    Position getPosition() const;
    void setPosition(const Position &value);
    HitBox getHitbox() const;
    void setHitbox(const HitBox &value);
    std::string getName() const;
    void setName(const std::string &value);

    std::string toPrettyString();
};

#endif // ENTITY_H

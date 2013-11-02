#ifndef TAKEABLE_H
#define TAKEABLE_H

#ifndef OBJECT_DEF
#define OBJECT_DEF
#include "object.h"
#endif

class Takeable
{
public:
    Takeable();
    virtual void take();
};

#endif // TAKEABLE_H

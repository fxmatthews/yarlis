#include <QCoreApplication>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "entities/position.h"
#include "entities/hitbox.h"
#include "entities/player.h"

using namespace std;

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

//    return a.exec();
//    Entity e;
    Position p;
    const HitBox h (Position(2,3), Position(3,4), Position(10,23), Position(5,6));
    Player pl;
    cout << pl.display();
//    p.setX(2);
//    p.setY(3);
//    e.setBulletProof(true);
//    e.setHp(100.);
//    e.setName("Test");
//    e.setPosition(p);
//    e.setHitbox(h);
//    cout << e.toPrettyString() << endl;

    return 1;
}

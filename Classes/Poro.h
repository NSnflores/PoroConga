#ifndef Poro_h
#define Poro_h

#include "cocos2d.h"
#include "Utils.h"
#include "PoroGrid.h"

USING_NS_CC;
using namespace Utils;

class Poro
{
public:
    void move(Direction direction);
    Poro(GridPosition initialPosition);
    Direction previousDirection = Direction::None;
    
private:
    GridPosition position;
    void updatePosition();
    void normalizePosition();
    Sprite* sprite;
};

#endif /* Poro_h */

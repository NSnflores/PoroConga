#ifndef Utils_h
#define Utils_h

#include "cocos2d.h"

USING_NS_CC;

namespace Utils
{
    enum Direction
    {
        Right,
        Left,
        Up,
        Down,
        None
    };

    struct GridPosition
    {
        int x;
        int y;
    };

    static Size GetVisibleSize() { return Director::getInstance()->getVisibleSize();}
    static Vec2 GetVisibleOrigin() { return Director::getInstance()->getVisibleOrigin();}
}
#endif /* Utils_h */

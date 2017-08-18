#ifndef PoroGrid_h
#define PoroGrid_h

#include "cocos2d.h"
#include "Utils.h"

USING_NS_CC;

class PoroGrid;
static PoroGrid* poroGridInstance;

class PoroGrid
{
public:
    static void init(int width, int height);
    static PoroGrid* getInstance();
    
    int getHeight();
    int getWidth();
    
private:
    int width;
    int height;
    void drawGrid(Node* parent);
    PoroGrid(int width, int height);
    PoroGrid();
};

#endif /* PoroGrid_h */

#include "PoroGrid.h"

PoroGrid* PoroGrid::getInstance() { return poroGridInstance;}

int PoroGrid::getHeight() { return this->height;}
int PoroGrid::getWidth() { return this->width;}

#include "Poro.h"

void Poro::move(Direction direction)
{
    
}

void Poro::updatePosition()
{
    PoroGrid* grid = PoroGrid::getInstance();
    switch (previousDirection) {
        case Direction::Down:
            position.y--;
            if(position.y < 0) position.y = grid->getHeight()-1;
            break;
            
        case Direction::Left:
            position.x--;
            if(position.x < 0) position.y = grid->getWidth()-1;
            break;
            
        case Direction::Right:
            position.x++;
            position.x %= grid->getWidth();
            break;
            
        case Direction::Up:
            position.y++;
            position.x %= grid->getWidth();
            break;
    }
    normalizePosition();
}

void Poro::normalizePosition()
{
    PoroGrid* grid = PoroGrid::getInstance();
    Size cellSize = Size(GetVisibleSize().width / grid->getWidth(),
                         GetVisibleSize().height / grid->getHeight());
    
    float yPosition = cellSize.height * position.y +
                      cellSize.height / 2;
    
    float xPosition = cellSize.width * position.x +
                      cellSize.width / 2;
    
    sprite->setPosition(Vec2(xPosition, yPosition));
}

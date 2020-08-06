#include "Cell.h"

/////////////////////////////////////////////////////////////////////

using namespace MazeGeneratorApp;

/////////////////////////////////////////////////////////////////////

Cell::Cell(void)
{
    m_walls.insert(EWall::North);
    m_walls.insert(EWall::East);
    m_walls.insert(EWall::South);
    m_walls.insert(EWall::West);
}

void Cell::removeWall(EWall wall)
{
    m_walls.erase(wall);
}

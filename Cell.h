#ifndef CELL_H
#define CELL_H

#include <set>
#include "Wall.h"

namespace MazeGeneratorApp
{
    // Maze cell.
    struct Cell
    {
    public:
        Cell(void);
        
        void removeWall(EWall wall);
        
    public:
        std::set<EWall> m_walls;
    };
}

#endif

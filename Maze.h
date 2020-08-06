#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include "Cell.h"

namespace MazeGeneratorApp
{
    struct Maze
    {
    public:
        Maze(size_t width, size_t height);

        void display() const;

    public:
        const size_t m_Width;

        const size_t m_Height;

        std::vector< std::vector<Cell> > m_cells;
    };
}

#endif

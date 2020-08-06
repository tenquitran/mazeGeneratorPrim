#ifndef MAZE_GENERATOR_H
#define MAZE_GENERATOR_H

#include "Maze.h"

namespace MazeGeneratorApp
{
    class MazeGenerator
    {
    public:
        MazeGenerator() = default;

        Maze generate(size_t width, size_t height) const;
    };
}

#endif

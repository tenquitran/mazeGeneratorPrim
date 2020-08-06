#include "Maze.h"

/////////////////////////////////////////////////////////////////////

using namespace MazeGeneratorApp;

/////////////////////////////////////////////////////////////////////

Maze::Maze(size_t width, size_t height)
    : m_Width(width), m_Height(height)
{
    m_cells.resize(m_Height);
    
    for (auto& itr : m_cells)
    {
        itr.resize(m_Width);
    }
}

void Maze::display() const
{
    // TODO: stub
}

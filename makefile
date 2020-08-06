mazeGen: entryPoint.o Cell.o Maze.o MazeGenerator.o
	g++ entryPoint.o Cell.o Maze.o MazeGenerator.o -o mazeGen

entryPoint.o: entryPoint.cpp Maze.h MazeGenerator.h
	g++ -c entryPoint.cpp

MazeGenerator.o: MazeGenerator.cpp MazeGenerator.h
	g++ -c MazeGenerator.cpp

Maze.o: Maze.cpp Maze.h
	g++ -c Maze.cpp

Cell.o: Cell.cpp Cell.h Wall.h
	g++ -c Cell.cpp
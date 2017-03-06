// Maze.h

#ifndef _MAZE_h
#define _MAZE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#define NORTH 1
#define SOUTH 2
#define EAST 3
#define WEST 4

struct Block
{
	int x = -1;
	int y = -1;
	int weight = 0;
	bool northWall = false;
	bool southWall = false;
	bool eastWall = false;
	bool westWall = false;
};

//Global variables
extern Block currentBlock;
extern bool doneMapping;

//functions
void initializeMaze();
void trackPosition();
void makeMove();
void moveForward();
void getCoordinate();
void mapCurrentBlock();
void checkForWalls();
void findShortestPath();


#endif


#ifndef CELL_H
#define CELL_H
#include <string>
#include <sstream>
using namespace std;

class Cell
{

	char cellProperty;
	int dx, dy;
	bool isVisited;

public:
	Cell(int x, int y, char property) 
	{
		dx = x; dy = y; cellProperty;
	}
	
	void setFlag(bool flag) 
	{
		isVisited = flag;
	}
	
	void setX(int x)
	{
		dx = x;
	}
	
	void setY(int y)
	{
		dy = y;
	}
	
	char getProperty()
	{
		return cellProperty;
	}

	int getX()
	{
		return dx;
	}

	int getY()
	{
		return dy;
	}

	bool Visit()
	{
		return isVisited;
	}

};

#endif
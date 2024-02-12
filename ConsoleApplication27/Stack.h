#pragma once
#include "Cell.h"
class Stack
{
	Cell *cell;
public:
	void Push(int n)
	{
		Cell* temp=new Cell(n);
		temp->cell = cell;
		cell = temp;
	}
	int Pop()
	{
		Cell *temp=cell;
		cell = cell->cell;
		return temp->number;
	}

};


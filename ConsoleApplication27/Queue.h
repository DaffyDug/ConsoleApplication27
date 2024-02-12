#pragma once
#include "Cell.h"
class Queue
{
	Cell* first;
	Cell* last;
public:
	Queue()
	{
		first = new Cell(0);
		last = first;
	}
	void Push(int num) {
		Cell* cuvachek = new Cell(num);
		last->cell = cuvachek;
		last = cuvachek;

	}
	int Pop()
	{
		int x = first->number;
		first = first->cell;
		return x;
	}
};


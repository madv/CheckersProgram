#pragma once
#include <iostream>
#include <vector>
#include "checker.h"
using namespace std;
class board
{
public:
	board();
	~board();
	void reset();
	void print();
private:
	vector<vector<checker*>> the_board;
};
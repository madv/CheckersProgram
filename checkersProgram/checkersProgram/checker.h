#pragma once
using namespace std;
#include <string>
class checker
{
public:
	checker(const char& color, const bool& isKing);
	~checker();
	void setColor(char color);
	void setKing(bool isKing);
	char getColor() const;
	bool getIsKing() const;

private:
	bool isKing;
	char color;
};

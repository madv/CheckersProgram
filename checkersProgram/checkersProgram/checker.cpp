#include "checker.h"
checker::checker(const char& color, const bool& isKing) : color(color), isKing(isKing)
{
}
checker::~checker()
{
}
void checker::setColor(char color)
{
	this->color = color;
}
void checker::setKing(bool isKing)
{
	this->isKing = isKing;
}
char checker::getColor() const
{
	return this->color;
}
bool checker::getIsKing() const
{
	return this->isKing;
}
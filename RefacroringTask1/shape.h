#pragma once
#include<string>
#include <vector>
class Shape
{
private:
	void sides_figure(int& a, int& b, int& c, const int x1, const int x2, const int y1, const int y2, const int z1, const int z2);
public:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;
	Shape(int type, int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8);
	Shape() = default;
	int getType() { return type; }

	int type;
	std::vector<std::vector<int>> xyz;
	double volume;
	double square;
	double height;
	double radius;
};

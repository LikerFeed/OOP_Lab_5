#pragma once
#include "shape.h"

class PointPlusShape : virtual public Shape
{
public:
	PointPlusShape(void);
	Shape* copyShape();

	std::wstring getName();
	void Draw(HDC);
	void DrawRubber(HDC);
	LPCTSTR setWindowText();
};
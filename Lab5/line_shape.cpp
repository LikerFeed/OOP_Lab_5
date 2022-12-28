#include "line_shape.h"

LineShape::LineShape() {}

Shape* LineShape::copyShape()
{
	return new LineShape;
}

std::wstring LineShape::getName()
{
	return L"˳��";
}

void LineShape::Draw(HDC hdc)
{
	MoveToEx(hdc, xstart, ystart, NULL);
	LineTo(hdc, xend, yend);
}

void LineShape::DrawRubber(HDC hdc)
{
	Draw(hdc);
}

LPCTSTR  LineShape::setWindowText()
{
	return  L"˳��";
}
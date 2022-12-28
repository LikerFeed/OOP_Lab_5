#include "rect_shape.h"

RectShape::RectShape() {}

Shape* RectShape::copyShape()
{
	return new RectShape;
}

std::wstring RectShape::getName()
{
	return L"Прямокутник";
}

void RectShape::Draw(HDC hdc)
{
	int xStart = xend - (2 * (xend - xstart));
	int yStart = yend - (2 * (yend - ystart));

	MoveToEx(hdc, xStart, yStart, NULL);
	LineTo(hdc, xend, yStart);
	LineTo(hdc, xend, yend);
	LineTo(hdc, xStart, yend);
	LineTo(hdc, xStart, yStart);
}

void RectShape::DrawRubber(HDC hdc)
{
	int xStart = xend - (2 * (xend - xstart));
	int yStart = yend - (2 * (yend - ystart));

	MoveToEx(hdc, xStart, yStart, NULL);
	LineTo(hdc, xend, yStart);
	LineTo(hdc, xend, yend);
	LineTo(hdc, xStart, yend);
	LineTo(hdc, xStart, yStart);
}

LPCTSTR RectShape::setWindowText()
{
	return  L"Прямокутник";
}
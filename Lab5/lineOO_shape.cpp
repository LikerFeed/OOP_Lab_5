#include "lineOO_shape.h"

LineOOShape::LineOOShape() {}

Shape* LineOOShape::copyShape()
{
	return new LineOOShape;
}

std::wstring LineOOShape::getName()
{
	return L"Гантеля";
}

void LineOOShape::Draw(HDC hdc)
{
	int x1, x2, y1, y2;

	x1 = xstart; y1 = ystart; x2 = xend; y2 = yend;

	LineShape::Set(x1, y1, x2, y2);
	LineShape::Draw(hdc);

	EllipseShape::Set(x1 - 10, y1 - 10, x1 + 10, y1 + 10);
	EllipseShape::Draw(hdc);

	EllipseShape::Set(x2 - 10, y2 - 10, x2 + 10, y2 + 10);
	EllipseShape::Draw(hdc);

	Set(x1, y1, x2, y2);
}

void LineOOShape::DrawRubber(HDC hdc)
{
	int x1, x2, y1, y2;

	x1 = xstart; y1 = ystart; x2 = xend; y2 = yend;

	LineShape::Set(x1, y1, x2, y2);
	LineShape::Draw(hdc);

	EllipseShape::Set(x1 - 10, y1 - 10, x1 + 10, y1 + 10);
	EllipseShape::DrawRubber(hdc);

	EllipseShape::Set(x2 - 10, y2 - 10, x2 + 10, y2 + 10);
	EllipseShape::DrawRubber(hdc);

	xstart = x1; ystart = y1; xend = x2; yend = y2;
}

LPCTSTR LineOOShape::setWindowText()
{
	return  L"Гантеля";
}
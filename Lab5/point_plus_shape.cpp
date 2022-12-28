#include "point_plus_shape.h"
#include "framework.h"

PointPlusShape::PointPlusShape() {}

Shape* PointPlusShape::copyShape()
{
	return new PointPlusShape;
}

std::wstring PointPlusShape::getName()
{
	xstart = xend;
	ystart = yend;
	xend = 0;
	yend = 0;
	return L"Велика крапка";
}

void PointPlusShape::Draw(HDC hdc)
{
	SetPixel(hdc, xstart, ystart, 0x00000000);

	SetPixel(hdc, xstart + 1, ystart, 0x00000000);
	SetPixel(hdc, xstart + 2, ystart, 0x00000000);
	SetPixel(hdc, xstart - 2, ystart, 0x00000000);
	SetPixel(hdc, xstart - 1, ystart, 0x00000000);

	SetPixel(hdc, xstart, ystart + 1, 0x00000000);
	SetPixel(hdc, xstart, ystart + 2, 0x00000000);
	SetPixel(hdc, xstart, ystart - 2, 0x00000000);
	SetPixel(hdc, xstart, ystart - 1, 0x00000000);

	SetPixel(hdc, xstart + 1, ystart + 1, 0x00000000);
	SetPixel(hdc, xstart + 1, ystart - 1, 0x00000000);
	SetPixel(hdc, xstart - 1, ystart + 1, 0x00000000);
	SetPixel(hdc, xstart - 1, ystart - 1, 0x00000000);

	SetPixel(hdc, xstart + 2, ystart + 1, 0x00000000);
	SetPixel(hdc, xstart + 2, ystart - 1, 0x00000000);
	SetPixel(hdc, xstart - 2, ystart + 1, 0x00000000);
	SetPixel(hdc, xstart - 2, ystart - 1, 0x00000000);

	SetPixel(hdc, xstart + 1, ystart + 2, 0x00000000);
	SetPixel(hdc, xstart + 1, ystart - 2, 0x00000000);
	SetPixel(hdc, xstart - 1, ystart + 2, 0x00000000);
	SetPixel(hdc, xstart - 1, ystart - 2, 0x00000000);
}

void PointPlusShape::DrawRubber(HDC hdc) {}

LPCTSTR PointPlusShape::setWindowText()
{
	return  L"Велика крапка";
}
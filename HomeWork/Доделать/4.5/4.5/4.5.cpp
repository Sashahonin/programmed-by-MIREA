#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	HWND hand = GetConsoleWindow();
	HDC hand0 = GetDC(hand);
	int x, y;
	x = 0;
	while (x < 1000)
	{
		SetPixel(hand0, x, sin(x * 0.05) * 40 + 200, RGB(255, 255, 255));
		x++;
		SetPixel(hand0, x, 200, RGB(255, 255, 255));
	}
	y = 130;
	x = 314;
	while (y < 270)
	{
		SetPixel(hand0, x, y, RGB(255, 255, 255));
		y++;
	}
}
#pragma once


LRESULT CALLBACK SoftwareMaininProcedure(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
WNDCLASS NewIndowClass(HBRUSH BGColor, HCURSOR Cursor, HINSTANCE hInst, HICON Icon, LPCWSTR Name, WNDPROC Procedure);

void MainWndAddWidgets(HWND hWnd);
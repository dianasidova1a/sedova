#include <Windows.h>
#include <stack>
#include"Header.h"
#include <string>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow) {
	
	WNDCLASS SoftwareMainClass = NewIndowClass((HBRUSH)COLOR_WINDOW, LoadCursor(NULL, IDC_HAND), hInst, LoadIcon(NULL, IDI_QUESTION),
		L"MainWindClass", SoftwareMaininProcedure);

	if (!RegisterClassW(&SoftwareMainClass)) { return -1; }

	MSG SoftwareMainMessage = { 0 };

	CreateWindow(L"MainWindClass", L"STACK", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 500, 250, NULL, NULL, NULL, NULL);
	while (GetMessage(&SoftwareMainMessage, NULL, NULL, NULL)) {
		TranslateMessage(&SoftwareMainMessage);
		DispatchMessage(&SoftwareMainMessage);
	}
	return 0;
}

WNDCLASS NewIndowClass(HBRUSH BGColor, HCURSOR Cursor, HINSTANCE hInst, HICON Icon, LPCWSTR Name, WNDPROC Procedure) {

	WNDCLASS NWC = { 0 };

	NWC.hCursor = Cursor;
	NWC.hIcon = Icon;
	NWC.hInstance = hInst;
	NWC.lpszClassName = Name;
	NWC.hbrBackground = BGColor;
	NWC.lpfnWndProc = Procedure;

	return NWC;
}

LRESULT CALLBACK SoftwareMaininProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp) {
	switch (msg) {
	case WM_COMMAND:
		break;
	case WM_CREATE:
		MainWndAddWidgets(hWnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default: return DefWindowProc(hWnd, msg, wp, lp);
	}
}

void MainWndAddWidgets(HWND hWnd) {

	CreateWindowA("static", "¬ведите данные:", WS_VISIBLE | WS_CHILD | ES_CENTER, 80, 5, 350, 30, hWnd, NULL, NULL, NULL);

	 CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, 5, 40, 450, 30, hWnd, NULL, NULL, NULL);

	CreateWindowA("button", "Click me", WS_VISIBLE | WS_CHILD | ES_CENTER, 5, 240, 120, 30, hWnd, NULL, NULL, NULL);

	CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, 5, 90, 450, 30, hWnd, NULL, NULL, NULL);

	CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, 5, 140, 450, 30, hWnd, NULL, NULL, NULL);

	CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | ES_MULTILINE, 5, 190, 450, 30, hWnd, NULL, NULL, NULL);
}
 

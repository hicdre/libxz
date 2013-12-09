#include "stdafx.h"
#include "base/message_loop.h"
#include "application.h"


int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
					   _In_opt_ HINSTANCE hPrevInstance,
					   _In_ LPTSTR    lpCmdLine,
					   _In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	::CoInitialize(NULL);

	Application app;
	// TODO: Place code here.
	base::MessageLoopForUI main_loop;

	app.Init(&main_loop);

	app.LoadFromFile(L"app.xml");

	app.Run();

	::CoUninitialize();
	
	return 0;
}
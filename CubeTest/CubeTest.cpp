#include "stdafx.h"

#include "base/at_exit.h"
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

	base::AtExitManager exit_manager;
	// TODO: Place code here.
	base::MessageLoopForUI main_loop;

	Application::GetInstance()->Init(&main_loop);

	Application::GetInstance()->LoadFromFile(L"app.xml");

	Application::GetInstance()->Run();

	::CoUninitialize();
	
	return 0;
}
// Ex01.cpp : Defines the entry point for the application.

// Start Visual Studio
// Win32 Project
// Project Name: MySample100 --> OK
// Next --> Win32 Empty Project --> Finish
// Add Program.cpp file to the project

#include<windows.h>
int __stdcall WinMain(HINSTANCE hInstance, // cur app instance handle
                     HINSTANCE hPrevInstance, // prev app instance handle
					 LPSTR     lpCmdLine, //command line string for the current instance.
                     int       nCmdShow) // window display status
{                
 	HWND h;
	
	h = CreateWindow("EDIT","Press Me",WS_OVERLAPPEDWINDOW,
		             100,80,200,150,0,0,hInstance,0);
	ShowWindow(h,1); // 1.Normal, 2.Minimize, 3.Maximize

    MessageBox(0,"Hi","Waiting",0);

	return 0;
}



// Notes:

/*
   hInstance :
			    This is the 'instance handle for the 
				running application. Windows creates
				this unique ID number when the application
				starts.
   hPrevInstance:
				 More than one copy of the same windows
				 application can run at the same time,
				 if another copy is started, hPrevInstance
				 will contain the hInstance value for the
				 last copy started.
	lpszCmdLine:
				 A pointer to a character string containing
				 the command line arguments passed to the
				 program.
	nCmdShow:
				An integer value that is passed to the 
				function.This number tells the program
				whether the window that it creates should
				appear minimized, as an icon,normal or
				maximized when first displayed.
*/





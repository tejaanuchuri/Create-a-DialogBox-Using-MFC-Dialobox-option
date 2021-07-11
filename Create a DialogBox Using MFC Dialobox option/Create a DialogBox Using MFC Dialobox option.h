
// Create a DialogBox Using MFC Dialobox option.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCreateaDialogBoxUsingMFCDialoboxoptionApp:
// See Create a DialogBox Using MFC Dialobox option.cpp for the implementation of this class
//

class CCreateaDialogBoxUsingMFCDialoboxoptionApp : public CWinApp
{
public:
	CCreateaDialogBoxUsingMFCDialoboxoptionApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCreateaDialogBoxUsingMFCDialoboxoptionApp theApp;

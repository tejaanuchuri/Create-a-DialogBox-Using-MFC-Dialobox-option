
// Create a DialogBox Using MFC Dialobox optionDlg.h : header file
//

#pragma once


// CCreateaDialogBoxUsingMFCDialoboxoptionDlg dialog
class CCreateaDialogBoxUsingMFCDialoboxoptionDlg : public CDialogEx
{
// Construction
public:
	CCreateaDialogBoxUsingMFCDialoboxoptionDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CREATE_A_DIALOGBOX_USING_MFC_DIALOBOX_OPTION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};

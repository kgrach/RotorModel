// View.h : interface of the CView class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once

class CMainFrame;

class CView : public CWindowImpl<CView>
{
	
public:

	DECLARE_WND_CLASS(NULL)

	BEGIN_MSG_MAP(CView)
		MESSAGE_HANDLER(WM_PAINT, OnPaint)
	END_MSG_MAP()

// Handler prototypes (uncomment arguments if needed):
//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)

	LRESULT OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
	{
		
		RECT lpSize;
		//TODO: Add your drawing code here
		
		::GetClientRect(m_hWnd, &lpSize);
		
		CPaintDC dc(m_hWnd);
		
		dc.MoveTo(lpSize.right / 2, lpSize.bottom / 2);
		dc.AngleArc(lpSize.right / 2, lpSize.bottom / 2, 100, 0, 30);
		
		dc.MoveTo(lpSize.right / 2, lpSize.bottom / 2);
		dc.AngleArc(lpSize.right / 2, lpSize.bottom / 2, 50, 30, 360);
		
		//dc.LineTo(lpSize.right, lpSize.bottom);
		
		

		//
			
		return 0;
	}
};

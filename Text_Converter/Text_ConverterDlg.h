// Text_ConverterDlg.h : header file
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////AUTHOR : Sudheer HS	sudheer316@gmail.com////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////DATE : 6-apr-2006							////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////COMPANY : Maruthi Software Developers.,HASSAN - 573201 ,KARANATAKA, INDIA     ////////////////////////////////////////////////////////////////
////////////////Compiler Used : Microsoft Visual C++ 6.0////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	////////////////////////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////  This has been done as a project for Hampi University ,Hampi,INDIA ////////////////////////////////////////////////////////////////
////////////////  this is part of the free software Kuvempu Kannada Thantramsha,launched by Hampi University ////////////////////////////////////////////////////////////////
////////////////  This code as is with out any kind of warranty ,Using or modifing the code or the library without ////////////////////////////////////////////////////////////////
////////////////  the written permission by the university is prohibited,Any such illegal activities is punishable offence as per ////////////////////////////////////////////////////////////////
////////////////  the copy rights ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
*
*Modified Added New chars pha ph with dots
*Date 11/03/2009 1:44 AM
*Author Sudheer HS 
*/


#if !defined(AFX_TEXT_CONVERTERDLG_H__ECE6DBA7_BF36_11D6_94AD_9EB339936A45__INCLUDED_)
#define AFX_TEXT_CONVERTERDLG_H__ECE6DBA7_BF36_11D6_94AD_9EB339936A45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CText_ConverterDlg dialog

class CText_ConverterDlg : public CDialog
{
int Choice;
// Construction
public:
	CText_ConverterDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CText_ConverterDlg)
	enum { IDD = IDD_TEXT_CONVERTER_DIALOG };
	CTabCtrl       m_ctlTab;
	CString	m_strSRC;
	CString	m_strDST;
	CProgressCtrl  m_ctlProgress;
	CBitmap m_ctlBmp; 
	CRect m_rcLft;
    BOOL	m_chkScale;

	//variables for converter
	char fchr; // current character
	    int  found;// ststus
		int  i,j; // loop 
		int  bRet; // success

		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CText_ConverterDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CText_ConverterDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeEdit1();
	afx_msg void OnChangeEdit2();
	afx_msg void OnProgress1();
	afx_msg void OnSreelipi();
	afx_msg void OnSurabhi();
	afx_msg void OnSrg();
	afx_msg void OnSrg2();
	afx_msg void OnAnu();
	afx_msg void OnPra();
	afx_msg void OnSrcFileSelect();
	afx_msg void OnDscFileSelect();
	virtual void OnConvert();
	virtual void OnCancel();
	afx_msg void OnSreeLipi();
	int Is_path_full(const char* ,const char* );
	void BlitBitmap(CRect& rc,CBitmap& bm);
	void ShowBitMaps();
		
	int Srg_To_Kuvempu(const char*pszSRCFile,const char* pszDSTFile);
	int Srg_To_Kuvempu2(const char*pszSRCFile,const char* pszDSTFile);
	int SreeLipi_To_Kuvempu(const char*pszSRCFile,const char* pszDSTFile);
	int Surabhi_To_Kuvempu(const char*pszSRCFile,const char* pszDSTFile);
	int Anu_To_Kuvempu(const char*pszSRCFile,const char* pszDSTFile);
	int Pra_To_Kuvempu(const char* pszSRCFile,const char* pszDSTFile);

	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	int write(FILE* dstFile,const char *buffer);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.



#endif // !defined(AFX_TEXT_CONVERTERDLG_H__ECE6DBA7_BF36_11D6_94AD_9EB339936A45__INCLUDED_)
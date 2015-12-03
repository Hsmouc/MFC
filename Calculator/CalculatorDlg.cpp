// CalculatorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "math.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculatorDlg dialog

CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCalculatorDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalculatorDlg)
	m_fInput = 0.0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalculatorDlg)
	DDX_Text(pDX, IDC_INPUT, m_fInput);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialog)
	//{{AFX_MSG_MAP(CCalculatorDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_SETFOCUS(IDC_INPUT, OnSetfocusInput)
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_CALC, OnCalc)
	ON_BN_CLICKED(IDC_CLEAR, OnClear)
	ON_BN_CLICKED(IDC_DIV, OnDiv)
	ON_BN_CLICKED(IDC_MUL, OnMul)
	ON_BN_CLICKED(IDC_RECIPROCAL, OnReciprocal)
	ON_BN_CLICKED(IDC_SQRT, OnSqrt)
	ON_BN_CLICKED(IDC_SUB, OnSub)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculatorDlg message handlers

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	m_fResult = 0.0;
	m_nOP = 0;

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculatorDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCalculatorDlg::OnSetfocusInput() 
{
	m_fInput=0.0;
	UpdateData(FALSE);
	// TODO: Add your control notification handler code here
	
}

void CCalculatorDlg::OnAdd() 
{
	OnCalc();
	m_nOP=1;
	// TODO: Add your control notification handler code here
	
}

void CCalculatorDlg::OnCalc() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	switch(m_nOP)
	{
	    case 0:
		    m_fResult=m_fInput;
		    break;
		case 1:
			m_fResult+=m_fInput;
			break;
		case 2:
			m_fResult-=m_fInput;
			break;
		case 3:
			m_fResult*=m_fInput;
			break;
		case 4:
			m_fResult/=m_fInput;
			break;
		case 5:
			m_fResult=1/m_fInput;
			break;
		case 6:
			m_fResult=sqrt(m_fInput);
			break;
	}
	m_fInput=m_fResult;
	UpdateData(FALSE);
	
}

void CCalculatorDlg::OnClear() 
{
	// TODO: Add your control notification handler code here
	m_fResult=0.0;
	m_fInput=0.0;
	m_nOP=0;
	UpdateData(FALSE);
}

void CCalculatorDlg::OnDiv() 
{
	OnCalc();
	m_nOP=4;
	// TODO: Add your control notification handler code here
	
}

void CCalculatorDlg::OnMul() 
{
	OnCalc();
	m_nOP=3;
	// TODO: Add your control notification handler code here
	
}

void CCalculatorDlg::OnReciprocal() 
{
	m_nOP=5;
	OnCalc();
	m_nOP=0;
	// TODO: Add your control notification handler code here
	
}

void CCalculatorDlg::OnSqrt() 
{
	// TODO: Add your control notification handler code here
	m_nOP=6;
	OnCalc();
	m_nOP=0;
}

void CCalculatorDlg::OnSub() 
{
	OnCalc();
	m_nOP=2;
	// TODO: Add your control notification handler code here
	
}

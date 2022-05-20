// DlgLobby.cpp: 实现文件
//

#include "pch.h"
#include "MFCApp.h"
#include "DlgLobby.h"
#include "afxdialogex.h"


// CDlgLobby 对话框

IMPLEMENT_DYNAMIC(CDlgLobby, CDialogEx)

CDlgLobby::CDlgLobby(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LOBBY, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

BOOL CDlgLobby::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。


	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}
CDlgLobby::~CDlgLobby()
{
}

void CDlgLobby::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgLobby, CDialogEx)
END_MESSAGE_MAP()


// CDlgLobby 消息处理程序

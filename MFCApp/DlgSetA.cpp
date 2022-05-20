// DlgSetA.cpp: 实现文件
//

#include "pch.h"
#include "MFCApp.h"
#include "DlgSetA.h"
#include "afxdialogex.h"


// CDlgSetA 对话框

IMPLEMENT_DYNAMIC(CDlgSetA, CDialogEx)

CDlgSetA::CDlgSetA(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SETA, pParent)
{

}

CDlgSetA::~CDlgSetA()
{
}

void CDlgSetA::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgSetA, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDlgSetA::OnBnClickedButton1)
END_MESSAGE_MAP()


// CDlgSetA 消息处理程序


void CDlgSetA::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}

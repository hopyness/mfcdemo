#pragma once


// CDlgSetA 对话框

class CDlgSetA : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSetA)

public:
	CDlgSetA(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDlgSetA();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SETA };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};

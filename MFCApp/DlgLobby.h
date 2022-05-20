#pragma once


// CDlgLobby 对话框

class CDlgLobby : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgLobby)

public:
	CDlgLobby(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDlgLobby();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOBBY };
#endif

protected:
	virtual BOOL OnInitDialog();
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

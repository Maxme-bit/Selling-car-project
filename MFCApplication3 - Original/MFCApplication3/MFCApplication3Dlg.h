
// MFCApplication3Dlg.h : header file
//
#include "Tesla.h"
#include "Audi.h"
#include "Toyota.h"
#include <fstream>
#include <string>
#include <sstream>

#pragma once


// CMFCApplication3Dlg dialog
class CMFCApplication3Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication3Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION3_DIALOG };
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
public:
	CStatic m_name;
	CStatic m_budget;
	afx_msg void OnStnClickedmbudget();
	afx_msg void OnChangeEdit1();
	afx_msg void OnChangeEdit2();
	CStatic m_hello;
	CStatic m_static_name;
	CStatic static_budget;
	CStatic m_static_budget;
	CString name;
	CString budget;
	CEdit edit_name;
	CEdit edit_budget;
	CButton m_submit_button;
	afx_msg void OnClickedButton1();
	CComboBox m_tesla_combo;
	CComboBox m_toyota_combo;
	CComboBox m_audi_combo;
	afx_msg void OnSelchangeCombo1();
	CString text_tesla;
	CString text_toyota;
	CString text_audi;
	Tesla *s=new Tesla[32];
	Toyota *t = new Toyota[32];
	Audi* a = new Audi[32];
	afx_msg void OnStnClickedstaticbudget();
	CStatic m_static_company;
	CStatic m_static_model;
	CStatic m_static_price;
	CStatic m_static_color;
	CStatic m_static_maxspeed;
	CStatic m_static_range;
	CStatic m_static_instock;
	afx_msg void OnStnClickedmstaticcompany();
	afx_msg void OnStnClickedmstaticname();
	afx_msg void OnBnClickedOk();
	afx_msg void showTesla();
	afx_msg void showToyota();
	afx_msg void showAudi();
	afx_msg void  UpdateAmount(string,string,int,int);
	afx_msg void change(string filename, string infilename);
	string TeslaFilename = "Tesla.txt";
	string TeslaSecondFile = "Tesla2.txt";
	string ToyotaFilename = "Toyota.txt";
	string ToyotaSecondFile = "Toyota2.txt";
	string AudiFilename = "Audi.txt";
	string AudiSecondFile = "Audi2.txt";
	CStatic* pPCAvatar;
	int Combo_Tesla;
	int Combo_Toyota;
	int Combo_Audi;
	bool admin = false;
	CButton m_button_admin;
	CButton m_button_update;
	afx_msg void OnClickedAdmin();
	afx_msg void OnClickedUpdate();
	afx_msg void show_admin();
	CStatic m_company;
	CStatic m_model;
	CStatic m_price;
	CStatic m_color;
	CStatic m_static1;
	CStatic m_static2;
	CStatic m_stock;
	CEdit m_edit_stock;
	CButton m_return;
	afx_msg void OnClickedReturn();
	afx_msg void OnSelchangeCombo2();
	afx_msg void OnSelchangeCombo3();
	afx_msg void BuyForTesla();
	afx_msg void BuyForToyota();
	afx_msg void BuyForAudi();
	bool tesla = false;
	bool toyota = false;
	bool audi = false;
	
	CEdit m_edit6;
	CEdit m_edit5;
	CEdit m_edit4;
	CEdit m_edit3;
	CEdit m_edit2;
	afx_msg void OnEnChangeEdit12();
	CButton m_add;
	afx_msg void OnClickedAdd();
	CButton m_delete;
	afx_msg void OnClickedDelete();
	afx_msg void AddTesla();
	afx_msg void AddToyota();
	afx_msg void AddAudi();
	afx_msg void DeleteTesla(CString);
	afx_msg void DeleteToyota(CString);
	afx_msg void DeleteAudi(CString);
	afx_msg void ShowDelete();
	afx_msg void ShowUpdate();
	afx_msg void ShowAdd();
	//Tesla *NewTesla = new Tesla[32];
	int CurTesla = 4, CurToyota = 4, CurAudi = 4,ReturnCounter=0;
	CEdit m_edit_delete;
	CStatic delete_static;
};

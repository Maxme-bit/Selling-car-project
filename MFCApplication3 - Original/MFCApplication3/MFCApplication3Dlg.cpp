
// MFCApplication3Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication3.h"
#include "MFCApplication3Dlg.h"
#include "afxdialogex.h"
#include "Audi.h"
#include "Tesla.h"
#include "Toyota.h"
#include <string.h>
//#include <queue>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication3Dlg dialog



CMFCApplication3Dlg::CMFCApplication3Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION3_DIALOG, pParent), text_tesla(_T(" ")), text_toyota(_T(" ")), text_audi(_T(" "))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_m_name, m_name);
	DDX_Control(pDX, IDC_m_budget, m_budget);
	DDX_Control(pDX, IDC_hello, m_hello);
	DDX_Control(pDX, IDC_m_static_name, m_static_name);
	DDX_Control(pDX, IDC_static_budget, static_budget);
	DDX_Control(pDX, IDC_m_static_budget, m_static_budget);
	DDX_Control(pDX, IDC_EDIT1, edit_name);
	DDX_Control(pDX, IDC_EDIT2, edit_budget);
	DDX_Control(pDX, IDC_BUTTON1, m_submit_button);
	DDX_Control(pDX, IDC_COMBO1, m_tesla_combo);
	DDX_Control(pDX, IDC_COMBO2, m_toyota_combo);
	DDX_Control(pDX, IDC_COMBO3, m_audi_combo);
	DDX_Control(pDX, IDC_m_static_company, m_static_company);
	DDX_Control(pDX, IDC_m_static_model, m_static_model);
	DDX_Control(pDX, IDC_m_static_price, m_static_price);
	DDX_Control(pDX, IDC_m_static_color, m_static_color);
	DDX_Control(pDX, IDC_m_static_maxspeed, m_static_maxspeed);
	DDX_Control(pDX, IDC_m_static_range, m_static_range);
	DDX_Control(pDX, IDC_m_static_instock, m_static_instock);

	DDX_Control(pDX, IDC_BUTTON5, m_button_admin);

	DDX_Control(pDX, IDC_BUTTON3, m_button_update);

	DDX_Control(pDX, IDC_m_company, m_company);
	DDX_Control(pDX, IDC_m_model, m_model);
	DDX_Control(pDX, IDC_m_price, m_price);
	DDX_Control(pDX, IDC_color, m_color);
	DDX_Control(pDX, IDC_STATIC1, m_static1);
	DDX_Control(pDX, IDC_STATIC2, m_static2);
	DDX_Control(pDX, IDC_Stock, m_stock);
	DDX_Control(pDX, IDC_EDIT9, m_edit_stock);

	DDX_Control(pDX, IDC_BUTTON4, m_return);
	DDX_Control(pDX, IDC_EDIT15, m_edit6);
	DDX_Control(pDX, IDC_EDIT14, m_edit5);
	DDX_Control(pDX, IDC_EDIT13, m_edit4);
	DDX_Control(pDX, IDC_EDIT12, m_edit3);
	DDX_Control(pDX, IDC_EDIT11, m_edit2);
	DDX_Control(pDX, IDC_BUTTON6, m_add);
	DDX_Control(pDX, IDC_BUTTON7, m_delete);
	DDX_Control(pDX, IDC_EDIT10, m_edit_delete);
	DDX_Control(pDX, IDC_delete_static, delete_static);
}

BEGIN_MESSAGE_MAP(CMFCApplication3Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_STN_CLICKED(IDC_m_budget, &CMFCApplication3Dlg::OnStnClickedmbudget)
	ON_EN_CHANGE(IDC_EDIT1, &CMFCApplication3Dlg::OnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CMFCApplication3Dlg::OnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication3Dlg::OnClickedButton1)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CMFCApplication3Dlg::OnSelchangeCombo1)
	ON_STN_CLICKED(IDC_static_budget, &CMFCApplication3Dlg::OnStnClickedstaticbudget)
	ON_STN_CLICKED(IDC_m_static_company, &CMFCApplication3Dlg::OnStnClickedmstaticcompany)
	ON_STN_CLICKED(IDC_m_static_name, &CMFCApplication3Dlg::OnStnClickedmstaticname)
	ON_BN_CLICKED(IDOK, &CMFCApplication3Dlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication3Dlg::OnClickedAdmin)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication3Dlg::OnClickedUpdate)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication3Dlg::OnClickedReturn)

	ON_CBN_SELCHANGE(IDC_COMBO2, &CMFCApplication3Dlg::OnSelchangeCombo2)
	ON_CBN_SELCHANGE(IDC_COMBO3, &CMFCApplication3Dlg::OnSelchangeCombo3)
	ON_EN_CHANGE(IDC_EDIT12, &CMFCApplication3Dlg::OnEnChangeEdit12)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication3Dlg::OnClickedAdd)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication3Dlg::OnClickedDelete)
END_MESSAGE_MAP()


// CMFCApplication3Dlg message handlers

BOOL CMFCApplication3Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.
	//pPCAvatar = (CStatic*)GetDlgItem(PC_AVATAR);
	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
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
	CString str;
	s = new Tesla();
	s = GetTesla();
	t = new Toyota();
	t = GetToyota();
	a = new Audi();
	a = GetAudi();
	int jt = 0;
	for (int i = 0; i < GetHowManyTeslaCars(); i++)
	{
			str.Format(s[i].ElectricCar::GetModel(), 1);
			m_tesla_combo.AddString(str);
	}
	for (int i = 0; i < 4; i++)
	{
		str.Format(t[i].ElectricCar::GetModel(), 1);
		m_toyota_combo.AddString(str);
	}
	for (int i = 0; i < 4; i++)
	{
		str.Format(a[i].SportCar::GetModel(), 1);
		m_audi_combo.AddString(str);
	}
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCApplication3Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCApplication3Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication3Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication3Dlg::OnStnClickedmbudget()
{
	// TODO: Add your control notification handler code here
}


void CMFCApplication3Dlg::OnChangeEdit1()
{
	UpdateData(TRUE);
	edit_name.GetWindowText(name);
}


void CMFCApplication3Dlg::OnChangeEdit2()
{
	UpdateData(TRUE);
	edit_budget.GetWindowText(budget);

	for (int i = 0; i < budget.GetLength(); i++) {
		if (!std::isdigit(budget[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
		}
	}

}


void CMFCApplication3Dlg::OnClickedButton1()
{
	// TODO: Add your control notification handler code here
	CString str;
	m_button_admin.ShowWindow(SW_HIDE);
	m_submit_button.GetWindowTextW(str);
	if (str != _T("BUY"))
	{
		m_name.ShowWindow(SW_HIDE);
		m_budget.ShowWindow(SW_HIDE);
		edit_name.ShowWindow(SW_HIDE);
		edit_budget.ShowWindow(SW_HIDE);
		m_hello.ShowWindow(SW_SHOW);
		m_static_name.ShowWindow(SW_SHOW);
		static_budget.ShowWindow(SW_SHOW);
		m_static_budget.ShowWindow(SW_SHOW);
		m_tesla_combo.ShowWindow(SW_SHOW);
		m_toyota_combo.ShowWindow(SW_SHOW);
		m_audi_combo.ShowWindow(SW_SHOW);
		m_tesla_combo.SetWindowTextW(_T("Tesla"));
		m_toyota_combo.SetWindowTextW(_T("Toyota"));
		m_audi_combo.SetWindowTextW(_T("Audi"));
		UpdateData(FALSE);
		m_static_name.SetWindowTextW(name);
		m_static_budget.SetWindowTextW(budget);

	}

	else
	{
		if (tesla == true)
		{
			BuyForTesla();
		}
		if (toyota==true)
		{
			BuyForToyota();
		}
		if (audi==true)
		{
			BuyForAudi();
		}
	}
}
void CMFCApplication3Dlg::BuyForTesla()
{
	CString temp;
	int budget_c, price_car, amount_car;
	budget_c = _ttoi(budget);
	price_car = _ttoi(s[Combo_Tesla].ElectricCar::GetPrice());
	amount_car = _ttoi(s[Combo_Tesla].ElectricCar::GetAmount());
	budget_c = budget_c - price_car;
	if (budget_c >= 0 && amount_car > 0)
	{
		budget.Format(L"%d", budget_c);
		m_static_budget.SetWindowTextW(budget);
		amount_car--;
		temp.Format(L"%d", amount_car);
		s[Combo_Tesla].ElectricCar::SetAmount(temp);
		OnSelchangeCombo1();
		UpdateAmount(TeslaFilename, TeslaSecondFile, amount_car, Combo_Tesla);
	}
	else
	{
		if (budget_c < 0)
			AfxMessageBox(_T("Sorry, You don't have enough money"));
		else if (amount_car <= 0)
			AfxMessageBox(_T("Sorry, We don't have enough in the stock"));
	}
}
void CMFCApplication3Dlg::BuyForToyota() {
	CString temp;
	int budget_c, price_car, amount_car;
	budget_c = _ttoi(budget);
	price_car = _ttoi(t[Combo_Toyota].ElectricCar::GetPrice());
	amount_car = _ttoi(t[Combo_Toyota].ElectricCar::GetAmount());
	budget_c = budget_c - price_car;
	if (budget_c >= 0 && amount_car > 0)
	{
		budget.Format(L"%d", budget_c);
		m_static_budget.SetWindowTextW(budget);
		amount_car--;
		temp.Format(L"%d", amount_car);
		t[Combo_Toyota].ElectricCar::SetAmount(temp);
		OnSelchangeCombo2();
		UpdateAmount(ToyotaFilename, ToyotaSecondFile, amount_car, Combo_Toyota);
	}
	else
	{
		if (budget_c < 0)
			AfxMessageBox(_T("Sorry, You don't have enough money"));
		else if (amount_car <= 0)
			AfxMessageBox(_T("Sorry, We don't have enough in the stock"));
	}
}
void CMFCApplication3Dlg::BuyForAudi() {
	CString temp;
	int budget_c, price_car, amount_car;
	budget_c = _ttoi(budget);
	price_car = _ttoi(a[Combo_Audi].SportCar::GetPrice());
	amount_car = _ttoi(a[Combo_Audi].SportCar::GetAmount());
	budget_c = budget_c - price_car;
	if (budget_c >= 0 && amount_car > 0)
	{
		budget.Format(L"%d", budget_c);
		m_static_budget.SetWindowTextW(budget);
		amount_car--;
		temp.Format(L"%d", amount_car);
		a[Combo_Audi].SportCar::SetAmount(temp);
		OnSelchangeCombo3();
		UpdateAmount(AudiFilename, AudiSecondFile, amount_car, Combo_Audi);
	}
	else
	{
		if (budget_c < 0)
			AfxMessageBox(_T("Sorry, You don't have enough money"));
		else if (amount_car <= 0)
			AfxMessageBox(_T("Sorry, We don't have enough in the stock"));
	}
}


void CMFCApplication3Dlg::UpdateAmount(string filename,string infilename ,int amount,int line)
{
	// updates Car2 this the new amount from Car
	ifstream filein;
	filein.open(filename);
	ofstream fileout;
	fileout.open(infilename);
	char c;
	int countpsik = 0,countn=0;
	while (!filein.eof())
	{
		filein.get(c);
		if (c==',')
		{
			countpsik++;
		}
		if (c == '\n')
		{
			countn++;
			countpsik = 0;
		}
		if(countpsik!=5)
		fileout << c;
		else if(countpsik == 5 && countn == line)
		{
			fileout << ",";
			fileout << amount;
			countpsik++; 
			filein.get(c);
			while (c!=',')
			{
				filein.get(c);
			}
			fileout << ",";
			
		}
		else if (countpsik == 5 && countn != line) 
		{
			fileout << c;
		}
	}
	filein.close();
	fileout.close();
	// copies Tesla2 to Telsa
	change(filename, infilename);
}
void CMFCApplication3Dlg::change(string filename,string infilename)
{
	char cur, prev;
	ofstream filein;
	filein.open(filename);
	ifstream fileout;
	fileout.open(infilename);
	fileout.get(cur);
	filein << cur;
	prev = cur;
	while (!fileout.eof())
	{
		fileout.get(cur);
		if (cur!=';'||prev!=';')
			filein << cur;
		prev = cur;
	}
	filein.close();
	fileout.close();
}
void CMFCApplication3Dlg::OnStnClickedstaticbudget()
{
	// TODO: Add your control notification handler code here
}


void CMFCApplication3Dlg::OnStnClickedmstaticcompany()
{
	// TODO: Add your control notification handler code here
}


void CMFCApplication3Dlg::OnStnClickedmstaticname()
{
	// TODO: Add your control notification handler code here
}


void CMFCApplication3Dlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}

void CMFCApplication3Dlg::show_admin()
{
	m_tesla_combo.ShowWindow(SW_SHOW);
	m_toyota_combo.ShowWindow(SW_SHOW);
	m_audi_combo.ShowWindow(SW_SHOW);
	m_hello.ShowWindow(SW_SHOW);
	m_static_name.ShowWindow(SW_SHOW);
	m_tesla_combo.SetWindowTextW(_T("Tesla"));
	m_toyota_combo.SetWindowTextW(_T("Toyota"));
	m_audi_combo.SetWindowTextW(_T("Audi"));
}
void CMFCApplication3Dlg::OnClickedAdmin()
{
	// TODO: Add your control notification handler code here
	m_name.ShowWindow(SW_HIDE);
	m_budget.ShowWindow(SW_HIDE);
	edit_name.ShowWindow(SW_HIDE);
	edit_budget.ShowWindow(SW_HIDE);
	m_submit_button.ShowWindow(SW_HIDE);
	show_admin();
	UpdateData(FALSE);
	m_static_name.SetWindowTextW(_T("Admin"));
	admin = true;
	
}
void CMFCApplication3Dlg::OnClickedUpdate()
{
	// TODO: Add your control notification handler code here

	UpdateData(TRUE);
	CString str;
	ShowUpdate();
	m_edit_stock.GetWindowText(str);
	int stock = _ttoi(str);
	for (int i = 0; i < str.GetLength(); i++) {
		if (!std::isdigit(str[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	if (str!="")
	{
		if (tesla == true)
		{
			s[Combo_Tesla].ElectricCar::SetAmount(str);
			UpdateAmount(TeslaFilename, TeslaSecondFile, stock, Combo_Tesla);
		}
		if (toyota == true)
		{
			t[Combo_Toyota].ElectricCar::SetAmount(str);
			UpdateAmount(ToyotaFilename, ToyotaSecondFile, stock, Combo_Toyota);
		}
		if (audi == true)
		{
			a[Combo_Audi].SportCar::SetAmount(str);
			UpdateAmount(AudiFilename, AudiSecondFile, stock, Combo_Audi);
		}
	}
}
void CMFCApplication3Dlg::ShowUpdate() 
{
	m_edit_stock.ShowWindow(SW_SHOW);
	m_delete.ShowWindow(SW_HIDE);
	m_add.ShowWindow(SW_HIDE);
	m_tesla_combo.ShowWindow(SW_HIDE);
	m_toyota_combo.ShowWindow(SW_HIDE);
	m_audi_combo.ShowWindow(SW_HIDE);

}
void CMFCApplication3Dlg::showTesla()
{
	m_toyota_combo.ShowWindow(SW_HIDE);
	m_audi_combo.ShowWindow(SW_HIDE);
	m_static_company.ShowWindow(SW_SHOW);
	m_static_model.ShowWindow(SW_SHOW);
	m_static_price.ShowWindow(SW_SHOW);
	m_static_color.ShowWindow(SW_SHOW);
	m_static_maxspeed.ShowWindow(SW_SHOW);
	m_static_range.ShowWindow(SW_SHOW);
	m_static_instock.ShowWindow(SW_SHOW);
	m_company.ShowWindow(SW_SHOW);
	m_model.ShowWindow(SW_SHOW);
	m_price.ShowWindow(SW_SHOW);
	m_color.ShowWindow(SW_SHOW);
	m_static1.ShowWindow(SW_SHOW);
	m_static2.ShowWindow(SW_SHOW);
	m_stock.ShowWindow(SW_SHOW);
	m_static1.SetWindowTextW(_T("Range:"));
	m_static2.SetWindowTextW(_T("Max Speed:"));
}
void CMFCApplication3Dlg::showToyota()
{
	m_tesla_combo.ShowWindow(SW_HIDE);
	m_audi_combo.ShowWindow(SW_HIDE);
	m_static_company.ShowWindow(SW_SHOW);
	m_static_model.ShowWindow(SW_SHOW);
	m_static_price.ShowWindow(SW_SHOW);
	m_static_color.ShowWindow(SW_SHOW);
	m_static_maxspeed.ShowWindow(SW_SHOW);
	m_static_range.ShowWindow(SW_SHOW);
	m_static_instock.ShowWindow(SW_SHOW);
	m_company.ShowWindow(SW_SHOW);
	m_model.ShowWindow(SW_SHOW);
	m_price.ShowWindow(SW_SHOW);
	m_color.ShowWindow(SW_SHOW);
	m_static1.ShowWindow(SW_SHOW);
	m_static2.ShowWindow(SW_SHOW);
	m_stock.ShowWindow(SW_SHOW);
	m_static1.SetWindowTextW(_T("Range:"));
	m_static2.SetWindowTextW(_T("Seat Number:"));
}
void CMFCApplication3Dlg::showAudi() 
{
	m_tesla_combo.ShowWindow(SW_HIDE);
	m_toyota_combo.ShowWindow(SW_HIDE);
	m_static_company.ShowWindow(SW_SHOW);
	m_static_model.ShowWindow(SW_SHOW);
	m_static_price.ShowWindow(SW_SHOW);
	m_static_color.ShowWindow(SW_SHOW);
	m_static_maxspeed.ShowWindow(SW_SHOW);
	m_static_range.ShowWindow(SW_SHOW);
	m_static_instock.ShowWindow(SW_SHOW);
	m_company.ShowWindow(SW_SHOW);
	m_model.ShowWindow(SW_SHOW);
	m_price.ShowWindow(SW_SHOW);
	m_color.ShowWindow(SW_SHOW);
	m_static1.ShowWindow(SW_SHOW);
	m_static2.ShowWindow(SW_SHOW);
	m_stock.ShowWindow(SW_SHOW);
	m_static1.SetWindowTextW(_T("Max Speed:"));
	m_static2.SetWindowTextW(_T("Seat Number:"));
}
void CMFCApplication3Dlg::OnClickedReturn()
{
	// TODO: Add your control notification handler code here
	if (ReturnCounter == 0)
	{
		m_tesla_combo.ShowWindow(SW_SHOW);
		m_toyota_combo.ShowWindow(SW_SHOW);
		m_audi_combo.ShowWindow(SW_SHOW);
		m_static_company.ShowWindow(SW_HIDE);
		m_static_model.ShowWindow(SW_HIDE);
		m_static_price.ShowWindow(SW_HIDE);
		m_static_color.ShowWindow(SW_HIDE);
		m_static_maxspeed.ShowWindow(SW_HIDE);
		m_static_range.ShowWindow(SW_HIDE);
		m_static_instock.ShowWindow(SW_HIDE);
		m_company.ShowWindow(SW_HIDE);
		m_model.ShowWindow(SW_HIDE);
		m_price.ShowWindow(SW_HIDE);
		m_color.ShowWindow(SW_HIDE);
		m_static1.ShowWindow(SW_HIDE);
		m_static2.ShowWindow(SW_HIDE);
		m_stock.ShowWindow(SW_HIDE);
		m_edit_stock.ShowWindow(SW_HIDE);
		m_add.ShowWindow(SW_HIDE);
		m_delete.ShowWindow(SW_HIDE);
		m_button_update.ShowWindow(SW_HIDE);
		m_edit2.ShowWindow(SW_HIDE);
		m_edit3.ShowWindow(SW_HIDE);
		m_edit4.ShowWindow(SW_HIDE);
		m_edit5.ShowWindow(SW_HIDE);
		m_edit6.ShowWindow(SW_HIDE);
		delete_static.ShowWindow(SW_HIDE);
		m_edit_delete.ShowWindow(SW_HIDE);
		tesla = false;
		toyota = false;
		audi = false;
		ReturnCounter = 1;
	}
	else
	{
		m_tesla_combo.ShowWindow(SW_HIDE);
		m_toyota_combo.ShowWindow(SW_HIDE);
		m_audi_combo.ShowWindow(SW_HIDE);
		m_static_budget.ShowWindow(SW_HIDE);
		m_static_name.ShowWindow(SW_HIDE);
		m_hello.ShowWindow(SW_HIDE);
		m_return.ShowWindow(SW_HIDE);
		static_budget.ShowWindow(SW_HIDE);
		m_name.ShowWindow(SW_SHOW);
		edit_name.ShowWindow(SW_SHOW);
		m_budget.ShowWindow(SW_SHOW);
		edit_budget.ShowWindow(SW_SHOW);
		m_submit_button.ShowWindow(SW_SHOW);
		m_button_admin.ShowWindow(SW_SHOW);
		ReturnCounter = 0;
		admin = false;
	}
	
	
}
void CMFCApplication3Dlg::OnSelchangeCombo1()
{
	// TODO: Add your control notification handler code here
	tesla = true;
	CString str;
	UpdateData(TRUE); 
	
	m_return.ShowWindow(SW_SHOW);
	str = text_tesla;
	int n;
	Combo_Tesla = m_tesla_combo.GetCurSel();
	if (Combo_Tesla != LB_ERR)
	{
		m_tesla_combo.GetLBText(Combo_Tesla, str);
		if (admin) {
			m_add.ShowWindow(SW_SHOW);
			m_delete.ShowWindow(SW_SHOW);
			m_button_update.ShowWindow(SW_SHOW);
			m_static_company.SetWindowTextW(_T("Tesla"));
			showTesla();
			m_static_model.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetModel());
			m_static_price.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetPrice());
			m_static_color.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetColor());
			m_static_maxspeed.SetWindowTextW(s[Combo_Tesla].SportCar::GetMaxSpeed());
			m_static_range.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetRange());
			m_static_instock.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetAmount());
		}
		else {
			showTesla();
			m_static_company.SetWindowTextW(_T("Tesla"));
			m_static_model.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetModel());
			m_static_price.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetPrice());
			m_static_color.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetColor());
			m_static_maxspeed.SetWindowTextW(s[Combo_Tesla].SportCar::GetMaxSpeed());
			m_static_range.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetRange());
			m_static_instock.SetWindowTextW(s[Combo_Tesla].ElectricCar::GetAmount());
			m_submit_button.SetWindowTextW(_T("BUY"));
		}
	}
	ReturnCounter = 0;
}
void CMFCApplication3Dlg::OnSelchangeCombo2()
{
	toyota = true;
	CString str;
	UpdateData(TRUE);
	m_return.ShowWindow(SW_SHOW);
	str = text_toyota;
	int n;
	Combo_Toyota = m_toyota_combo.GetCurSel();
	if (Combo_Toyota != LB_ERR)
	{
		m_toyota_combo.GetLBText(Combo_Toyota, str);
		if (admin) {
			m_add.ShowWindow(SW_SHOW);
			m_delete.ShowWindow(SW_SHOW);
			m_button_update.ShowWindow(SW_SHOW);
			m_static_company.SetWindowTextW(_T("Toyota"));
			showToyota();
			m_static_model.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetModel());
			m_static_price.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetPrice());
			m_static_color.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetColor());
			m_static_maxspeed.SetWindowTextW(t[Combo_Toyota].PrivateCar::GetSeatNumber());
			m_static_range.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetRange());
			m_static_instock.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetAmount());
		}
		else {
			showToyota();
			m_static_company.SetWindowTextW(_T("Toyota"));
			m_static_model.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetModel());
			m_static_price.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetPrice());
			m_static_color.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetColor());
			m_static_maxspeed.SetWindowTextW(t[Combo_Toyota].PrivateCar::GetSeatNumber());
			m_static_range.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetRange());
			m_static_instock.SetWindowTextW(t[Combo_Toyota].ElectricCar::GetAmount());
			m_submit_button.SetWindowTextW(_T("BUY"));
		}
	}
	ReturnCounter = 0;
}
void CMFCApplication3Dlg::OnSelchangeCombo3()
{
	audi = true;
	CString str;
	UpdateData(TRUE);
	m_return.ShowWindow(SW_SHOW);
	str = text_audi;
	int n;
	Combo_Audi = m_audi_combo.GetCurSel();
	if (Combo_Audi != LB_ERR)
	{
		m_audi_combo.GetLBText(Combo_Audi, str);
		if (admin) {
			m_add.ShowWindow(SW_SHOW);
			m_delete.ShowWindow(SW_SHOW);
			m_button_update.ShowWindow(SW_SHOW);
			showAudi();
			m_static_company.SetWindowTextW(_T("Audi"));
			m_static_model.SetWindowTextW(a[Combo_Audi].SportCar::GetModel());
			m_static_price.SetWindowTextW(a[Combo_Audi].SportCar::GetPrice());
			m_static_color.SetWindowTextW(a[Combo_Audi].SportCar::GetColor());
			m_static_maxspeed.SetWindowTextW(a[Combo_Audi].SportCar::GetMaxSpeed());
			m_static_range.SetWindowTextW(a[Combo_Audi].PrivateCar::GetSeatNumber());
			m_static_instock.SetWindowTextW(a[Combo_Audi].SportCar::GetAmount());
			
		}
		else {
			showAudi();
			m_static_company.SetWindowTextW(_T("Audi"));
			m_static_model.SetWindowTextW(a[Combo_Audi].SportCar::GetModel());
			m_static_price.SetWindowTextW(a[Combo_Audi].SportCar::GetPrice());
			m_static_color.SetWindowTextW(a[Combo_Audi].SportCar::GetColor());
			m_static_maxspeed.SetWindowTextW(a[Combo_Audi].SportCar::GetMaxSpeed());
			m_static_range.SetWindowTextW(a[Combo_Audi].PrivateCar::GetSeatNumber());
			m_static_instock.SetWindowTextW(a[Combo_Audi].SportCar::GetAmount());
			m_submit_button.SetWindowTextW(_T("BUY"));
		}
	}
	ReturnCounter = 0;
}


void CMFCApplication3Dlg::OnEnChangeEdit12()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CMFCApplication3Dlg::OnClickedAdd()//ADD
{
	ShowAdd();
	CString str;
	m_edit2.GetWindowText(str);
	if (str!="")
	{
		if (tesla == true)
			AddTesla();
		else if (toyota == true)
			AddToyota();
		else if (audi == true)
			AddAudi();
	}
}
void CMFCApplication3Dlg::ShowAdd()
{
	m_edit2.ShowWindow(SW_SHOW);
	m_edit3.ShowWindow(SW_SHOW);
	m_edit4.ShowWindow(SW_SHOW);
	m_edit5.ShowWindow(SW_SHOW);
	m_edit6.ShowWindow(SW_SHOW);
	m_edit_stock.ShowWindow(SW_SHOW);
	m_delete.ShowWindow(SW_HIDE);
	m_button_update.ShowWindow(SW_HIDE);
	m_static_model.ShowWindow(SW_HIDE);
	m_static_color.ShowWindow(SW_HIDE);
	m_static_instock.ShowWindow(SW_HIDE);
	m_static_maxspeed.ShowWindow(SW_HIDE);
	m_static_price.ShowWindow(SW_HIDE);
	m_static_range.ShowWindow(SW_HIDE);
	m_tesla_combo.ShowWindow(SW_HIDE);
	m_toyota_combo.ShowWindow(SW_HIDE);
	m_audi_combo.ShowWindow(SW_HIDE);

}
void CMFCApplication3Dlg::AddTesla()
{
	UpdateData(FALSE);
	CString model, color, maxspeed, range, amount, price;
	m_edit2.GetWindowText(model);
	m_edit3.GetWindowText(price);
	m_edit4.GetWindowText(color);
	m_edit5.GetWindowText(range);
	m_edit6.GetWindowText(maxspeed);
	m_edit_stock.GetWindowText(amount);
	for (int i = 0; i < amount.GetLength(); i++) {
		if (!std::isdigit(amount[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	for (int i = 0; i < price.GetLength(); i++) {
		if (!std::isdigit(price[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	s[CurTesla].ElectricCar::SetModel(model);
	s[CurTesla].ElectricCar::SetPrice(price);
	s[CurTesla].ElectricCar::SetColor(color);
	s[CurTesla].ElectricCar::SetRange(range);
	s[CurTesla].SportCar::SetMaxSpeed(maxspeed);
	s[CurTesla].ElectricCar::SetAmount(amount);
	CString str;
	str.Format(s[CurTesla].ElectricCar::GetModel(), 1);
	m_tesla_combo.AddString(str);
	CurTesla++;
}
void CMFCApplication3Dlg::AddToyota() 
{
	UpdateData(FALSE);
	CStringW model, color, maxspeed, range, amount, price;
	m_edit2.GetWindowText(model);
	m_edit3.GetWindowText(price);
	m_edit4.GetWindowText(color);
	m_edit5.GetWindowText(range);
	m_edit6.GetWindowText(maxspeed);
	m_edit_stock.GetWindowText(amount);
	for (int i = 0; i < amount.GetLength(); i++) {
		if (!std::isdigit(amount[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	for (int i = 0; i < price.GetLength(); i++) {
		if (!std::isdigit(price[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	t[CurToyota].ElectricCar::SetModel(model);
	t[CurToyota].ElectricCar::SetPrice(price);
	t[CurToyota].ElectricCar::SetColor(color);
	t[CurToyota].ElectricCar::SetRange(range);
	t[CurToyota].PrivateCar::SetSeatNumber(maxspeed);
	t[CurToyota].ElectricCar::SetAmount(amount);
	CString str;
	str.Format(t[CurToyota].ElectricCar::GetModel(), 1);
	m_toyota_combo.AddString(str);
	CurToyota++;
}
void CMFCApplication3Dlg::AddAudi() 
{
	UpdateData(FALSE);
	CStringW model, color, maxspeed, seat, amount, price;
	m_edit2.GetWindowText(model);
	m_edit3.GetWindowText(price);
	m_edit4.GetWindowText(color);
	m_edit5.GetWindowText(seat);
	m_edit6.GetWindowText(maxspeed);
	m_edit_stock.GetWindowText(amount);
	for (int i = 0; i < amount.GetLength(); i++) {
		if (!std::isdigit(amount[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	for (int i = 0; i < price.GetLength(); i++) {
		if (!std::isdigit(price[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	a[CurAudi].SportCar::SetModel(model);
	a[CurAudi].SportCar::SetPrice(price);
	a[CurAudi].SportCar::SetColor(color);
	a[CurAudi].SportCar::SetMaxSpeed(maxspeed);
	a[CurAudi].PrivateCar::SetSeatNumber(seat);
	a[CurAudi].SportCar::SetAmount(amount);
	CString str;
	str.Format(a[CurAudi].SportCar::GetModel(), 1);
	m_audi_combo.AddString(str);
	CurAudi++;
}
void CMFCApplication3Dlg::OnClickedDelete()//Delete
{
	UpdateData(TRUE);
	ShowDelete();
	
	CString str;
	m_edit_delete.GetWindowText(str);
	for (int i = 0; i < str.GetLength(); i++) {
		if (!std::isdigit(str[i])) {
			AfxMessageBox(_T("You can enter only digits!"));
			OnBnClickedOk();
			break;
		}
	}
	if (str != "")
	{
		if (tesla == true)
			DeleteTesla(str);
		else if (toyota == true)
			DeleteToyota(str);
		else if (audi == true)
			DeleteAudi(str);
	}
}
void CMFCApplication3Dlg::ShowDelete()
{
	m_edit_delete.ShowWindow(SW_SHOW);
	delete_static.ShowWindow(SW_SHOW);
	m_add.ShowWindow(SW_HIDE);
	m_button_update.ShowWindow(SW_HIDE);
	m_tesla_combo.ShowWindow(SW_HIDE);
	m_toyota_combo.ShowWindow(SW_HIDE);
	m_audi_combo.ShowWindow(SW_HIDE);
}
void CMFCApplication3Dlg::DeleteTesla(CString row)
{
	Tesla* TempArr = new Tesla[32];
	int i_row = _ttoi(row), j=0;
	for (int i = 0; i < 32; i++)
	{
		if (i!=(i_row-1))
		{
			TempArr[j].ElectricCar::SetModel(s[i].ElectricCar::GetModel());
			TempArr[j].ElectricCar::SetColor(s[i].ElectricCar::GetColor());
			TempArr[j].ElectricCar::SetPrice(s[i].ElectricCar::GetPrice());
			TempArr[j].ElectricCar::SetRange(s[i].ElectricCar::GetRange());
			TempArr[j].SportCar::SetMaxSpeed(s[i].SportCar::GetMaxSpeed());
			TempArr[j].ElectricCar::SetAmount(s[i].ElectricCar::GetAmount());
			j++;
		}
		
		if (i > CurTesla)
			break;
	}
	for (int i = 0; i < 32; i++)
	{
		s[i].ElectricCar::SetModel(TempArr[i].ElectricCar::GetModel());
		s[i].ElectricCar::SetColor(TempArr[i].ElectricCar::GetColor());
		s[i].ElectricCar::SetPrice(TempArr[i].ElectricCar::GetPrice());
		s[i].ElectricCar::SetRange(TempArr[i].ElectricCar::GetRange());
		s[i].SportCar::SetMaxSpeed(TempArr[i].SportCar::GetMaxSpeed());
		s[i].ElectricCar::SetAmount(TempArr[i].ElectricCar::GetAmount());
		if (i > CurTesla)
			break;
	}
	m_tesla_combo.DeleteString(i_row-1);
	CurTesla--;
}
void CMFCApplication3Dlg::DeleteToyota(CString row)
{
	Toyota* TempArr = new Toyota[32];
	int i_row = _ttoi(row), j = 0;
	for (int i = 0; i < 32; i++)
	{
		if (i != (i_row - 1))
		{
			TempArr[j].ElectricCar::SetModel(t[i].ElectricCar::GetModel());
			TempArr[j].ElectricCar::SetColor(t[i].ElectricCar::GetColor());
			TempArr[j].ElectricCar::SetPrice(t[i].ElectricCar::GetPrice());
			TempArr[j].ElectricCar::SetRange(t[i].ElectricCar::GetRange());
			TempArr[j].PrivateCar::SetSeatNumber(t[i].PrivateCar::GetSeatNumber());
			TempArr[j].ElectricCar::SetAmount(t[i].ElectricCar::GetAmount());
			j++;
		}
		if (i > CurToyota)
			break;
	}
	for (int i = 0; i < 32; i++)
	{
		t[i].ElectricCar::SetModel(TempArr[i].ElectricCar::GetModel());
		t[i].ElectricCar::SetColor(TempArr[i].ElectricCar::GetColor());
		t[i].ElectricCar::SetPrice(TempArr[i].ElectricCar::GetPrice());
		t[i].ElectricCar::SetRange(TempArr[i].ElectricCar::GetRange());
		t[i].PrivateCar::SetSeatNumber(TempArr[i].PrivateCar::GetSeatNumber());
		t[i].ElectricCar::SetAmount(TempArr[i].ElectricCar::GetAmount());
		if (i > CurToyota)
			break;
	}
	m_toyota_combo.DeleteString(i_row - 1);
	CurToyota--;
}
void CMFCApplication3Dlg::DeleteAudi(CString row)
{
	Audi* TempArr = new Audi[32];
	int i_row = _ttoi(row), j = 0;
	for (int i = 0; i < 32; i++)
	{
		if (i != (i_row - 1))
		{
			TempArr[j].SportCar::SetModel(a[i].SportCar::GetModel());
			TempArr[j].SportCar::SetColor(a[i].SportCar::GetColor());
			TempArr[j].SportCar::SetPrice(a[i].SportCar::GetPrice());
			TempArr[j].SportCar::SetMaxSpeed(a[i].SportCar::GetMaxSpeed());
			TempArr[j].PrivateCar::SetSeatNumber(a[i].PrivateCar::GetSeatNumber());
			TempArr[j].SportCar::SetAmount(a[i].SportCar::GetAmount());
			j++;
		}
		if (i> CurAudi)
			break;
	}
	for (int i = 0; i < 32; i++)
	{
		a[i].SportCar::SetModel(TempArr[i].SportCar::GetModel());
		a[i].SportCar::SetColor(TempArr[i].SportCar::GetColor());
		a[i].SportCar::SetPrice(TempArr[i].SportCar::GetPrice());
		a[i].SportCar::SetMaxSpeed(TempArr[i].SportCar::GetMaxSpeed());
		a[i].PrivateCar::SetSeatNumber(TempArr[i].PrivateCar::GetSeatNumber());
		a[i].SportCar::SetAmount(TempArr[i].SportCar::GetAmount());
		if (i > CurAudi)
			break;
	}
	m_audi_combo.DeleteString(i_row - 1);
	CurAudi--;
}

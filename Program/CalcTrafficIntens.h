//---------------------------------------------------------------------------
#ifndef CalcTrafficIntensH
#define CalcTrafficIntensH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <VCLTee.Chart.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <VCLTee.Series.hpp>
#include "cspin.h"
//---------------------------------------------------------------------------
 #ifdef SUBST_SG
 namespace MySG{
 class TStringGrid: public Grids::TStringGrid{
	public:
		 using Grids::TStringGrid::DeleteColumn;
		 using Grids::TStringGrid::MoveColumn;
		 using Grids::TStringGrid::InvalidateCell;
 };
 }
 #define TStringGrid MySG::TStringGrid

 #endif SUBST_SG
 typedef struct DataStruct
	{
		int Intensity; //������������� � ���� ���
		int Year;      //���
	};

/*������ ������, ��������� �� ��������(Intensiti � Year), � ������� �����
  ��������� �������� ������*/
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *mFileDialog;
	TMenuItem *mFileRed;
	TMenuItem *menuResults;
	TMenuItem *menuNew;
	TMenuItem *menuOpenF;
	TMenuItem *menuSave;
	TMenuItem *menuSaveAs;
	TMenuItem *menuSeparator;
	TMenuItem *menuExit;
	TMenuItem *menuColAdd;
	TMenuItem *menuColIns;
	TMenuItem *menuDelete;
	TMenuItem *menuRezCalculate;
	TMenuItem *menuSaveVal;
	TMenuItem *menuSaveGraph;
	TLabel *lYearCount;
	TButton *btYearCount;
	TGroupBox *gbRed;
	TButton *btEditAdd;
	TButton *btEditDelete;
	TButton *btEditInsert;
	TGroupBox *gbRez;
	TButton *btRezCalculate;
	TButton *btRezSaveAs;
	TCheckBox *cbEditingM;
	TCheckBox *cbCorrectColumnWidth;
	TMemo *memLinearApr;
	TStringGrid *strgrData;
	TStatusBar *StatusBar;
	TChart *aprGr;
	TFontDialog *FontDialog1;
	TOpenDialog *OpenFile;
	TSaveDialog *SaveFile;
	TMenuItem *menuView;
	TMenuItem *menuEditFont;
	TMenuItem *menuCorrectColumnWidth;
	TLineSeries *Series1;
	TLineSeries *Series2;
	TTimer *Timer;
	TEdit *teYearCount;
	void __fastcall btYearCountClick(TObject *Sender);
	void __fastcall btEditFontClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btEditAddClick(TObject *Sender);
	void __fastcall btEditDeleteClick(TObject *Sender);
	void __fastcall btRezCalculateClick(TObject *Sender);
	void __fastcall menuOpenFClick(TObject *Sender);
	void __fastcall cbCorrectColumnWidthClick(TObject *Sender);
	void __fastcall menuSaveAsClick(TObject *Sender);
	void __fastcall menuSaveClick(TObject *Sender);
	void __fastcall cbEditingMClick(TObject *Sender);
	void __fastcall menuExitClick(TObject *Sender);
	void __fastcall menuNewClick(TObject *Sender);
	void __fastcall menuEditFontClick(TObject *Sender);
	void __fastcall strgrDataColumnMoved(TObject *Sender, int FromIndex, int ToIndex);
	void __fastcall strgrDataDrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State);
	void __fastcall strgrDataKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall teYearCountKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall strgrDataGetEditText(TObject *Sender, int ACol, int ARow, UnicodeString &Value);
	void __fastcall strgrDataSetEditText(TObject *Sender, int ACol, int ARow, const UnicodeString Value);
	void __fastcall strgrDataSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall TimerTimer(TObject *Sender);
	void __fastcall menuSaveValClick(TObject *Sender);
	void __fastcall menuSaveGraphClick(TObject *Sender);
	void __fastcall btEditInsertClick(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall btRezSaveAsClick(TObject *Sender);
	void __fastcall strgrDataDblClick(TObject *Sender);
	void __fastcall OpenFileShow(TObject *Sender);




private:	// User declarations

String CCText;//���������� ��� �������� �������� ��� �������������� ������ � �������
DynamicArray<DataStruct> Data;
int rowNmbAndSortKind; //��� ����������� ���� ����������

public:		// User declarations

	__fastcall TForm1(TComponent* Owner);
};


//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

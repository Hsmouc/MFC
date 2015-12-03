; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCalculatorDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Calculator.h"

ClassCount=3
Class1=CCalculatorApp
Class2=CCalculatorDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_CALCULATOR_DIALOG

[CLS:CCalculatorApp]
Type=0
HeaderFile=Calculator.h
ImplementationFile=Calculator.cpp
Filter=N

[CLS:CCalculatorDlg]
Type=0
HeaderFile=CalculatorDlg.h
ImplementationFile=CalculatorDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_SUB

[CLS:CAboutDlg]
Type=0
HeaderFile=CalculatorDlg.h
ImplementationFile=CalculatorDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_CALCULATOR_DIALOG]
Type=1
Class=CCalculatorDlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDC_INPUT,edit,1350631554
Control3=IDC_ADD,button,1342242816
Control4=IDC_CLEAR,button,1342242816
Control5=IDC_CALC,button,1342242816
Control6=IDC_SUB,button,1342242816
Control7=IDC_DIV,button,1342242816
Control8=IDC_RECIPROCAL,button,1342242816
Control9=IDC_MUL,button,1342242816
Control10=IDC_SQRT,button,1342242816


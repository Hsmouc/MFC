; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSatelliteView
LastTemplate=CColorDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "satellite.h"
LastPage=0

ClassCount=8
Class1=CSatelliteApp
Class2=CSatelliteDoc
Class3=CSatelliteView
Class4=CMainFrame

ResourceCount=4
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX
Class6=Radii
Resource3=IDD_DIALOG1
Class7=Width
Class8=COrbitcolor
Resource4=IDD_DIALOG2

[CLS:CSatelliteApp]
Type=0
HeaderFile=satellite.h
ImplementationFile=satellite.cpp
Filter=N

[CLS:CSatelliteDoc]
Type=0
HeaderFile=satelliteDoc.h
ImplementationFile=satelliteDoc.cpp
Filter=N

[CLS:CSatelliteView]
Type=0
HeaderFile=satelliteView.h
ImplementationFile=satelliteView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CSatelliteView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_Color




[CLS:CAboutDlg]
Type=0
HeaderFile=satellite.cpp
ImplementationFile=satellite.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=ID_Start
Command18=ID_Stop
Command19=ID_High
Command20=ID_Medium
Command21=ID_Low
Command22=ID_Width
Command23=ID_Radii
Command24=ID_Color
CommandCount=24

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_DIALOG1]
Type=1
Class=Radii
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_EDIT2,edit,1350631552

[CLS:Radii]
Type=0
HeaderFile=Radii.h
ImplementationFile=Radii.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT2
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=Width
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC2,static,1342308352
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_EDIT1,edit,1350631552

[CLS:Width]
Type=0
HeaderFile=Width.h
ImplementationFile=Width.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT1

[CLS:COrbitcolor]
Type=0
HeaderFile=Orbitcolor.h
ImplementationFile=Orbitcolor.cpp
BaseClass=CColorDialog
Filter=D


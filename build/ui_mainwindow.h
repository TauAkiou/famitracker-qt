/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt-gui/FrameView.hpp"
#include "qt-gui/PatternView.hpp"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionSave_As;
    QAction *action_Create_NSF;
    QAction *actionCreate_WAV;
    QAction *actionImport_MIDI;
    QAction *action_Configuration;
    QAction *actionE_xit;
    QAction *actionAdd_instrument;
    QAction *actionRemove_instrument;
    QAction *action_ViewToolbar;
    QAction *action_ViewStatusBar;
    QAction *action_ViewControlpanel;
    QAction *action_Play;
    QAction *actionPlay_and_loop;
    QAction *action_Stop;
    QAction *actionToggle_edit_mode;
    QAction *actionEdit_instrument;
    QAction *actionNo_recent_files;
    QAction *actionModule_Properties;
    QAction *action_About;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    gui::PatternView *patternView;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuRecent;
    QMenu *menu_View;
    QMenu *menuT_racker;
    QMenu *menu_Module;
    QMenu *menu_Help;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *controlPanel;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *changeAll;
    gui::FrameView *frameView;
    QToolButton *incPattern;
    QToolButton *decPattern;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *speed;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *tempo;
    QSpinBox *rows;
    QSpinBox *frames;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QSpinBox *step;
    QCheckBox *keyRepetition;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *title;
    QLineEdit *author;
    QLineEdit *copyright;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QComboBox *songs;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QListWidget *instruments;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *addInstrument_button;
    QToolButton *removeInstrument_button;
    QToolButton *editInstrument_button;
    QLineEdit *instrumentName;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1004, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        action_Create_NSF = new QAction(MainWindow);
        action_Create_NSF->setObjectName(QString::fromUtf8("action_Create_NSF"));
        actionCreate_WAV = new QAction(MainWindow);
        actionCreate_WAV->setObjectName(QString::fromUtf8("actionCreate_WAV"));
        actionImport_MIDI = new QAction(MainWindow);
        actionImport_MIDI->setObjectName(QString::fromUtf8("actionImport_MIDI"));
        action_Configuration = new QAction(MainWindow);
        action_Configuration->setObjectName(QString::fromUtf8("action_Configuration"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionAdd_instrument = new QAction(MainWindow);
        actionAdd_instrument->setObjectName(QString::fromUtf8("actionAdd_instrument"));
        actionRemove_instrument = new QAction(MainWindow);
        actionRemove_instrument->setObjectName(QString::fromUtf8("actionRemove_instrument"));
        action_ViewToolbar = new QAction(MainWindow);
        action_ViewToolbar->setObjectName(QString::fromUtf8("action_ViewToolbar"));
        action_ViewToolbar->setCheckable(true);
        action_ViewToolbar->setChecked(true);
        action_ViewStatusBar = new QAction(MainWindow);
        action_ViewStatusBar->setObjectName(QString::fromUtf8("action_ViewStatusBar"));
        action_ViewStatusBar->setCheckable(true);
        action_ViewStatusBar->setChecked(true);
        action_ViewControlpanel = new QAction(MainWindow);
        action_ViewControlpanel->setObjectName(QString::fromUtf8("action_ViewControlpanel"));
        action_ViewControlpanel->setCheckable(true);
        action_ViewControlpanel->setChecked(true);
        action_Play = new QAction(MainWindow);
        action_Play->setObjectName(QString::fromUtf8("action_Play"));
        actionPlay_and_loop = new QAction(MainWindow);
        actionPlay_and_loop->setObjectName(QString::fromUtf8("actionPlay_and_loop"));
        action_Stop = new QAction(MainWindow);
        action_Stop->setObjectName(QString::fromUtf8("action_Stop"));
        actionToggle_edit_mode = new QAction(MainWindow);
        actionToggle_edit_mode->setObjectName(QString::fromUtf8("actionToggle_edit_mode"));
        actionToggle_edit_mode->setCheckable(true);
        actionEdit_instrument = new QAction(MainWindow);
        actionEdit_instrument->setObjectName(QString::fromUtf8("actionEdit_instrument"));
        actionNo_recent_files = new QAction(MainWindow);
        actionNo_recent_files->setObjectName(QString::fromUtf8("actionNo_recent_files"));
        actionNo_recent_files->setEnabled(false);
        actionModule_Properties = new QAction(MainWindow);
        actionModule_Properties->setObjectName(QString::fromUtf8("actionModule_Properties"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        patternView = new gui::PatternView(centralwidget);
        patternView->setObjectName(QString::fromUtf8("patternView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(patternView->sizePolicy().hasHeightForWidth());
        patternView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(patternView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1004, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuRecent = new QMenu(menu_File);
        menuRecent->setObjectName(QString::fromUtf8("menuRecent"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menuT_racker = new QMenu(menubar);
        menuT_racker->setObjectName(QString::fromUtf8("menuT_racker"));
        menu_Module = new QMenu(menubar);
        menu_Module->setObjectName(QString::fromUtf8("menu_Module"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        controlPanel = new QDockWidget(MainWindow);
        controlPanel->setObjectName(QString::fromUtf8("controlPanel"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        changeAll = new QCheckBox(dockWidgetContents);
        changeAll->setObjectName(QString::fromUtf8("changeAll"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(changeAll->sizePolicy().hasHeightForWidth());
        changeAll->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(changeAll, 1, 2, 1, 1);

        frameView = new gui::FrameView(dockWidgetContents);
        frameView->setObjectName(QString::fromUtf8("frameView"));

        gridLayout->addWidget(frameView, 0, 0, 1, 3);

        incPattern = new QToolButton(dockWidgetContents);
        incPattern->setObjectName(QString::fromUtf8("incPattern"));
        incPattern->setMinimumSize(QSize(32, 0));

        gridLayout->addWidget(incPattern, 1, 0, 1, 1);

        decPattern = new QToolButton(dockWidgetContents);
        decPattern->setObjectName(QString::fromUtf8("decPattern"));
        decPattern->setMinimumSize(QSize(32, 0));

        gridLayout->addWidget(decPattern, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        speed = new QSpinBox(groupBox);
        speed->setObjectName(QString::fromUtf8("speed"));

        formLayout->setWidget(0, QFormLayout::FieldRole, speed);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        tempo = new QSpinBox(groupBox);
        tempo->setObjectName(QString::fromUtf8("tempo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, tempo);

        rows = new QSpinBox(groupBox);
        rows->setObjectName(QString::fromUtf8("rows"));

        formLayout->setWidget(2, QFormLayout::FieldRole, rows);

        frames = new QSpinBox(groupBox);
        frames->setObjectName(QString::fromUtf8("frames"));

        formLayout->setWidget(3, QFormLayout::FieldRole, frames);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        step = new QSpinBox(groupBox_2);
        step->setObjectName(QString::fromUtf8("step"));
        step->setMaximum(256);
        step->setValue(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, step);

        keyRepetition = new QCheckBox(groupBox_2);
        keyRepetition->setObjectName(QString::fromUtf8("keyRepetition"));
        keyRepetition->setChecked(true);

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, keyRepetition);


        verticalLayout_3->addWidget(groupBox_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_3 = new QGroupBox(dockWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        title = new QLineEdit(groupBox_3);
        title->setObjectName(QString::fromUtf8("title"));

        verticalLayout_6->addWidget(title);

        author = new QLineEdit(groupBox_3);
        author->setObjectName(QString::fromUtf8("author"));

        verticalLayout_6->addWidget(author);

        copyright = new QLineEdit(groupBox_3);
        copyright->setObjectName(QString::fromUtf8("copyright"));

        verticalLayout_6->addWidget(copyright);


        verticalLayout_4->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        songs = new QComboBox(groupBox_4);
        songs->setObjectName(QString::fromUtf8("songs"));

        verticalLayout_7->addWidget(songs);


        verticalLayout_4->addWidget(groupBox_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        widget_3 = new QWidget(dockWidgetContents);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        instruments = new QListWidget(widget_3);
        instruments->setObjectName(QString::fromUtf8("instruments"));
        instruments->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        instruments->setProperty("isWrapping", QVariant(true));
        instruments->setResizeMode(QListView::Adjust);

        gridLayout_2->addWidget(instruments, 0, 1, 1, 3);

        frame = new QFrame(widget_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addInstrument_button = new QToolButton(frame);
        addInstrument_button->setObjectName(QString::fromUtf8("addInstrument_button"));
        addInstrument_button->setPopupMode(QToolButton::MenuButtonPopup);
        addInstrument_button->setAutoRaise(true);

        horizontalLayout->addWidget(addInstrument_button);

        removeInstrument_button = new QToolButton(frame);
        removeInstrument_button->setObjectName(QString::fromUtf8("removeInstrument_button"));
        removeInstrument_button->setAutoRaise(true);

        horizontalLayout->addWidget(removeInstrument_button);

        editInstrument_button = new QToolButton(frame);
        editInstrument_button->setObjectName(QString::fromUtf8("editInstrument_button"));
        editInstrument_button->setAutoRaise(true);

        horizontalLayout->addWidget(editInstrument_button);

        instrumentName = new QLineEdit(frame);
        instrumentName->setObjectName(QString::fromUtf8("instrumentName"));

        horizontalLayout->addWidget(instrumentName);


        gridLayout_2->addWidget(frame, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(widget_3);

        controlPanel->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::TopDockWidgetArea, controlPanel);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Module->menuAction());
        menubar->addAction(menuT_racker->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionNew);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_As);
        menu_File->addSeparator();
        menu_File->addAction(action_Create_NSF);
        menu_File->addAction(actionCreate_WAV);
        menu_File->addAction(actionImport_MIDI);
        menu_File->addSeparator();
        menu_File->addAction(action_Configuration);
        menu_File->addSeparator();
        menu_File->addAction(menuRecent->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menuRecent->addAction(actionNo_recent_files);
        menu_View->addAction(action_ViewToolbar);
        menu_View->addAction(action_ViewStatusBar);
        menu_View->addAction(action_ViewControlpanel);
        menuT_racker->addAction(action_Play);
        menuT_racker->addAction(actionPlay_and_loop);
        menuT_racker->addAction(action_Stop);
        menu_Module->addAction(actionModule_Properties);
        menu_Help->addAction(action_About);
        menu_Help->addAction(actionAbout_Qt);
        toolBar->addAction(actionNew);
        toolBar->addAction(action_Open);
        toolBar->addAction(action_Save);
        toolBar->addSeparator();
        toolBar->addAction(action_Play);
        toolBar->addAction(action_Stop);
        toolBar->addAction(actionToggle_edit_mode);
        toolBar->addSeparator();
        toolBar->addAction(action_Create_NSF);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionNew->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "New", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save &As...", nullptr));
        action_Create_NSF->setText(QCoreApplication::translate("MainWindow", "&Create NSF...", nullptr));
#if QT_CONFIG(shortcut)
        action_Create_NSF->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreate_WAV->setText(QCoreApplication::translate("MainWindow", "Create WAV...", nullptr));
        actionImport_MIDI->setText(QCoreApplication::translate("MainWindow", "Import MIDI...", nullptr));
        action_Configuration->setText(QCoreApplication::translate("MainWindow", "&Configuration", nullptr));
        actionE_xit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actionE_xit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_instrument->setText(QCoreApplication::translate("MainWindow", "Add instrument", nullptr));
        actionRemove_instrument->setText(QCoreApplication::translate("MainWindow", "Remove instrument", nullptr));
        action_ViewToolbar->setText(QCoreApplication::translate("MainWindow", "&Toolbar", nullptr));
        action_ViewStatusBar->setText(QCoreApplication::translate("MainWindow", "&Status Bar", nullptr));
        action_ViewControlpanel->setText(QCoreApplication::translate("MainWindow", "Control panel", nullptr));
        action_Play->setText(QCoreApplication::translate("MainWindow", "&Play", nullptr));
        actionPlay_and_loop->setText(QCoreApplication::translate("MainWindow", "Play and loop", nullptr));
        action_Stop->setText(QCoreApplication::translate("MainWindow", "&Stop", nullptr));
        actionToggle_edit_mode->setText(QCoreApplication::translate("MainWindow", "Toggle edit mode", nullptr));
        actionEdit_instrument->setText(QCoreApplication::translate("MainWindow", "Edit instrument", nullptr));
        actionNo_recent_files->setText(QCoreApplication::translate("MainWindow", "No recent files", nullptr));
        actionModule_Properties->setText(QCoreApplication::translate("MainWindow", "Module Properties", nullptr));
#if QT_CONFIG(shortcut)
        actionModule_Properties->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About->setText(QCoreApplication::translate("MainWindow", "&About FamiTracker CX", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt...", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuRecent->setTitle(QCoreApplication::translate("MainWindow", "Recent", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuT_racker->setTitle(QCoreApplication::translate("MainWindow", "T&racker", nullptr));
        menu_Module->setTitle(QCoreApplication::translate("MainWindow", "&Module", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Toolbar", nullptr));
        controlPanel->setWindowTitle(QCoreApplication::translate("MainWindow", "Control Panel", nullptr));
        changeAll->setText(QCoreApplication::translate("MainWindow", "Change all", nullptr));
        incPattern->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        decPattern->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Song settings", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Tempo", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rows", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Frames", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Edit settings", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        keyRepetition->setText(QCoreApplication::translate("MainWindow", "Key repetition", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Song information", nullptr));
        title->setPlaceholderText(QCoreApplication::translate("MainWindow", "(title)", nullptr));
        author->setPlaceholderText(QCoreApplication::translate("MainWindow", "(author)", nullptr));
        copyright->setPlaceholderText(QCoreApplication::translate("MainWindow", "(copyright)", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Songs", nullptr));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

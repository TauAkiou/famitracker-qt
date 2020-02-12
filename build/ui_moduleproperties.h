/********************************************************************************
** Form generated from reading UI file 'moduleproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULEPROPERTIES_H
#define UI_MODULEPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuleProperties
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *trackTitle;
    QLabel *label;
    QListWidget *tracksList;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *add_button;
    QPushButton *remove_button;
    QPushButton *moveup_button;
    QPushButton *movedown_button;
    QPushButton *importfile_button;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QComboBox *expansionSounds;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QComboBox *vibrato;

    void setupUi(QDialog *ModuleProperties)
    {
        if (ModuleProperties->objectName().isEmpty())
            ModuleProperties->setObjectName(QString::fromUtf8("ModuleProperties"));
        ModuleProperties->resize(401, 519);
        gridLayout_2 = new QGridLayout(ModuleProperties);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(ModuleProperties);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        trackTitle = new QLineEdit(widget);
        trackTitle->setObjectName(QString::fromUtf8("trackTitle"));

        gridLayout->addWidget(trackTitle, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        tracksList = new QListWidget(widget);
        tracksList->setObjectName(QString::fromUtf8("tracksList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tracksList->sizePolicy().hasHeightForWidth());
        tracksList->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tracksList, 1, 0, 1, 2);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        add_button = new QPushButton(widget_2);
        add_button->setObjectName(QString::fromUtf8("add_button"));

        verticalLayout_2->addWidget(add_button);

        remove_button = new QPushButton(widget_2);
        remove_button->setObjectName(QString::fromUtf8("remove_button"));

        verticalLayout_2->addWidget(remove_button);

        moveup_button = new QPushButton(widget_2);
        moveup_button->setObjectName(QString::fromUtf8("moveup_button"));

        verticalLayout_2->addWidget(moveup_button);

        movedown_button = new QPushButton(widget_2);
        movedown_button->setObjectName(QString::fromUtf8("movedown_button"));

        verticalLayout_2->addWidget(movedown_button);

        importfile_button = new QPushButton(widget_2);
        importfile_button->setObjectName(QString::fromUtf8("importfile_button"));

        verticalLayout_2->addWidget(importfile_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget_2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ModuleProperties);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 2);

        groupBox_2 = new QGroupBox(ModuleProperties);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        expansionSounds = new QComboBox(groupBox_2);
        expansionSounds->setObjectName(QString::fromUtf8("expansionSounds"));

        verticalLayout->addWidget(expansionSounds);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(ModuleProperties);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));

        gridLayout_2->addWidget(groupBox_3, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(ModuleProperties);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        vibrato = new QComboBox(groupBox_4);
        vibrato->setObjectName(QString::fromUtf8("vibrato"));

        verticalLayout_3->addWidget(vibrato);


        gridLayout_2->addWidget(groupBox_4, 2, 0, 1, 2);


        retranslateUi(ModuleProperties);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModuleProperties, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModuleProperties, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModuleProperties);
    } // setupUi

    void retranslateUi(QDialog *ModuleProperties)
    {
        ModuleProperties->setWindowTitle(QCoreApplication::translate("ModuleProperties", "Module Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ModuleProperties", "Song editor", nullptr));
        label->setText(QCoreApplication::translate("ModuleProperties", "Title", nullptr));
        add_button->setText(QCoreApplication::translate("ModuleProperties", "Add", nullptr));
        remove_button->setText(QCoreApplication::translate("ModuleProperties", "Remove", nullptr));
        moveup_button->setText(QCoreApplication::translate("ModuleProperties", "Move up", nullptr));
        movedown_button->setText(QCoreApplication::translate("ModuleProperties", "Move down", nullptr));
        importfile_button->setText(QCoreApplication::translate("ModuleProperties", "Import file", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ModuleProperties", "Expansion sound", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ModuleProperties", "Channels", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ModuleProperties", "Vibrato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModuleProperties: public Ui_ModuleProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULEPROPERTIES_H

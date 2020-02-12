/********************************************************************************
** Form generated from reading UI file 'createwav.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWAV_H
#define UI_CREATEWAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateWAV
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *select_playCount;
    QLabel *label;
    QSpinBox *playCount;
    QRadioButton *select_playForTime;
    QTimeEdit *playForTime;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateWAV)
    {
        if (CreateWAV->objectName().isEmpty())
            CreateWAV->setObjectName(QString::fromUtf8("CreateWAV"));
        CreateWAV->resize(340, 160);
        verticalLayout = new QVBoxLayout(CreateWAV);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(CreateWAV);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        select_playCount = new QRadioButton(groupBox);
        select_playCount->setObjectName(QString::fromUtf8("select_playCount"));
        select_playCount->setChecked(true);

        gridLayout->addWidget(select_playCount, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 3, 1, 1);

        playCount = new QSpinBox(groupBox);
        playCount->setObjectName(QString::fromUtf8("playCount"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playCount->sizePolicy().hasHeightForWidth());
        playCount->setSizePolicy(sizePolicy);
        playCount->setValue(1);

        gridLayout->addWidget(playCount, 1, 2, 1, 1);

        select_playForTime = new QRadioButton(groupBox);
        select_playForTime->setObjectName(QString::fromUtf8("select_playForTime"));

        gridLayout->addWidget(select_playForTime, 2, 0, 1, 1);

        playForTime = new QTimeEdit(groupBox);
        playForTime->setObjectName(QString::fromUtf8("playForTime"));
        playForTime->setWrapping(true);
        playForTime->setDisplayFormat(QString::fromUtf8("mm:ss"));
        playForTime->setTimeSpec(Qt::OffsetFromUTC);

        gridLayout->addWidget(playForTime, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(CreateWAV);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CreateWAV);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateWAV, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateWAV, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateWAV);
    } // setupUi

    void retranslateUi(QDialog *CreateWAV)
    {
        CreateWAV->setWindowTitle(QCoreApplication::translate("CreateWAV", "Create wave file", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateWAV", "Song length", nullptr));
        select_playCount->setText(QCoreApplication::translate("CreateWAV", "Play the song", nullptr));
        label->setText(QCoreApplication::translate("CreateWAV", "time(s)", nullptr));
        select_playForTime->setText(QCoreApplication::translate("CreateWAV", "Play for", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWAV: public Ui_CreateWAV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWAV_H

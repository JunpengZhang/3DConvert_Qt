#pragma once

#include <QtWidgets/QWidget>
#include "ui_Convert_Qt.h"

class Convert_Qt : public QWidget
{
	Q_OBJECT

public:
	Convert_Qt(QWidget *parent = Q_NULLPTR);

private:
	Ui::Convert_QtClass ui;
private slots:
	void on_Btn_Input_clicked();
	void on_Btn_Output_clicked();
};

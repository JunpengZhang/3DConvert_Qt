#include "Convert_Qt.h"
#include <QFileDialog>
#include<qdebug.h>
Convert_Qt::Convert_Qt(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);//禁止最大化
	setFixedSize(this->width(), this->height());//限制窗口大小
}

void Convert_Qt::on_Btn_Output_clicked()
{

}

void Convert_Qt::on_Btn_Input_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("请选择待转换数据！"),
		"F:",
		tr("SHP文件(*.shp)|*.shp"));
	ui.Edt_Input->text = fileName;

}
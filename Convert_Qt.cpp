#include "Convert_Qt.h"
#include <QFileDialog>
#include<qdebug.h>
Convert_Qt::Convert_Qt(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);//��ֹ���
	setFixedSize(this->width(), this->height());//���ƴ��ڴ�С
}

void Convert_Qt::on_Btn_Output_clicked()
{

}

void Convert_Qt::on_Btn_Input_clicked()
{
	QString fileName = QFileDialog::getOpenFileName(this,
		tr("��ѡ���ת�����ݣ�"),
		"F:",
		tr("SHP�ļ�(*.shp)|*.shp"));
	ui.Edt_Input->text = fileName;

}
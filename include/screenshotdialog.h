// =====================================================================================
// 
//	   Filename:  screenshotdialog.h
//
//	Description:  ������Ļ�Ի���ͷ�ļ�
//
//		Version:  1.0
//		Created:  2013��03��08�� 21ʱ12��25��
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "ui_screenshotdialog.h"

class QPixmap;

class ScreenShotDialog : public QDialog, public Ui::ScreenShotDialog
{
	Q_OBJECT

public:
	ScreenShotDialog(QWidget *parent = 0);
	~ScreenShotDialog();

public slots:
	void newScreenShot();
	void saveScreenShot();
	void ScreenShotNative();

private:
	QPixmap originalPixmap;
};
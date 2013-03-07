// =====================================================================================
// 
//	   Filename:  camare.h
//
//	Description:  ����ͷ������ͷ�ļ�
//
//		Version:  1.0
//		Created:  2013��03��07�� 18ʱ31��20��
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef CAMARAGET_H_
#define CAMARAGET_H_

#include <QWidget>

class QWidget;
class QImage;
class QTimer;
class QLabel;

#include <highgui.h>  //����opencv��ͷ�ļ�
#include <cv.h>

class CamaraGet : public QWidget
{
	Q_OBJECT

public:
	CamaraGet(QWidget * parent = 0);
	~CamaraGet();

	void setLabel(QLabel * label);

private slots:
	void openCamara();      	// ������ͷ
	void readFarme();       	// ��ȡ��ǰ֡��Ϣ
	void closeCamara();     	// �ر�����ͷ
	void takingPictures();  	// ����

private:
	QTimer     *timer;
	QImage     *imag;
	QLabel	   *label;
	CvCapture  *cam;			// ��Ƶ��ȡ�ṹ�� ������Ϊ��Ƶ��ȡ������һ������
	IplImage   *frame;			// ����IplImage����ָ�룬���������ڴ�ռ������ÿһ֡ͼ��
};

#endif // CAMARAGET_H_
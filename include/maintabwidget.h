// =====================================================================================
// 
//       Filename:  tabwidget.h
//
//    Description:  ��ǩ��ʾ����
//
//        Version:  1.0
//        Created:  2013��03��06�� 14ʱ06��05��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef TABWIDGET_H_
#define TABWIDGET_H_

#include <QTabWidget>

class LinkFileWidget;
class LinkProcessWidget;
class LinkServerWidget;
class LinkControlWidget;
class LinkCmdWidget;

class MainTabWidget : public QTabWidget
{
	Q_OBJECT

public:
	MainTabWidget();
	~MainTabWidget();

	void createMainWeiget();					// ��������ʾ

private:
	LinkFileWidget *linkFileWidget;				// �ļ������ǩ����ʾ�ؼ�
	LinkProcessWidget *linkProcessWidget;		// ���̹����ǩ����ʾ�ؼ�
	LinkServerWidget *linkServerWidget;			// ��������ǩ����ʾ�ؼ�
	LinkControlWidget *linkControlWidget;		// Զ�̿��������ǩ����ʾ�ؼ�
	LinkCmdWidget *linkCmdWidget;				// Զ�� cmd ��ǩ����ʾ�ؼ�
};

#endif	// TABWIDGET_H_

// =====================================================================================
// 
//       Filename:  LinkServerWidget.h
//
//    Description:  ��������ǩ Widget
//
//        Version:  1.0
//        Created:  2013��03��11�� 09ʱ26��05��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKSERVERWIDGET_H_
#define LINKSERVERWIDGET_H_

#include <QWidget>

class QHBoxLayout;
class QVBoxLayout;
class QPushButton;
class ServerTreeView;

class LinkServerWidget : public QWidget
{
	Q_OBJECT

public:
	LinkServerWidget();
	~LinkServerWidget();

	void createMainWeiget();		// ��������ʾ

private:
	ServerTreeView *serverTreeView;		// ������ʾ�б�
	QPushButton *getServerButton;		// ��ȡ�����б�ť
	QPushButton *runServerButton;		// �Զ����з���ť
	QPushButton *killServerButton;		// �ر�ѡ�з���ť

	QVBoxLayout *serverLayout;			// �����б��ڿ���
	QHBoxLayout *serverbuttonLayout;	// �����б�ײ����ڿ���
};

#endif	// LINKSERVERWIDGET_H_

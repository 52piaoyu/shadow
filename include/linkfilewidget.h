// =====================================================================================
// 
//       Filename:  LinkFileWidget.h
//
//    Description:  �ļ������ǩ Widget
//
//        Version:  1.0
//        Created:  2013��03��11�� 09ʱ07��05��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKFILEWIDGET_H_
#define LINKFILEWIDGET_H_

#include <QWidget>

class QAction;
class QToolBar;
class QVBoxLayout;

class FileTreeView;

class LinkFileWidget : public QWidget
{
	Q_OBJECT

public:
	LinkFileWidget();
	~LinkFileWidget();

	void createActions();			// ��������
	void createToolBars();			// ����������
	void createMainWeiget();		// ��������ʾ

private:
	QAction *cutAction;				// �ļ����ж���
	QAction *copyAction;			// �ļ����ƶ���
	QAction *pasteAction;			// �ļ�ճ������
	QAction *deleteAction;			// �ļ�ɾ������
	QAction *uploadAction;			// �ļ��ϴ�����
	QAction *downloadAction;		// �ļ����ض���
	
	QToolBar *fileToolBar;			// �ļ���ʾ�Ĺ�����
	FileTreeView *fileTreeView;		// �ļ������ʾ

	QVBoxLayout *fileListLayout;	// �ļ������ǩ�Ĵ��ڿ���
};

#endif	// LINKFILEWIDGET_H_

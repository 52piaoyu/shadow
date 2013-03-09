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

class QWidget;
class QToolBar;
class QTextEdit;
class QLineEdit;
class QLabel;
class FileTreeView;
class ProcessTreeView;
class ServerTreeView;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;

class MainTabWidget : public QTabWidget
{
	Q_OBJECT

public:
	MainTabWidget();
	~MainTabWidget();

	void createActions();			// ��������
	void createToolBars();			// ����������
	void createMainWeiget();		// ��������ʾ

private:
	QWidget *fileListWidget;		// �ļ������ǩ����ʾ�ؼ�
	QWidget *processWidget;			// ���̹����ǩ����ʾ�ؼ�
	QWidget *serverWidget;			// ��������ǩ����ʾ�ؼ�
	QWidget *linkControlWidget;		// Զ�̿��������ǩ����ʾ�ؼ�
	QWidget *cmdWidget;				// Զ�� cmd ��ǩ����ʾ�ؼ�

	QAction *cutAction;				// �ļ����ж���
	QAction *copyAction;			// �ļ����ƶ���
	QAction *pasteAction;			// �ļ�ճ������
	QAction *deleteAction;			// �ļ�ɾ������
	QAction *uploadAction;			// �ļ��ϴ�����
	QAction *downloadAction;		// �ļ����ض���
	
	QToolBar *fileToolBar;			// �ļ���ʾ�Ĺ�����
	FileTreeView *fileListView;		// �ļ������ʾ

	ProcessTreeView *processTreeView; 	// ������ʾ�б�
	QPushButton *getProcessButton;		// ��ȡ�����б�ť
	QPushButton *killProcessButton;		// ����ѡ�н��̰�ť

	ServerTreeView *serverTreeView;		// ������ʾ�б�
	QPushButton *getServerButton;		// ��ȡ�����б�ť
	QPushButton *runServerButton;		// �Զ����з���ť
	QPushButton *killServerButton;		// �ر�ѡ�з���ť

	QTextEdit *cmdTextEdit;			// cmd �����ʾ����
	QLabel *cmdLabel;				// ���������ǩ
	QLineEdit *cmdInputEdit;		// cmd ���������
	QPushButton *sendButton;		// ���� cmd ���ť

	QVBoxLayout *fileListLayout;		// �ļ������ǩ�Ĵ��ڿ���
	QVBoxLayout *processLayout;			// �����б��ڿ���
	QHBoxLayout *processButtonLayout;	// �����б�ײ����ڿ���
	QVBoxLayout *serverLayout;			// �����б��ڿ���
	QHBoxLayout *serverbuttonLayout;	// �����б�ײ����ڿ���
	QVBoxLayout *cmdLayout;				// cmd ���ڿ���
	QHBoxLayout *cmdButtonLayout;		// cmd �ײ����ڿ���
};

#endif	// TABWIDGET_H_

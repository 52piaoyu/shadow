// =====================================================================================
// 
//       Filename:  mainwindow.h
//
//    Description:  �����ڵ�������ͷ�ļ�
//
//        Version:  1.0
//        Created:  2013��03��05�� 21ʱ11��58��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <QMainWindow>

class QLabel;
class QSplitter;
class QMenu;
class QToolBar;
class QAction;
class QSpinBox;
class QLineEdit;
class QPushButton;

class QSplitter;
class QHBoxLayout;
class QVBoxLayout;

class LinkListWidget;
class MainTabWidget;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	void sleep(unsigned int msec);

protected:
	//void closeEvent(QCloseEvent *event);

private slots:
	void screenshot();
	void camare();
	void about();

private:
	void createMainWeiget();		// ����������
	void createActions();			// ��������
	void createMenus();				// �������˵�
	void createToolBars();			// ����������
	void createStatusBar();			// ����״̬��

	QLabel *statusLabel;			// ״̬������

	QLabel *currLinkLabel;			// �����浱ǰ���ӱ�ǩ
	QLabel *currPortLabel;			// ���������Ӷ˿ڱ�ǩ
	QLabel *passwordLabel;			// �����������ǩ

	QLineEdit *currLinkIPEdit;		// �����浱ǰ���������
	QSpinBox  *currPortSpin;		// ���������Ӷ˿������
	QLineEdit *passwordEdit;		// ���������������

	QPushButton *linkButton;		// �ֶ����Ӱ�ť

	LinkListWidget *linkListWidget;	// ��������������ʾ

	MainTabWidget *mainTabWidget;	// ��ǩ����

	QHBoxLayout *topLayout;			// �����ָ��
	QSplitter *bottomSplitter;		// �ײ��зִ���
	QVBoxLayout *mainLayout;		// ���ָ��

	QWidget *mainWigget;			// ��������ʾ

	QMenu *fileMenu;				// ���˵�-�ļ��Ӳ˵�ָ��
	QMenu *toolsMenu;				// ���˵�-�����Ӳ˵�ָ��
	QMenu *setsMenu;				// ���˵�-�����Ӳ˵�ָ��
	QMenu *helpMenu;				// ���˵�-�����Ӳ˵�ָ��

	QToolBar *fileToolBar;			// �ļ���ع�����ָ��
	QToolBar *workToolBar;			// ������ع�����ָ��
	QToolBar *infoToolBar;			// ������ع�����ָ��
	QToolBar *aboutToolBar;			// ������ع�����ָ��

	QAction *auto_connAction;		// �Զ�����
	QAction *screenShotAction;		// ��Ļ����
	QAction *camareAction;			// ��������ͷ
	QAction *configAction;			// ���������

	QAction *settingAction;			// �������
	QAction *minAction;				// ��С������
	QAction *exitAction;			// �˳�����
	QAction *aboutAction;			// �ر��ڳ���
};

#endif // MAINWINDOW_H_
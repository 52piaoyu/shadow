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

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

protected:
	//void closeEvent(QCloseEvent *event);

private slots:
	void about();

private:
	void createMainWeiget();		// ����������
	void createActions();			// ��������
	void createMenus();				// �������˵�
	void createToolBars();			// ����������
	void createStatusBar();			// ����״̬��

	QLabel *statusLabel;			// ״̬������

	QMenu *fileMenu;				// ���˵�-�ļ��Ӳ˵�ָ��
	QMenu *toolsMenu;				// ���˵�-�����Ӳ˵�ָ��
	QMenu *setsMenu;				// ���˵�-�����Ӳ˵�ָ��
	QMenu *helpMenu;				// ���˵�-�����Ӳ˵�ָ��

	QToolBar *fileToolBar;			// �ļ���ع�����ָ��
	QToolBar *workToolBar;			// ������ع�����ָ��
	QToolBar *infoToolBar;			// ������ع�����ָ��

	QAction *auto_connAction;		// �Զ�����
	QAction *capture_screenAction;	// ��Ļ����
	QAction *camareAction;			// ��������ͷ
	QAction *configAction;			// ���������

	QAction *settingAction;			// �������
	QAction *minAction;				// ��С������
	QAction *exitAction;			// �˳�����
	QAction *aboutAction;			// �ر��ڳ���
};

#endif // MAINWINDOW_H_
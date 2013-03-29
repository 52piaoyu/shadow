// =====================================================================================
// 
//       Filename:  ServerTreeView.h
//
//    Description:  ���������ʾ
//
//        Version:  1.0
//        Created:  2013��03��09�� 19ʱ43��06��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef SERVERTREEVIEW_H_
#define SERVERTREEVIEW_H_

#include <QTreeView>
#include <QString>

class QStandardItemModel;
class QModelIndex;

class ServerTreeView : public QTreeView
{
	Q_OBJECT

public:
	ServerTreeView();
	~ServerTreeView();

	void rebuildInfo();

	void addOneServerItem(QString strServer, QString strPID, QString strDes, 
								QString strState, QString strWorkGroup);

	void setNowSelectServer(QModelIndex &index);

	QString getStrNowServer();

private:
	QStandardItemModel *mainModel;
	QString strNowServer;
	int iPosition;
};

#endif	// SERVERTREEVIEW_H_

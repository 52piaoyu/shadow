// =====================================================================================
// 
//       Filename:  linktreeview.h
//
//    Description:  �Զ�����������ʾ
//
//        Version:  1.0
//        Created:  2013��03��07�� 11ʱ03��08��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKREEVIEW_H_
#define LINKREEVIEW_H_

#include <QTreeView>

class QStandardItemModel;

class LinkTreeView : public QTreeView
{
	Q_OBJECT

public:
	LinkTreeView();
	~LinkTreeView();

private:
	QStandardItemModel *mainModel;
};

#endif	// LINKTREEVIEW_H_

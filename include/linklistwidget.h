// =====================================================================================
// 
//       Filename:  linklistwidget.h
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

#ifndef LINKLISTWIDGET_H_
#define LINKLISTWIDGET_H_

#include <QListWidget>

class QStandardItemModel;

class LinkListWidget : public QListWidget
{
	Q_OBJECT

public:
	LinkListWidget();
	~LinkListWidget();
};

#endif	// LINKLISTWIDGET_H_

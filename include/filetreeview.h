// =====================================================================================
// 
//       Filename:  filetreeview.h
//
//    Description:  �ļ������ʾ
//
//        Version:  1.0
//        Created:  2013��03��06�� 11ʱ10��01��
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef FILETREEVIEW_H_
#define FILETREEVIEW_H_

#include <QTreeView>

class QFileSystemModel;

class FileTreeView : public QTreeView
{
	Q_OBJECT

public:
	FileTreeView();
	~FileTreeView();

private:
	QFileSystemModel *fileModel;	// ϵͳ�ļ���ʾģʽ
};

#endif	// FILETREEVIEW_H_

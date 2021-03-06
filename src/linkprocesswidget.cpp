// =====================================================================================
// 
//       Filename:  LinkServerWidget.cpp
//
//    Description:  服务管理标签 Widget
//
//        Version:  1.0
//        Created:  2013年03月11日 09时23分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QtGui>

#include "LinkProcessWidget.h"
#include "ProcessTreeView.h"

LinkProcessWidget::LinkProcessWidget()
{
	createMainWeiget();
}

LinkProcessWidget::~LinkProcessWidget()
{

}

void LinkProcessWidget::createMainWeiget()
{
	processLayout = new QVBoxLayout();
	processButtonLayout = new QHBoxLayout();

	processTreeView = new ProcessTreeView;
	getProcessButton = new QPushButton(tr("获取进程列表"));;
	killProcessButton = new QPushButton(tr("结束选中进程"));;
	processButtonLayout->addStretch();
	processButtonLayout->addWidget(getProcessButton);
	processButtonLayout->addStretch();
	processButtonLayout->addWidget(killProcessButton);
	processButtonLayout->addStretch();
	
	processLayout->addWidget(processTreeView);
	processLayout->addLayout(processButtonLayout);
	
	setLayout(processLayout);
}

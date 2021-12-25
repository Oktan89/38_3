#include "wmain.h"

WMain::WMain(QWidget *parent) : QMainWindow(parent)
{
    m_centalWidget = new QWidget(this);






    setCentralWidget(m_centalWidget);

}

WMain::~WMain()
{

}
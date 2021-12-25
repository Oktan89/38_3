#pragma once
#include <QMainWindow>
#include <QLabel>
#include <QSlider>
#include <QPushButton>
#include <QVBoxLayout>


class WMain : public QMainWindow
{
    Q_OBJECT
    QWidget *m_centalWidget;
    QLabel *m_imageLael;
    QSlider *m_slider;
    QPushButton *m_button;

public:
    WMain(QWidget *parent = nullptr);
    ~WMain();

};
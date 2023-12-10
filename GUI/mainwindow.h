#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QLabel>
#include <vector>
#include <stack>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void mousePressEvent(QMouseEvent *e);
    virtual void mouseReleaseEvent(QMouseEvent *e);
    virtual void mouseMoveEvent(QMouseEvent *e);
    virtual void paintEvent(QPaintEvent *e);
    virtual void keyPressEvent(QKeyEvent *e);

private slots:
    void on_startButton_clicked();
    void on_createButton_clicked();
    void on_joinButton_clicked();
    void on_clearButton_clicked();
    void on_undoButton_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<std::tuple<QPoint,QColor,int,bool>> points;
    std::stack<std::vector<std::tuple<QPoint,QColor,int,bool>>> previousDrawings;
    bool leftButton;
    QColor color;
    int size;
    bool surprise;
    bool verifyOutsideWindow;
    QColor surpriseStatus;
    int xpos;
    int ypos;
    std::vector<QColor>colors;
    std::vector<int> widths;
    std::stack<int> actionHistory;
    std::vector<QPoint> borders;
    int gameState;
    QLabel* bigLogo;
private:
    void colorChange(QMouseEvent *e);
    bool noText(QString guess);
    void setVisibilities(int state);
    void clear();
    void undo();
};
#endif // MAINWINDOW_H

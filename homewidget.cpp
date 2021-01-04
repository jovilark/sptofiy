#include "homewidget.h"
#include <QLabel>

HomeWidget::HomeWidget(QWidget *parent) : QWidget(parent)
{
    QLabel *label = new QLabel(this);
    label->setText("\nJordan is Sooo Gay.\n");
    label->setAlignment(Qt::AlignBottom);
}

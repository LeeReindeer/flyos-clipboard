//
// Created by linux on 17-8-25.
//

#ifndef FLYOS_CLIPBOARD_LISTWIDGET_H
#define FLYOS_CLIPBOARD_LISTWIDGET_H


#include <QtWidgets/QScrollArea>
#include "ListItem.h"
#include <QList>


class ListWidget : public QScrollArea{
    Q_OBJECT
public:
    explicit ListWidget(QWidget *parent = nullptr);

    void addItem(QString text);

    void clear();

private:
    QVBoxLayout *mainLayout;

    bool isCopy = false;
    bool isStar = false;

private slots:

    void removeItem(ListItem *item);

    void setIsCopy(bool isCopy);

    bool changeStarStatus(ListItem *item);

signals:

    void countChange(int count);

};


#endif //FLYOS_CLIPBOARD_LISTWIDGET_H

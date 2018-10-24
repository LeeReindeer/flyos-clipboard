//
// Created by linux on 17-8-25.
//

#ifndef FLYOS_CLIPBOARD_LISTITEM_H
#define FLYOS_CLIPBOARD_LISTITEM_H

#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

class ListItem : public QFrame {
Q_OBJECT
public:
    explicit ListItem(QString text, QWidget *parent = nullptr);

private:
    QLabel *label;

    QFrame *toolFrame;
    QPushButton *copyButton;
    QPushButton *closeButton;
    QPushButton *starButton; 

private slots:

    void copyButtonClick();
    void closeButtonClick();
    void starButtonClick();

protected:
    virtual void enterEvent(QEvent *event);

    virtual void leaveEvent(QEvent *event);

private:
signals:

    void removeItem(ListItem *item);

    void setIsCopy(bool isCopy);

    bool changeStarStatus(ListItem *item);
};


#endif //FLYOS_CLIPBOARD_LISTITEM_H

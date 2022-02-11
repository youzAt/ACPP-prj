#ifndef BACKEND_H
#define BACKEND_H
#include<QObject>
#include<iostream>
#include "include/electrician.hpp"
#include "include/tool.hpp"
#include "include/lamp.hpp"
#include "include/wire.hpp"
#include <vector>
using namespace std;

class backEnd : public QObject
{
    Q_OBJECT
public:
private:
    electrician* electrician1;
    vector<tool*> tools;
public slots:
    bool electrician_login(QString name, QString age, int level);
    QString get_electrician_name();
    int get_electrician_age();
    QString get_electrician_level();
    void add_lamp(int Ltype, int Lcolor, QString Lprice);
    void add_wire(QString Wlength, QString Wdiameter, int Wtype, QString Wprice);
    void end_shopping();
signals:
    void invalid_range();


};

#endif // BACKEND_H

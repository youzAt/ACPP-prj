#include "backend.h"
#include"iostream"
using namespace std;


bool backEnd::electrician_login(QString name, QString age, int level)
{
    string temp_name = name.toStdString();
    string temp_age = age.toStdString();

    for (auto item : temp_age)
    {
        if (!isdigit(item))
        {
            return false;
        }
    }
    try {
        electrician1 = new electrician(temp_name, age.toInt(), level);
    } catch (out_of_range &e) {
        return false;
    }

    return true;
}

QString backEnd::get_electrician_name()
{
    string temp = electrician1->get_name();
    QString temp2 = QString::fromStdString(temp);
    return temp2;
}

int backEnd::get_electrician_age()
{
    return electrician1->get_age();
}

QString backEnd::get_electrician_level()
{
    QString temp2;
    int temp = electrician1->get_level();
    switch (temp) {
    case 1:
    temp2 = "Beginner";
        break;
    case 2:
    temp2 = "Intermediate";
        break;
    case 3:
    temp2 = "Professoinal";
        break;
    }
    return temp2;
}

void backEnd::add_lamp(int Ltype, int Lcolor, QString Lprice)
{
    float price = Lprice.toFloat();
    tools.push_back(new lamp(Ltype, Lcolor, price));
    tools[tools.size() - 1]->print_info();

}

void backEnd::add_wire(QString Wlength, QString Wdiameter, int Wtype, QString Wprice)
{
    float length = Wlength.toFloat();
    int diameter = Wdiameter.toInt();
    float price = Wprice.toFloat();
    tools.push_back(new wire(length, diameter, Wtype, price));
    tools[tools.size() - 1]->print_info();
}

void backEnd::end_shopping()
{
    float price = 0;
    for(auto const & item : tools)
    {
        price += item->get_price();
    }

    cout << "============================" << endl;
    cout << "total price: " << price << endl;
    cout << "============================" << endl;
    cout <<"\n\n\n";
    electrician1->print_info();
}

#include "Teacher.h"

Teacher::Teacher()
{
    cost = 0;
    hours = 0;
}

Teacher::Teacher(string name, float salary, float cost, int hours) :Employee(name, salary)
{
    this->cost = cost;
    this->hours = hours;
}

void Teacher::setCost(float cost)
{
    this->cost = cost;
}

void Teacher::setHours(int hours)
{
    this->hours = hours;
}

float Teacher::getCost() const
{
    return cost;
}

int Teacher::getHours() const
{
    return hours;
}

void Teacher::showInfo() const
{
}

float Teacher::calcSalary() const
{
    return 0.0f;
}
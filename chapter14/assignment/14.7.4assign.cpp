#include "14.7.4assign.h"
#include <iostream>
#include <ctime>

void Card::Show() const
{
    std::cout << mtype << mnum << std::endl;
}


Person::Person()
{
    firstName = "";
    lastName = "";
}


Person::Person(const std::string & fname, const std::string & lname)
    : firstName(fname), lastName(lname)
{

}

void Person::Show() const
{
    GetData();
}

void Person::SetData()
{
    std::cout << "Enter first name: ";
    getline(std::cin, firstName);

    std::cout << "Enter last name: ";
    getline(std::cin, lastName);

}


void Person::Set()
{
    SetData();
}

void Person::GetData() const
{
    std::cout << "firstName: " << firstName << std::endl;
    std::cout << "last Name: " << lastName << std::endl;
}


Person::~Person()
{ 

}

Gunslinger::Gunslinger()
    :Person(), mtickCount(0)
{

}


Gunslinger::Gunslinger(const std::string & fname, const std::string & lname, int tickCount)
    :Person(fname, lname), mtickCount(tickCount)
{

}


Gunslinger::Gunslinger(const Person & p, int tickCount)
    :Person(p), mtickCount(tickCount)
{

}

void Gunslinger::SetData()
{
    std::cout << "Enter tickcount: ";
    std::cin >> mtickCount;
    while(std::cin.get() != '\n')
        continue;
}


void Gunslinger::Set()
{
    Person::SetData();
    SetData();
}


void Gunslinger::GetData() const
{
    std::cout << "tickcount: " << mtickCount << std::endl;
}


void Gunslinger::Show() const
{
    Person::GetData();
    GetData();
}

double Gunslinger::Draw() const
{
    std::srand(std::time(0));
    return std::rand();
}

PokerPlayer::PokerPlayer()
    :Person()
{

}


PokerPlayer::PokerPlayer(const std::string & fname, const std::string & lname)
    :Person(fname, lname)
{

}


PokerPlayer::PokerPlayer(const Person & p)
    :Person(p)
{

}

Card PokerPlayer::Draw() const
{
    std::srand(std::time(0));
    int cardNum = std::rand() % 12;
    return Card(cardNum, Card::Diamond);
}

void PokerPlayer::Show() const
{
    Person::GetData();
    Draw().Show();
}


void PokerPlayer::Set()
{
    Person::Set();
}

double BadDude::Gdraw() const
{
    return Gunslinger::Draw();
}


Card BadDude::Cdraw() const
{
    return PokerPlayer::Draw();
}


void BadDude::Show() const
{
    Person::GetData();
    Gunslinger::GetData();
    Cdraw().Show();
    std::cout << Gdraw() << std::endl;
}


void BadDude::Set()
{
    Person::SetData();
    Gunslinger::SetData();
}
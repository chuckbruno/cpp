#ifndef PERSONMI_H__
#define PERSONMI_H__


#include <string>


class Card
{
    public:
        enum CardType {Heart, Spade, Club, Diamond};

    private:
        CardType mtype;
        int mnum;
    public:
        Card(int num, CardType _type = Heart): mtype(_type), mnum(num) {}
        void Show() const;
};

class Person
{
    private:
        std::string firstName;
        std::string lastName;
    public:
        Person();
        Person(const std::string & fname, const std::string & lname);
        virtual void SetData();
        virtual void Set();
        virtual void GetData() const;
        virtual void Show() const;
        virtual ~Person() = 0;
};


class Gunslinger: virtual public Person
{
    private:
        int mtickCount;
    public:
        Gunslinger();
        Gunslinger(const std::string & fname, const std::string & lname, int tickCount);
        Gunslinger(const Person & p, int tickCount);
        double Draw() const;
        virtual void SetData();
        virtual void Set();
        virtual void GetData() const;
        virtual void Show() const;

};


class PokerPlayer: virtual public Person
{
    public:
        PokerPlayer();
        PokerPlayer(const std::string & fname, const std::string & lname);
        PokerPlayer(const Person & p);
        Card Draw() const;
        virtual void Set();
        void Show() const;

};


class BadDude: public Gunslinger, public PokerPlayer
{
    public:
        BadDude() {};
        BadDude(const std::string & fname, const std::string & lname, int tickCount)
            :Person(fname, lname), Gunslinger(fname, lname, tickCount), PokerPlayer(fname, lname){}
        BadDude(const Person & p, int tickCount)
            :Person(p), Gunslinger(p, tickCount), PokerPlayer(p) {}
        BadDude(const Gunslinger & gs)
            :Person(gs), Gunslinger(gs), PokerPlayer(gs){}
        BadDude(const PokerPlayer & pp, int tickCount)
            :Person(pp), Gunslinger(pp, tickCount), PokerPlayer(pp) {}
        double Gdraw() const;
        Card Cdraw() const;
        void Show() const;
        void Set();
};

#endif
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class dmaABC
{
    private:
        char * label;
        int rating;
    public:
        dmaABC(const char * label = "null", int r = 0);
        char * Label() const { return label; }
        int Rating() const { return rating; }
        virtual void View() const = 0;
        virtual ~dmaABC();
};

class baseDMA: public dmaABC
{
    public:
        baseDMA(const char * l = "null", int r = 0)
            :dmaABC(l, r) {};
        baseDMA(const baseDMA & rs): dmaABC(rs) {};
        virtual ~baseDMA() {};
        virtual void View() const;
};


class lacksDMA: public dmaABC
{
    private:
        enum {COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "black", const char * l = "null", int r = 0);
        lacksDMA(const char * c, const baseDMA & rs);
        virtual void View() const;
        virtual ~lacksDMA() {};
};


class hasDMA: public dmaABC
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "none", const char * l = "null", int r = 0);
        hasDMA(const char * s, const baseDMA & rs);
        hasDMA(const hasDMA & hs);
        virtual ~hasDMA();
        virtual void View() const;
};

#endif



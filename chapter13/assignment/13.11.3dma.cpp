#include "13.11.3dma.h"
#include <cstring>

dmaABC::dmaABC(const char * l, int r)
{
    label = new char[std::strlen(l) +  1];
    std::strcpy(label, l);
    rating = r;
}

dmaABC::~dmaABC()
{
    delete[] label;
}

void baseDMA::View() const
{
    std::cout << "Label: " << Label() << std::endl;
    std::cout << "Rating: " << Rating() << std::endl;
}


lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : dmaABC(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}


lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
    :dmaABC(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
    std::cout << "Label: " << Label() << std::endl;
    std::cout << "Rating: " << Rating() << std::endl;
    std::cout << "Color: " << color << std::endl;    
}


hasDMA::hasDMA(const char * s, const char * l, int r)
    :dmaABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}


hasDMA::hasDMA(const char * s, const baseDMA & rs)
    :dmaABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}


hasDMA::hasDMA(const hasDMA & hs)
    :dmaABC(hs)
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}


hasDMA::~hasDMA()
{
    delete [] style;
}


void hasDMA::View() const
{
    std::cout << "Label: " << Label() << std::endl;
    std::cout << "Rating: " << Rating() << std::endl;
    std::cout << "Style: " << style << std::endl;   
}
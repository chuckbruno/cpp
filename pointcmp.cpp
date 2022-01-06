#include <cmath>
#include <map>
#include <iostream>

struct Point{double x, y;};

struct PointCmp
{
    bool operator()(const Point* lhs, const Point* rhs) const
    {
        return lhs->x > rhs->x;
    }
};


int main()
{
    Point points[3] = {{2, 0}, {1, 0}, {3, 0}};
    std::map<Point*, double, PointCmp> mag({
            {points, 2},
            {points+ 1, 1},
            {points + 2, 3}
            });

    for(auto it = mag.begin(); it != mag.end(); ++it)
    {
        auto cur = it->first;
        cur->y = mag[cur];
    }


    for(auto it = mag.begin(); it != mag.end(); ++it)
    {
        auto cur = it->first;
        mag[cur] = std::hypot(cur->x, cur->y);

        std::cout << "The magnitude of (" << cur->x << ", " << cur->y << ") is ";
        std::cout << it->second << std::endl;
    }
}

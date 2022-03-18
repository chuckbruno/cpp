#include <cstdlib>
#include <cstdio>


float F(float x){return 2 * x * x;}
float f(float x){return 4 * x;}


int main(int argc, char** argv)
{
    float a = atof(argv[1]);
    printf("a: %f\n", a);
    float b = atof(argv[2]);
    printf("b: %f\n", b);
    int N = atoi(argv[3]);
    printf("N: %i\n", N);
    float exact = F(b) - F(a);

    float dt = (b - a) / N, time = dt, sum = 0;
    for(int i = 1; i <= N; ++i)
    {
        float delta_d = f(time) * dt;
        sum += delta_d;
        time += dt;
    }
    printf("Result, exact %f, approximation %f, diff %f\n", exact, sum, sum - exact);

    return 0;
}


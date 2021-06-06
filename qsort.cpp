#include <iostream>
#include <stdlib.h>
#include <chrono>


int values[]= {40, 10, 100, 90, 20, 25};

int compare(const void *a, const void *b){

    return (*(int*)a - *(int*)b);
}

int main(){
    int n;
    qsort(values, 6, sizeof(values[0]), compare);
    auto start = std::chrono::steady_clock::now();
    for (auto i: values){
        std::cout << i << std::endl;
    }
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_time = end - start;
    std::cout << elapsed_time.count() << std::endl;
    return 0;
}


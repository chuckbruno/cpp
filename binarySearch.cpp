#include <iostream>

template<typename T>
int get_array_len(T array[]) {
    int length = sizeof(array) / sizeof(array[0]);
    return length;
}

int binarySearch(int a[], int x){
    int low=0;
    int num = get_array_len(a);
    int high=num - 1;
    std::cout << high << std::endl;
    int mid;

    while(low <=high){
        mid = (low + high) / 2;
        if (a[mid] <x){
            low = mid + 1; //

        }
        else if(a[mid] >x){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }

    return -1;
}


int main(){

    int c[] ={1, 2, 3, 4, 5, 6};
    std::cout << sizeof(c) << std::endl;
    int re = binarySearch(c, 4);
    std::cout << c[re] << std::endl;
    printf("%d\n", re);
}
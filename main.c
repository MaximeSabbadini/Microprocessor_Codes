#include <stdio.h>

#define size 40

void print(int *array, int s){
    printf("Element is %d\n", array[3]);
    printf("Size is %d\n", s);
}

void mean(int *array, int s){
    int sum=0;
    float avg;
    int i;
    
    for(i=0;i<s;i++){
        sum += array[i];
    }
    avg = (float)sum/(float)s;
    printf("Average is : %f\n", avg);
    
}

int main(){

    int array[size] = {34, 201, 190, 154, 8, 194, 2, 6, 114, 88, 45, 76, 123, 87, 25, 23, 200, 122, 150, 90, 92, 87, 177,244,201, 6, 12, 60, 8, 2, 5, 67,7, 87,250,230, 99, 3,100, 90};

    mean(array, size);

return 0;
}





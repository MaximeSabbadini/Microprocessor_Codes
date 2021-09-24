#include <stdio.h>
#include "stats.h"

#define size 40

int main(){
    
    int max, min, median;
    float mean;

    unsigned char array[size] = {34, 201, 190, 154, 8, 194, 2, 6, 114, 88, 45, 76, 123, 87, 25, 23, 200, 122, 150, 90, 92, 87, 177,244,201, 6, 12, 60, 8, 2, 5, 67,7, 87,250,230, 99, 3,100, 90};

    //mean(array, size);
    //sort_array(array, size);
    //print_array(array, size);
    //maximum = find_maximum(array);
    //minimum = find_minimum(array);
    //median = find_median(array);
    printf("Before sort \n");
    print_array(array, size);
    printf("After sort \n");
    sort_array(array, size);
    print_array(array, size);
    mean = find_mean(array, size);
    printf("Average is : %f\n", mean);

    max = find_maximum(array, size);
    printf("Maximum is : %d\n", max);
    min = find_minimum(array, size);
    printf("Minimum is : %d\n", min);
    median = find_median(array, size);
    printf("Median is : %d\n", median);
    //print_statistics(median, mean, maximum, minimum)
    

return 0;
}

void print_array(unsigned char *array, char s){
    int i;
    for(i=0;i<s;i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
}

float find_mean(unsigned char test[], char s){
    int sum=0;
    float avg;
    int i;
    
    for(i=0;i<s;i++){
        sum += test[i];
    }
    avg = (float)sum/(float)s;
    return avg;
}

int find_maximum(unsigned char test[], char s){
    int i = 0;
    int max = test[0];
    
    for(i=0;i<s;i++){
        if(max<test[i]){
            max = test[i];
        }
    }
    return max;
}

int find_minimum(unsigned char test[], char s){
    int i = 0;
    int min = test[0];
    
    for(i=0;i<s;i++){
        if(min>test[i]){
            min = test[i];
        }
    }
    return min;
}

void sort_array(unsigned char *sort, char s){
    int i=0, j=0, temp=0;
    for(i=0; i<s; i++){
        for(j=i+1;j<s;j++){
            if(sort[i]<sort[j]){
                temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
}

int find_median(unsigned char test[], char s){
    int median=0;
    int i=0;
    if(s%2==0){
        median = (test[s/2]+test[s/2-1])/2;
    }
    else{
        median = test[(s-1)/2];
    }
    return median;
}





#ifndef __STATS_H__
#define __STATS_H__


void print_statistics(int median, int mean, int maximum, int minimum);
void print_array(unsigned char *arr, char size);
int find_median(unsigned char test[], char size);
float find_mean(unsigned char test[], char size);
int find_maximum(unsigned char test[], char size);
int find_minimum(unsigned char test[], char size);
void sort_array(unsigned char *sort, char size);



#endif /* __STATS_H__**/

#include <stdio.h>
const int SIZE = 3;
void main()
{
 int arr[] = { 1, 2, 3 };
 int i, *ptr[SIZE];
 for (i = 0; i < SIZE; i++) 
{
 ptr[i] = &arr[i];
 }
 for (i = 0; i < SIZE; i++) 
{
 printf("Value of arr[%d] = %d\n", i, *ptr[i]);
 }
}
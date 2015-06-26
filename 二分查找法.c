#include <stdio.h>

int a[] = {1,3,5,7,8,11,14,16,18,19,100,120};
int binarysearch(int m[], int value)
{
        int left = 0;
        int right = 11;
        int mid  = 0;
        while(left <= right)
        {
                mid = (left + right)/2;
                if(a[mid] < value)
                {
                        left = mid + 1;
                }
                else if(a[mid] > value)
                {
                        right = mid - 1;
                }
                else
                {
                        return mid;
                }
        }
        return -1;
}


int main(int argc, char **argv)
{
        int member = 1;
        int index = binarysearch(a, member);
        printf("%d index = %d \n", member, index);
        return 0;
}
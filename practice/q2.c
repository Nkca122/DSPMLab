#include <stdio.h>
#include <limits.h>
int MAX = INT_MIN;
int min = INT_MAX;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

     for (int i = 0; i < n; i++)
    {scanf("%d", arr + i);}

    for(int i = 0; i < n; i ++){
        if(arr[i] > MAX){
            MAX = arr[i];
        }
        
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("%d\t%d\n", MAX, min);

    return 0;
}
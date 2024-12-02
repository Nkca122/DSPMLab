#include <stdio.h>
#define MAX 100
int arr[MAX], size = 0;

// Traversal
void display()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Insertion
void insert(int pos, int val)
{
    if (size < MAX)
    {
        for (int i = size - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = val;
        if (pos < size)
        {
            size++;
        }
        else
        {
            size = ++pos;
        }
    }
}

// Deletion
int delete(int pos)
{
    int curr = arr[pos];
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    return curr;
}

// Linear Search 
int linearSearch(int val){
    for(int i = 0; i < size; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

// Binary Search
int binarySearch(int val){
    int s = 0, e = size - 1;
    while(s < e){
        int mid = (s+e)/2;
        if(arr[mid] == val) return mid;
        else {
            if(arr[mid] > val) {
                e = --mid; continue;
            } else {
                s = ++mid; continue;
            }
        }
    }

    return -1;
}

int recursiveBinarySearch(int val, int s, int e){
    int mid = (s+e)/2;
    if(s > e) return -1;
    if(arr[mid] == val) return mid;
    else {
        if(arr[mid] > val) return recursiveBinarySearch(val, s, --mid);
        else return recursiveBinarySearch(val, ++mid, e);
    }
}

int main()
{
    insert(0, 1);
    insert(2, 2);
    printf("%d\n", size);
    delete (0);
    display();
}

// You can read the sorting algorithms

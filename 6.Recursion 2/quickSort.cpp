#include <iostream>
using namespace std ;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int input[], int s, int e)
{
    int pivot = input[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (pivot >= input[i])
        {
            count = count + 1;
        }
    }
    // cout<<count <<endl;
    int pivotindex = s + count;
    swap(&input[s], &input[pivotindex]);

    // now gathering smaller and greater elements with respect to the partitioned element to their respective side

    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex)
    {
        if (input[i] <= pivot)
        {
            i++;
        }
        else if (input[j] > pivot)
        {
            j--;
        }
        else
        {
            swap(&input[i++], &input[j--]);
        }
    }
    return pivotindex;
}

void quickSort(int input[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // making a partition function
    int partition_pos = partition(input, s, e);
    // now call recursion to sort both sides of partion

    quickSort(input, s, partition_pos - 1);
    quickSort(input, partition_pos + 1, e);
}

void quickSort(int input[], int size)
{
    quickSort(input, 0, size - 1);
}

int main(){
    int size;
    cin>>size;
    int *arr =new int[size] ;
    for(int i=0;i<size;i++){
        cin>>arr[i] ;
    }

    quickSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ;
    }
    delete [] arr;
}
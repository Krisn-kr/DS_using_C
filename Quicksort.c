#include<stdio.h>
// #include<conio.h>
void quick_sort(int arr[], int beg, int end);
int partition(int arr[], int beg, int end);

int main(){
    int n, i;
    // clrscr();
    int arr[20] = {12,21,32,4};

    n = 4;

    quick_sort(arr,0,n-1);
     printf("Sorted Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

     
    // getch();
    return 0;
}
void quick_sort(int arr[], int beg, int end){
    int loc ;
    if(beg < end)
    {
        loc = partition(arr, beg, end);
        // left
        quick_sort(arr, beg, loc-1);
        quick_sort(arr, loc+1, end);
    }
}
int partition(int arr[], int beg, int end)
{
    int pivot, left, right, temp;
    pivot = arr[beg];
    left = beg+1;
    right = end;
    while (left<=right)
    {
        while (left<=right && arr[left] < pivot  )
        {
            left++;
        }
        while ( right>=left && arr[right] > pivot  )
        {
            right--;
        }
        if(left < right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
       
    }
    temp = arr[beg];
    arr[beg] = arr[right];
    arr[right] = temp;
    return right; 
    
}
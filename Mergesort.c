#include<stdio.h>
// #include<conio.h>

void merge_sort(int arr[], int beg, int end);
void merge(int arr[], int beg, int mid, int end );

int main(){
    int n, i;
    // clrscr();
    int arr[20] = {12,21,32,4};

    n = 4;

    merge_sort(arr,0,n-1);
     printf("Sorted Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

     
    // getch();
    return 0;

}
void merge_sort(int arr[], int beg, int end){
    int mid = beg+(end-beg)/2;

    if(beg < end){
        mid = beg+(end-beg)/2;
        // lrft
        merge_sort(arr, beg, mid);
        //  right
        merge_sort(arr, mid+1, end);

        // Merge
        merge(arr, beg, mid, end);
    }
}
void merge(int arr[], int beg, int mid, int end ){
    int temp[50];
    int i, j , index, k;

    i = beg;
    j = mid+1;
    index = 0;

    while(i<=mid && j <= end){
        if(arr[i]<arr[j]){
            temp[index] = arr[i];
            i++;
        }
        else{
            temp[index] = arr[j];
            j++;
        }

        index++;

    }
    if(j<=end)
    {
        while (j<=end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
        
    }
    else
    {
        while (i<=mid)
        {
            temp[index]=arr[i];
            i++;
            index++;
        }
        
    }
    // copy temp to array
    k=0;
    while(k<index){
        arr[beg+k] = temp[k];
        k++;
    }




    
}
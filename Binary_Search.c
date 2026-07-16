#include<stdio.h>
// #imclude<conio.h>  // --> For turbo c compiler

// function for searching the element in the array
int Binary_search(int[], int, int);

// main function
int main(){
    int arr[100], size, key;

    // clrscr() // for turbo c compiler 
    printf("Enter the no of the elements of the array :: ");
    scanf("%d",&size);
    printf("Enter the %d elements for the array in sorted way : ",size);

    // loop for inserting the array elements 
    for( int i =0; i< size ; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d",&key);

    // Calling the function for searching

    int q = Binary_search(arr, size, key);

    if(q == -1){
        printf("Searching unsuccessful.\n");

    } else{
        printf("Searching successful.\n");
        printf("The element %d is found at index %d, at position %d\n",key,q, (q+1));
    }


    // getch(); // for turbo c compiler



}

// Function for searching the element in the array

int Binary_search(int arr[], int size, int key)
{
    int low = 0, high = size -1, mid;

    // for(int i  = 0; i< size ; i++){
    //     mid = (low +high)/2;
    //     if(arr[mid] == key)
    //         return mid;
    //     if(arr[mid] < key)  
    //     {
    //         low = mid +1;
    //     }else{
    //         high = mid -1;
    //     }

    // }

    // Alternative way to implement binary search using while loop
    while(low <= high){
        mid = (low +high)/2;
        if(arr[mid] == key)
            return mid;
        if(arr[mid] < key)  
        {
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}



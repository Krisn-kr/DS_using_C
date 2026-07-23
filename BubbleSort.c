#include<stdio.h>
// #include<conio.h>  // --> For turbo c compiler

// function for sorting the array
void Bubble_Sort(int arr[], int size);

// main function
int main(){
    int arr[100], size, value;

    // clrscr() // for turbo c compiler 
    printf("Enter the no of the elements of the array :: ");
    scanf("%d",&size);
    printf("Enter the %d elements for the array in sorted way : ",size);

    // loop for inserting the array elements 
    for( int i =0; i< size ; i++){
        scanf("%d", &arr[i]);
    }

    // calling bubble sort function
    Bubble_Sort(arr, size);    // Calling the function for searching

    // getch(); // for turbo c compiler

}

void Bubble_Sort(int arr[], int size)
 {
    int temp, pass, i;
    
    for(pass =0; pass < size ; pass++)
      {
        for(i = 0; i< size -pass - 1; i++)
          {
            if(arr[i] > arr[i+1])
               {
                // swap
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
               }
          }
    }

    for(i = 0; i < size ; i++)
        {
            printf("%d\t",arr[i]);
        }
 }
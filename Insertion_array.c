#include<stdio.h>
// #include<conio.h>  // --> For turbo c compiler

int Sequential_search(int arr[], int size, int key);

// main function
int main(){
    int arr[100], size, key;

    printf("Enter the no of elements of the array : ");
    scanf("%d",&size);
    printf("Enter the %d Elements for the array : \n",size);

    // Loop for inserting array elements
    for(int i = 0; i< size ; i++){
        printf("enter %d elements : ",i);
        scanf("%d",&arr[i]);
    }
      
  
    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    // Calling the function for searching / Traversing

    int  q = Sequential_search(arr,size,key);


    // check if value found

    if(q == -1){
        printf("Searching unsuccesfull\n");
        
    } 
    else{
        printf("Searching successful\n");
        printf("The element %d is found at index : %d\n",key,q);
    }

}

// Function for searching the element in the array
int Sequential_search(int arr[], int size, int key)
{
    

    // Loop for searching the element in the array

    for (int i =0; i< size ; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
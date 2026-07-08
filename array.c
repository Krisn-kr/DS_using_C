#include <stdio.h>

#define MAX 100

void show(int arr[], int size);
void insert(int arr[], int *size, int pos, int value);
void deleteElement(int arr[], int *size, int pos);

int main()
{
    int arr[MAX];
    int size;
    int choice;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size > MAX)
    {
        printf("Array size exceeds maximum limit.\n");
        return 0;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            show(arr, size);
            break;

        case 2:
        {
            int pos, value;

            printf("Enter position (0 to %d): ", size);
            scanf("%d", &pos);

            printf("Enter value: ");
            scanf("%d", &value);

            insert(arr, &size, pos, value);
            break;
        }

        case 3:
        {
            int pos;

            printf("Enter position to delete (0 to %d): ", size - 1);
            scanf("%d", &pos);

            deleteElement(arr, &size, pos);
            break;
        }

        case 0:
            printf("Program terminated.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 0);

    return 0;
}

// Display Function
void show(int arr[], int size)
{
    if (size == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array Elements: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Insert Function
void insert(int arr[], int *size, int pos, int value)
{
    if (*size == MAX)
    {
        printf("Array Overflow!\n");
        return;
    }

    if (pos < 0 || pos > *size)
    {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = *size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    (*size)++;

    printf("Element inserted successfully.\n");
}

// Delete Function
void deleteElement(int arr[], int *size, int pos)
{
    if (*size == 0)
    {
        printf("Array Underflow!\n");
        return;
    }

    if (pos < 0 || pos >= *size)
    {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = pos; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Element deleted successfully.\n");
}
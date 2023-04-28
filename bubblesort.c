#include <stdio.h>

void bubbleSort(int array[], int size)
{

    for (int i = 0; i < size - 1; ++i)
    {

        for (int j = i + 1; j < size; j++)
        {

            if (array[i] > array[j])
            {

                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[100];
    int size, i;
    printf("enter no of elements \n");
    scanf("%d", &size);
    printf("enter no of elements one by one \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("array before sorting \n");
    printArray(data, size);
    bubbleSort(data, size);
    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
}
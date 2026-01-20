#include<stdio.h>


int findSecondLargest(int arr[], int count){
    int largest = arr[0];
    int second_largest = 0;

    for (int i=1; i < count; i++)
    {

        if(arr[i] > largest){
          second_largest = largest;
          largest = arr[i];     

        }else if(arr[i] > second_largest && arr[i] < largest){
            second_largest = arr[i];
                
        }
    }

    return second_largest;
}



void main(){

    printf("Enter number of elements in array\n");
    int count = 0;
    scanf("%d", &count);
    int arr[count];
    
    for (size_t i = 0; i < count; i++)
    {
        printf("Enter element %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    
    
    int second_largest = findSecondLargest(arr, count);

    printf("The second largest element is %d\n", second_largest);

}

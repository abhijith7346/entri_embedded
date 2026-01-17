#include<stdio.h>

void main(){

    int arr[] = {1, 2, 8, 9, 6,10, 5};
    int count = 7;

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
    
    printf("The second largest element is %d\n", second_largest);
    printf("The largest element is %d\n", largest);

}
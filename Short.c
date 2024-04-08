#include <stdio.h>

int main() {
    
    int min,temp,arr[]={2,1,3,4,5};
    min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<min)
        {
            // temp=min;
            min=arr[i];
            // arr[i]=temp;
        }
    }
    // for(int i=0;i<5;i++)
    // {
        printf("%d ",min);
    // }

    return 0;
}
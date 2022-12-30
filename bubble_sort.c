/*write a c program to sort elements using bubble sorting*/
#include<stdio.h>
void main()
{
    int arr[15],i,n,temp = 0,j;
    
    printf("Enter the number of elements in array: \n");
    scanf("%d",&n);

    printf("Enter %d elements: \n",n);
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);

for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(i=0; i<n; i++)
{
    printf("%d  ",arr[i]);
}
}
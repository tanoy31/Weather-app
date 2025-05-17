#include<stdio.h>
int main()
{
    int numbers[]={23,34,55,102,3627,-12};
    int lengthofarray=sizeof(numbers)/sizeof(numbers[0]);
    if(lengthofarray<2)
    {
        printf("array should have atleast 2 numbers\n");
    }
    int first,second;
    if(numbers[1]>numbers[0])
        {
            first=numbers[1];
        second=numbers[0];
        }
    else
    {
        first=numbers[0];
        second=numbers[1];
    }
    for(int index=2;index<lengthofarray;index++)
    if(numbers[index]>first){
        second=first;
        first=numbers[index];
    }
    else if(numbers[index]>second && numbers[index]!=first){
        second=numbers[index];
    }
    printf("The first largest number is %d\n",first);
    printf("The second largest number is %d",second);


}

//
//  main.c
//  array
//
//  Created by Pallavi M on 2024-07-29.
//

#include <stdio.h>
#include <stdlib.h>


struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("Elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d\n",arr.A[i]);
}

void Append(struct Array *arr, int x){
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}

void Insert(struct Array *arr, int index, int x){
    if(index>=0 && index<= arr->length)
    {
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr,int index){
    
    int x=0;
    
    if(index>=0 && index<=arr->length){
        x=arr->A[index];
        for(int i=index; i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
        
    }
    
    return 0;
}


int main() {
  /*C program for demonstration of how to build an ADT
    struct Array arr;
    int n,i;
    
    printf("Enter size of an array");
    scanf("%d",&arr.size);
    
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length =0;
    
    printf("Enter number of numbers: ");
    scanf("%d",&n);
    
    printf("Enter all elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length =n;
    
    Display(arr);
   */
    
    struct Array arr={{2,3,4,5,6},20,5};
   
    //Insert(&arr,1,12);
    printf("%d\n",Delete(&arr,4));
    //Append(&arr,10);
    Display(arr);
   
    
    return 0;
}

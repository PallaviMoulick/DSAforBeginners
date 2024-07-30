//
//  gfg_array_basics.cpp
//  array
//
//  Created by Pallavi M on 2024-07-29.
//

#include <stdio.h>
#include <stdio.h>

#include <iostream>
using namespace std;

void printArraySized(int arr[3], int n)
{
    cout<<"Array as Sized Array Argument: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //cout<<"\n";
}

void printArrayUnsized(int arr[], int n)
{
    cout<<"Array as Unsized Array Argument: ";
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }
}

void printArrayPointer(int* ptr, int n)
{
    cout<<"Array as Pointer Argument: ";
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
}


int main()
{
    
    //Initializing arrays with values
    int arr[5]={1,2,3,4,5};

    //Initialize array with values and without size
    int arr1[]={1,2,3,4,5};

    //Initialize array after declaration
    for(int i=0; i<5;i++)
    {
        arr[i]=10;
        cout<<arr[i]<<"\n";
    }

    //Initializing and declaring a partial array
    int partialArray[5] = {1,2};

    for(int i=0;i<5;i++)
    {
        cout<<partialArray[i]<<"\n";
    }

    //Accessing an element of an array
    //By index

    cout<<arr1[2]<<"\n";

    //update array element;

    arr1[0]=12;
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<"\n";
    }

    //Traverse an array

    int table_of_two[10]
    ={2,4,6,8,10,12,14,16,18,20};

    for(int i=0;i<10;i++){
        cout<<table_of_two[i]<<"\n";
    }

    //size of an array

    cout<<sizeof(table_of_two[0])<<"\n";
    cout<<sizeof(table_of_two)<<"\n";

    int len= sizeof(table_of_two)/sizeof(table_of_two[0]);

    cout<<len<<"\n";
    

    //Relationship between array and pointer

    //Defining an array
    int arr2[]={1,2,3,4};
    
    //Define a pointer
    int* ptr=arr2;
    
    cout<<"Memory address of arr:"<<&arr<<"\n";
    cout<<"Memory address of arr:"<<ptr<<"\n";
    
    //Printing array elements without indexing
    int arr3[]={11,22,33,44};
    
    cout<<"first element "<<*arr3<<"\n";
    cout<<"second element "<<*(arr3+1)<<"\n";
    
    //Passing array to function
    //1.Passing array as pointer
    
    int arr4[]={10,20,30};
    
    printArraySized(arr4,3);
    cout<<"\n";
    printArrayUnsized(arr4,3);
    cout<<"\n";
    printArrayPointer(arr4,3);
    cout<<"\n";
    
    //Declaring 2D array
    int arr5[3][3][3];
    
    //Initialize 2D array using loop
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                arr5[i][j][k]=i+j+k;
            }
        }
    }
    
    //Printing the element of 2D array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
            cout<<arr5[i][j][k]<<" ";
            }
            cout<<endl;
        }
        
        cout<<"\n";
        
    }
    
    
    
    
    
    return 0;
}

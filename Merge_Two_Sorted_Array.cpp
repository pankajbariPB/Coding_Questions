#include<iostream>
using namespace std;
/*  problem statment : Given tow sorted arrays, merge them into single array.
    input arr1 = [^1][^3][^5] , arr2 = [^2][^4][^6]
    output = [^1][^2][^3][^4][^5][^6]
    concept : array manipulation   
    difficulties :  1. how to initialise array without size with 
                    elements.
                    (int arr1[]={1,13,15,119};) 
                    2. how to find size of array
                    (int s2=sizeof(arr2)/sizeof(arr2[0]);)*/ 

int main()
{
    int arr1[]={1,13,15,119};
    int s1=sizeof(arr1)/sizeof(arr1[0]); // To Calculate Size Of Array
   
    int arr2[]={2,4,16,88};
    int s2=sizeof(arr2)/sizeof(arr2[0]);  // To Calculate Size Of Array
    int s3=s1+s2;
    int arr3[s3];
    int j=0;
    for(int i = 0; i < s3; i+=2)
    {
      
        if(arr1[j] < arr2[j])
        {
            arr3[i]=arr1[j];
            arr3[i+1]=arr2[j];
           
        }
        else{
            arr3[i]=arr2[j];
            arr3[i+1]=arr1[j];
           
        }
        j++;
    }
     cout<<"array3 :";
     for(int i = 0 ; i < s3 ; i++ )
     {
        cout<<arr3[i]<<" ";
     }

    return 0;
}
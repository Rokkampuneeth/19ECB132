#include <stdio.h>  
void  main()  
{  
    int arr[10]; 
    int i;  
       printf("\n\nRead and Print elements of an array:\n");
       printf("----------------------\n");	
  
    printf("Input 10 elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}

/*
  output
Read and Print elements of an array:
----------------------
Input 10 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
element - 6 : 7
element - 7 : 8
element - 8 : 9
element - 9 : 10

Elements in array are: 1  2  3  4  5  6  7  8  9  10 
  /*
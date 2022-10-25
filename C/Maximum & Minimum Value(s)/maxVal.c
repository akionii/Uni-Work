/*
 ============================================================================
 Name        : maxVal.c
 Author      : Leonardo Acchioni Mena
 Version     : 1.0
 Copyright   : N/A
 Description : Find max & min value, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

	//Calculate array size
	#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
	/* Function to find the minimum and
	   maximum element of the array */
	void findMinimumMaximum(int arr[], int N)
	{
		int i;
		/* variable to store the minimum
		   and maximum element */
		int min = arr[0], max = arr[0];
		// Traverse the given array
		for (i = 0; i < N; i++)
		{
			/* If current element is smaller
			   than min then update it*/
			if (arr[i] < min)
			{
				min = arr[i];
			}
			/* If current element is greater
			   than max then update it*/
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}

	    // Print the minimum and maximum element
	    printf("minimum element is %d", min);
	    printf("\n");
	    printf("maximum element is %d", max);
        printf("\n");
	}

	int main()
		{
		    // Defined array
		    int arr[] = {625, -334, 4438, -2067 };

		    // Length of array
		    int N = ARRAY_SIZE(arr);

		    // Call of the function/algorithm
		    findMinimumMaximum(arr, N);

		    return 0;
		}
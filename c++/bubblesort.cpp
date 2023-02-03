
//Bubble Sort

#include<iostream>
using namespace std;



void bubble(int *arr, int size)
{
	for(int i=0; i<size-1 ; i++)
	{
		for(int  j=0; j<(size-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for (int i=0; i<size; i++)
		printf("%d ", arr[i] );
		printf("\n");

}

int main()
{
	int a;
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size];
	printf("Enter the number to be included in an array: \n");
	for(int i=0; i<size; i++)
		cin >> arr[i];

	bubble(arr,size);


}

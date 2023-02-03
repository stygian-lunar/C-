// //might work woth gcc
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[5] = { [0...4] = 3};
// 	cout << arr << endl;
// }



// /print any same single value in the whole array
// #include<iostream>
// using namespace std;

// int main()
// {
// 	int arr[100];
// 	fill_n(arr, 100, 45);
// 	for(int i=0; i<100; i++){
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }



// // Taking input in an array and printing the max and min value from the array


// #include<iostream>
// #include<limits.h>
// using namespace std;



// int getmax(int arr[], int n){

// 	int max = INT_MIN;
// 	for(int i=0; i<n; i++){
// 		if(arr[i]> max){
// 			max=arr[i];
// 		}
// 	}
// 	return max;
// }

// int getmin(int arr[], int size){
// 	int min = INT_MAX;
// 	for(int i=0; i< size; i++){
// 		if(arr[i]< min){
// 			min = arr[i];
// 		}
// 	}
// 	return min;
// }	


// int main()
// {	
// 	int size;
// 	cout << "Enter the number of items you want in the array :" ;
// 	cin >> size;
// 	int arr[5];

// 	for (int i=0; i < size; i++){
// 		cin >> arr[i];

// 	}

// cout << "max value in the array is: " << getmax(arr, size) << endl;
// cout << "min value in the array is: " << getmin(arr, size) << endl;
// }




// //Value doesn't change in main function although altered in a new funation


// #include<iostream>
// using namespace std;


// int update(int n)
// {

// 	int c=n+1;
// 	return c;
// }

// int main()
// {
// 	int a=5;
// 	cout << "update: " << update(a) << endl;

// 	cout << "main: " << a << endl;
// }



// //Array value changes in main function after being altered in the new funation


// #include<iostream>
// using namespace std;


// int update(int arr[], int n)
// {

// 	arr[1]=1;
// 	cout << "Inside update funtion: ";
// 	for(int i=0; i<5; i++)
// 	{
// 		cout << arr[i];
// 	}
// 	cout << endl;
// 	return 0;
// }

// int main()
// {

// 	int arr[5]= {2,5,3,8,9};

// 	cout << update(arr, 5);

// 	cout << "In the main funtion: ";
// 	for(int i=0; i<5; i++)
// 	{
// 		cout << arr[i];
// 	}
// 	cout << endl;
// }




// ////printing Reverse of an array

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[5] = {1,2,3,4,5};
// 	cout << "Reverse of array: ";
// 	for(int i=4; i>=0; i--){
// 		cout << arr[i];
// 	}
// 	cout << endl;
// }





// /////Sum of element in an array

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[5] = {1,2,3,4,5};
// 	int sum=0;
// 	cout << "Sum of all elements in array: ";
// 	for(int i=0; i<5; i++){
// 		sum=sum+arr[i];
// 	}
// 	cout << sum << endl;

// }



// //even and odd using '&' operator
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int a=611;

// 	if((a&1) == 0)
// 	{
// 		cout<< a << " is even" << endl;
// 	}
// 	else if((a&1)==1)
// 	{
// 		cout << a << " is odd" << endl;
// 	}
// }





// ///////converting decimal to binary

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
// 	int a;

// 	cout << "Enter a number to convert into binary: ";
// 	cin >> a;


// 	int ans=0;
// 	int i=0;
// 	while(a!=0){

// 		int digit = a&1;
// 		ans=(digit * pow(10, i))+ ans;
// 		a = a >> 1;

// 		i++;
// 	}
// 	cout << "Binary :" << ans << endl;

// }




// //// Binary to decimal

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
// 	int a, sum=0, i=0; 
// 	cout << "Enter the binary: ";
// 	cin >> a;

// 	while(a!=0){
// 		int n=a%10;
// 		a=a/10;
// 		if(n==1){
// 			sum=sum+(pow(2, i));
// 		}
		
// 		i++;


// 	}
// 	cout << "In decimal :" << sum << endl;
// }







// ////counting the number of set bits 

// #include<iostream>
// using namespace std;

// int main()
// {
// 	int a, i=0;
// 	cout << "Enter the number to check the number of set bits in it: ";
// 	cin >> a;
// 	int n=a;
// 	int count=0;
// 	while(a!=0){
// 		int num=a&1;
// 		if(num==1){
// 			count = count+1;
// 		}
// 		a = a >>1;
// 		i++;
// 	}
// 	cout << "Number of set bits in " << n << " is :" << count << endl;
// }




// ////Check if the number is a powers 2 number or not

// #include<iostream>
// using namespace std;

// int main()
// {
// 	int a, i=0;
// 	cout << "Enter the number to check whether it is a powers 2 number or not: ";
// 	cin >> a;
// 	int n=a;
// 	int count=0;
// 	while(a!=0){
// 		int num=a&1;
// 		if(num==1){
// 			count = count+1;
// 		}
// 		a = a >>1;
// 		i++;
// 	}
// 	if(count ==1){
// 		cout << n << " is a powers 2 number " << endl;
// 	}
// 	else{
// 		cout << n << " is NOT a powers 2 number " << endl;	
// 	}




// //// Find the compliment of the number
// #include<iostream>
// using namespace std;

// class Compliment {
// public:
// 	int Myfunc(int n){
// 		if(n==0){
// 			return 1;
// 		}
// 		int m=n;
// 		int mask =0;
// 		while(m!=0){
// 			m = m >> 1;
// 			mask = (mask << 1) | 1;
// 		}
// 		int ans = (~n) & mask;
// 		return ans;
// 	}

// };
// int main()
// {
// 	Compliment obj;
// 	int num ;
// 	cout << "Enter the number whose compliment is to be found: ";
// 	cin >> num;
// 	cout << "Compliment of " << num << " is: " << obj.Myfunc(num) << endl;
// }





// #include<iostream>
// using namespace std;

// class Solution 
// {
// public:
//     bool isPowerOfTwo(int n) 
//     {
//         int m=n;
//         int count=0;
//         while(m!=0)
//         {
//             m = m&1;
//             if(m==1)
//             {
//                 count = count+1;
                
//             }
//             m = m >>1;            
//         }
//         if(count==1){
//         	return true;
//         }

//         else{
//         return false;
//     	}
//     }     
// };

// int main()
// {
// 	Solution obj;
// 	cout << obj.isPowerOfTwo(5) << endl;
// }






// ////// Number of notes

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[4] = {100, 50, 20, 10};
// 	int n,m;
// 	cout << "Enter the amount: ";
// 	cin >> n;
// 	for(int i=0; i<4; i++){
// 		if(n<arr[i]){
// 			continue;
// 		}
// 		else{
// 			m= n/arr[i];
// 			n= n-(m*arr[i]);
// 			cout << arr[i] << ":" << m << endl;
// 		}

// 	}
// }





// //////.............. LENEAR SEARCH ................////////


// #include<iostream>
// using namespace std;

// bool lin_search(int arr[], int size, int num){
// 	for(int i=0; i<size; i++){
// 		if(num == arr[i]){
// 			return 1;
// 		}
// 	}
// 	return 0;
// }

// int main()
// {
// 	int arr[10] = { 2, -3, 8, -1, 3, 4, 10, -13, 25, 89};
// 	int num;
// 	cout << "Enter the number to be searched: ";
// 	cin >> num ;
// 	bool found = lin_search(arr, 10, num);
// 	if(found){
// 		cout << num << " is present" << endl;
// 	}
// 	else{
// 		cout << num << " is absent" << endl;
// 	}
// }



// //// Reversing an array

// #include<iostream>
// using namespace std;


// void reverse_array(int arr[], int size){
// 	 int start = 0;
// 	 int end = size-1;
// 	 while(start<=end){
// 	 	swap(arr[start], arr[end]);
// 	 	start++;
// 	 	end--;
// 	 }
// }

// void print_array(int arr[], int s){
// 	for(int i=0; i<5; i++){
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }

// int main(){
// 	int arr[5] = {1,2,3,4,5};
// 	reverse_array(arr, 5);
// 	print_array(arr, 5);

// }




// //// Swapping alternate numbers /////////
// #include<iostream>
// using namespace std;


// // ////or
// // // void swap_alt(int arr[],int  size){
// // // 	int i=0, j=1;
// // // 	while(i<size-1){
// // // 		while(j<size){
// // // 			swap(arr[i], arr[j]);
// // // 			i =i+2;
// // // 			j =j+2;
// // // 		}
// // // 	}
// // // }


// //////or...less complexity
// void swap_alt(int arr[], int size){
// 	for(int i=0; i<size; i+=2){
// 		if(i+1< size){
// 			swap(arr[i], arr[i+1]);
// 		}
// 	}
// }


// void print_array(int arr[], int size ){
// 	for(int i=0; i<size; i++){
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }

// int main()
// {

// 	int arr[7]={2,4,1,6,0,1,9};
// 	swap_alt(arr, 7);
// 	print_array(arr, 7);
// }





// //////   FInd the unique integer or integer with no repeatation

// #include<iostream> 
// using namespace std;

// int main()
// {
// 	int arr[7] = {2, 3, 1, 5, 2, 1, 3};
// 	int a = 0;
// 	for(int i=0; i<7; i++){
// 		a=a^arr[i];
// 	} 
// 	cout << a << endl;
// }






// //// Find one dupicate 

// #include<iostream>
// using namespace std;

// int main(){


// 	int ans=0;
// 	int arr[6]={1,2,3,4,5,2};
// 	for(int i=0; i<6; i++){
// 		ans=ans ^ arr[i];
// 	}

// 	for(int i=1; i<=5; i++){
// 		ans=ans^i;
// 	}

// 	cout << ans << endl;
// }





// //////----------  VECTOR ARRAYS ----------------//////


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
// 	vector<int> arr;
// 	return 0;

// }




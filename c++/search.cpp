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




// //// ------------------- Bianry search --------------- ///////////


// #include<iostream>
// using namespace std;

// int bin_search(int arr[], int size, int key){
// 	int start=0, end=size-1;
// 	int mid=(start+end)/2;
// 	while(start<=end){
// 		if(arr[mid]==key){
// 			return mid;
// 		}
// 		else if(key > arr[mid]){
// 			start=mid+1;
// 		}
// 		else{
// 			end=mid-1;
// 		}
// 		mid=(start+end)/2;
// 	}
// 	return -1;

// }




// int main()
// {

// 	int arr[5]= {1,2,3,4,5};
// 	int key;
// 	cout << "Enter the key to be found :";
// 	cin >> key;
// 	cout << "Found at index " << bin_search(arr, 5, key) << endl;
// }



// ///// ----------------- Optimised Binary Search ---------------- /////////


// //// using mid= start + (end-start)/2 
// //// instead of  mid= (start+end)/2
// //// so that the range does not excees (2^31-1)


// #include<iostream>
// using namespace std;

// int binary(int arr[], int size, int key)
// {
// 	int start=0;
// 	int end=size-1;
// 	int mid= start + (end-start)/2 ;
// 	while(start<=end)
// 	{
// 		if(arr[mid]==key){
// 			return mid;
// 		}
// 		else if(key> arr[mid]){
// 			start=mid+1;
// 		}
// 		else{
// 			end=mid-1;
// 		}
// 		mid= start + (end-start)/2 ;	
// 	}
// 	return -1;
// }


// int main()
// {
// 	int arr[5]={1,2,3,4,5};
// 	int key;
// 	cout << "Enter the element to be found :";
// 	cin >> key;
// 	int ans= binary(arr, 5, key);

// 	//printing the location of the element
// 	if(ans == -1){
// 		cout << "Not Found" << endl;
// 	}
// 	else{
// 		cout << "Element was found at index :" << ans <<endl;
// 	}
// }



// //// First occurence and last occurence in an array ////

// #include<iostream>
// using namespace std;

// int first_occur(int arr[], int size, int key){
// 	int start=0;
// 	int end=size-1;
// 	int mid= start+(end-start)/2;
// 	int ans=-1;
// 	while(start<=end){
// 		if(arr[mid]==key){
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else if(key > arr[mid]){
// 			start = mid+1;
// 		}
// 		else{
// 			end=mid-1;
// 		}
// 		mid=start + (end-start)/2;
// 	}
// 	return ans;

// }

// int last_occur(int arr[], int size, int key){
// 	int start=0;
// 	int end=size-1;
// 	int mid= start+(end-start)/2;
// 	int ans=-1;
// 	while(start<=end){
// 		if(arr[mid]==key){
// 			ans = mid;
// 			start = mid+1;
// 		}
// 		else if(key > arr[mid]){
// 			start = mid+1;
// 		}
// 		else{
// 			end=mid-1;
// 		}
// 		mid=start + (end-start)/2;
// 	}
// 	return ans;

// }

// int main(){
// 	int arr[6] = {1, 2, 2, 2, 2, 2};
// 	int size = 6;
// 	int total =  (last_occur(arr, size, 2)-first_occur(arr, size, 2))+1 ;
// 	cout << "First occurence is at index: " << first_occur(arr, size, 2) << endl;
// 	cout << "Last occurence is at index: " << last_occur(arr, size, 2) << endl;
// 	cout << "Total no. of occurence: " <<  total << endl;

// }




// // Peak Element







// ////// -------------- Search in rotated sorted array ----------------- ///////////


// #include<iostream>
// using namespace std;

// ///// function to find pivot
// int get_pivot(int arr[], int size)
// {
// 	int s=0;
// 	int e=size-1;
// 	int mid=s+(e-s)/2;
// 	while(s<e)
// 	{
// 		if(arr[mid] >= arr[0]){
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid;
// 		}
// 	mid=s+(e-s)/2;
// 	}
// 	return s;
// }

// ////function for binary search
// int bin_search(int arr[], int size, int key, int s, int e){

// 	int mid= s+(e-s)/2;
// 	int ans;
// 	while(s<=e){
// 		if(key==arr[mid]){
// 			ans=mid;
// 			return ans;
// 		}
// 		else if(key> arr[mid]){
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid-1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return -1;

// }
 
// ///////  Main function 
// int main()
// {
// 	int arr[5]={7,9,1,2,3};
// 	int size=5;
// 	int key, sol;

// 	cout << "Enter the element to be searched: ";
// 	cin >> key;

// 	/////printng pivot element
// 	int pivot= get_pivot(arr, size);
// 	cout << "Pivot is at index: " << pivot << endl;

// 	////Condition to check where does the element lie and searching accordingly 
// 	if(key >= arr[pivot] && key <= arr[size-1]){
// 		sol= bin_search(arr, size, key, pivot, size-1);
		
// 		if(sol==-1){
// 			cout << "Key is absent." << endl;
// 		}
// 		else{
// 			cout << "Key is present at index: " << sol << endl;
// 		}
// 	}
// 	else{
// 		sol= bin_search(arr, size, key,  0, pivot-1);
// 		if(sol==-1){
// 			cout << "Key is absent." << endl;
// 		}
// 		else{
// 			cout << "Key is present at index: " << sol << endl;
// 		}
// 	}
// }



// ////////----------------------------------------------------------------///////////







// ///////-------------FInding Square Root using Binary Search -------------/////////


// #include<iostream>
// using namespace std;


// long long int sqrt(int n){
// 	int s=0;
// 	int e=n;
// 	long long int ans=-1;
// 	long long int mid=s+(e-s)/2;
	

// 	while(s<=e){
// 		long long int square=mid*mid;

// 		if(square==n){
// 			return mid;
// 		}
// 		else if(square>n){
// 			e=mid-1;
// 		}
// 		else{
// 			ans=mid;
// 			s=mid+1;
// 		}
// 		mid=s+(e-s)/2;
		
// 	}
// 	return ans;
// }


// double morePrecision(int n, int precision, int tempsol){
// 	double factor=1;
// 	double ans=tempsol;
// 	for(int i=0; i<precision; i++){
// 		factor=factor/10;
// 		for(double j=ans; j*j<n; j=j+factor){
// 			ans=j;
// 		}
// 	}
// 	return ans;
// }



// int main()
// {
// 	int n;
// 	cout << "Enter the number whose square root is to be found: ";
// 	cin >> n ;
// 	int tempsol=sqrt(n);
// 	// cout << "Square root of "<< n << " is: " << sqrt(n) << endl;
// 	cout << "Square root of "<< n << " is: " << morePrecision(n, 3, tempsol) << endl;

// }






//////// ---------- Book Allocation Problem ---------- //////////



// #include<iostream>
// #include<limits.h>
// using namespace std;


 
// int sum_check(int arr[], int size, int m, int mid){

// 	int student_count=1;
// 	int page_count=0;
// 	for(int i=0; i<size; i++){
// 		if(arr[i]+page_count<=mid){
// 			page_count=arr[i]+page_count;
// 		}
// 		else{
// 			student_count++;
// 			if(student_count>m || arr[i]>mid){
// 				return false;
// 			}
// 			page_count=arr[i];

// 		}


// 	}
// 	return true;


// }


// int book_alloc(int arr[], int size, int m){
// 	int s=0, add=0;
// 	int e;
// 	int ans=-1;
// 	for(int i=0; i<size; i++){
// 		add=add+arr[i];
// 	}
// 	e=add;
// 	int mid=s+(e-s)/2;

// 	while(s<e){
// 	 	if(sum_check(arr, size, m, mid)){
// 	 		ans=mid;
// 	 		e=mid-1;
// 	 	}
// 	 	else{
// 	 		s=mid+1;
// 	 	}
// 	 	mid=s+(e-s)/2;
// 	 }
// 	 return ans;


// }




// int main()
// {

// 	int page[4]={10,20,30,40}, m=2;
// 	int size=4;
// 	cout << book_alloc(page, size, m) << endl;
	
// }









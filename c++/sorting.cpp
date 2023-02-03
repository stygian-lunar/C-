//////// ----- SELECTION SORT -------- ///////


// #include<iostream>
// using namespace std;

// int main(){
// 	int arr[5]={6,4,9,2,7};
// 	int size=5;
// 	for(int i=0; i<size-1; i++){
// 		int min_index=i;
// 		for(int j=i+1; j<size; j++){
// 			if(arr[j]<arr[min_index]){			
// 				min_index=j;
// 			}
// 		}
// 		swap(arr[i], arr[min_index]);
// 	}
// 	for(int i=0; i<size; i++){
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }


// ///////// ------ BUBBLE SORT --------- ///////


// #include<iostream>
// using namespace std;


// int bubblesort(int arr[], int size){
// 	for(int i=0; i<size-1; i++){
// 		bool swapped=false;
// 		for(int j=0; j<size-1-i; j++){
// 			if(arr[j]> arr[j+1]){
// 				swap(arr[j], arr[j+1]);
// 				swapped=true;
// 			}
// 		}
// 		if(swapped== false){
// 			break;
// 		}
// 	}
// 	return 0;
// }

// int main(){
// 	int arr[5]={2,5,9,8,1};
// 	int size=5;
// 	bubblesort(arr, size);

// 	for(int i=0; i<size; i++){
// 		cout << arr[i] << " ";

// 	}
// 	cout << endl;
// }



/////// --------- Insertion Sort ---------- /////////


// #include<iostream>
// using namespace std;


// void Insertion(int arr[], int size){
// 	for(int i=1; i<size; i++){
// 		int temp=arr[i];
// 		int j=i-1;
// 		for(; j>=0; j--){
// 			if(arr[j]>temp){
// 				arr[j+1]=arr[j];
// 			}
// 			else{
// 				break;
// 			}
// 		}
// 		arr[j+1]=temp;

// 	}
// }



// int main(){
// 	int arr[5]={2,5,9,8,1};
// 	int size=5;
// 	Insertion(arr, size);
// 	// for(int i=0; i<size; i++){
// 	// 	cout << arr[i] << " ";
// 	// }
// 	// cout<<endl;


// }


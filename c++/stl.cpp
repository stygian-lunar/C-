// //// Static array in STL


// #include<iostream>
// #include<array>
// using namespace std;

// int main()
// {
// 	// int arr[3] = {1,2,3};
// 	array<int,4> arr={1,2,3,4};
// 	int size=arr.size();

// 	for(int i=0;i<size;i++){
// 		cout << arr[i] << ",";

// 	}
// 	cout << endl;

// 	cout << "element at index-2: " << arr.at(2) << endl;
// 	cout << "Is array empty: " << arr.empty() << endl;
// 	cout << "element at front: " << arr.front() << endl;
// 	cout << "element at back: " << arr.back() << endl;
// }



// //// Vector Array - STL


// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
// 	// declaring vector array
// 	vector<int> v;
// 	cout << "Capacity-> " << v.capacity() << endl;
// 	int a, size;

// 	cout << "Number of elements you want in the array: ";
// 	cin >> size;

// 	//push_back 
// 	for(int i=0; i<size ; i++){
// 		cout << "Element at index " << i << " : ";
// 		cin >> a;
// 		v.push_back(a);
// 	}

// 	// print array
// 	cout << "Array-> ";
// 	for(int i=0; i<size; i++){
// 		cout << v.at(i) << " ";
// 	}
// 	cout << endl;

// 	// Accessing
// 	cout << "Capacity-> " << v.capacity() << endl;
// 	cout << "Size-> " << v.size() << endl;
// 	cout << "front-> " << v.front() << endl;
// 	cout << "back-> " << v.back() << endl;


// 	///pop_back 
// 	v.pop_back();

// 	cout<< "After pop: ";
// 	for(int i:v){
// 		cout << i << " ";
// 	}
// 	cout << endl;


// 	//clearing the vector array
// 	v.clear();
// 	cout << "Capacity-> " << v.capacity() << endl;


// 	cout << endl;
// 	cout << endl;

// 	// declaring seize of an array and all elements with 1
// 	cout << "All ones in an array-> ";
// 	vector<int> all_ones(5,1);
// 	for(int i:all_ones){
// 		cout << i << " ";
// 	}
// 	cout << endl;

// 	// copying elements from one vector array to another
// 	cout << "Copied array-> ";
// 	vector<int> a_copy(all_ones);
// 	for(int i:a_copy){
// 		cout << i << " ";
// 	}
// 	cout << endl;

// }




// //// Deque - STL

// #include<iostream>
// #include<deque>
// using namespace std;

// int main()
// {
// 	deque<int> d;

// 	d.push_front(1);
// 	d.push_back(2);

// 	cout << "Element at first index: " << d.at(0) << endl;

// 	cout << "Element at front: " << d.front() << endl;
// 	cout << "Element at back: " << d.back() << endl;
// 	cout << "Is deque empty: " << d.empty() << endl;
// 	cout << "Size of deque: " << d.size() << endl;

// 	d.erase(d.begin(), d.begin()+1);
// 	cout << "Size acfter erase " << d.size() << endl;

// 	cout << "Element at first index: " << d.at(0) << endl;


// } 



// //// LIST - (Doubly Linked list)

// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
// 	list<int> l;


// 	//pushing elements into the list
// 	l.push_front(1);
// 	l.push_back(2);

// 	for(int i:l){
// 		cout << i << " ";
// 	}
// 	cout << endl;

// 	//erasing elements
// 	l.erase(l.begin());

// 	for(int i:l){
// 		cout << i << " ";
// 	}
// 	cout << endl;

// 	// initialised list
// 	list<int> n(5, 100);
// 	for(int i:n){
// 		cout << i << " ";
// 	}
// 	cout << endl;


// 	// copying list
// 	list<int> copy(n);
// 	for(int i:copy){
// 		cout << i << " ";
// 	}
// 	cout << endl;

// }




// Stack


 // #include<iostream>
// using namespace std;

// // void func (int a, int b)
// // {
// // 	a++; 
// // 	b++;
// // }

// // int main()
// // {
// // 	int i=2, j=5;
// // 	func(i, j);
// // 	cout << "i = " << i <<"; j= " << j << endl;

// // 	return 0;
// // }

// void push(int x)
// {
// 	q2.push(x);
// 	while(!q1.empty()){
// 		q2.push(q1.front())
// 	}
// }



// #include<iostream>
// using namespace std;

// int main()
// {
// 	int num;
// 	cin >> num;

// 	switch(num){

// 		case 1: cout << "First" << endl;
// 		break;

// 		case 2: cout << "Second" << endl;
// 		break;

// 		default : cout << "None" << endl;
// 		break;

// 	}

// 	return 0;
// }


// macros
// #define  num(c>range)





// /////palindrome

// #include <iostream>
// using namespace std;

// int main()
// {
//      int n, num, digit, rev = 0;

//      cout << "Enter a positive number: ";
//      cin >> num;

//      n = num;

//      do
//      {
//          digit = num % 10;
//          rev = (rev * 10) + digit;
//          num = num / 10;
//      } while (num != 0);

//      cout << " The reverse of the number is: " << rev << endl;

//      if (n == rev)
//          cout << " The number is a palindrome.";
//      else
//          cout << " The number is not a palindrome.";

//     return 0;
// }



// //// CALCULATOR

// #include<iostream>
// using namespace std;

// int main()
// {
// 	int a,b;
// 	char op;

// 	cout << "Enter the first number: "; 
// 	cin >> a;

// 	cout << "Enter the second number: "; 
// 	cin >> b;


// 	cout << "Select the operation ( +, -, *, /) : " ; 
// 	cin >> op;

// 	switch(op){
// 		case '+':  cout << "Addtion: " << (a+b) << endl;
// 			break;

// 		case '-':  cout << "Subtration: " << (a-b) << endl;
// 			break;

// 		case '*':  cout << "Multiplition: " << (a*b) << endl;
// 			break;

// 		case '/':  cout << "Division: " << (a/b) << endl;
// 			break;

// 		default : cout << "Wrong Operator" << endl;


// 	}

// }


//reverse of a number
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int a, n, sum=0;

// 	cin >> a;

// 	while(a!=0){
// 		n=a%10;
// 		a=a/10;
// 		cout << n << endl;
//		sum=( sum*10 )+ n
// 	}

// 	return 0;
// }


// // // // Number of notes

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



/////// Maximum occurence of characters

// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// int main(){
// 	int b[26];
// 	string a;
// 	cin >> a;
// 	int max=0;
// 	string occ;
// 	for(int i=0; i<26;i++){
// 		b[i]=0;
// 	}

// 	for(int i=0; i<a.size();i++){
// 		b[a[i]-'a']++;
// 	}

// 	for(int i=0; i<a.size(); i++){
// 		if(b[a[i]-'a']>0){
// 			cout << a[i] << ":" << b[a[i]-'a'] << " " ;
// 		}
// 		if(b[a[i]-'a']>max){
// 			max=b[a[i]-'a'];
// 			occ=a[i];
// 		}

// 		b[a[i]-'a']=0;
// 	}
// 	cout << endl;
// 	cout << "max occurence: " << occ << endl;
// }




////// Printing the patterns




// #include<iostream>
// using namespace std;

// int main()
// {
// 	int i,j;

// 	// for(i=0; i<4;i++){
// 	// 	for(j=0; j<i+1; j++){
// 	// 		cout << "*";
// 	// 	}
// 	// 	cout << endl;
// 	// }
// 	// cout << endl;
// 	// cout << endl;

// 	// for(i=0; i<4;i++){
// 	// 	for(j=4; j>i; j--){
// 	// 		cout << "*";
// 	// 	}
// 	// 	cout << endl;
// 	// }
// 	for(i=0; i<4;i++){
// 		for(j=1; j<4-1; j++){
// 			cout << " ";
// 		}
// 		cout << "*";
// 	}
// }



//// number of notes

// #include<iostream>
// using namespace std;

// void count(int arr[], int amount, int size){
// 	int m;
// 	for(int i=0; i<size; i++){
// 		if(amount<arr[i]){
// 			continue;
// 		}
// 		else{
// 			m=amount/arr[i];
// 			amount=amount-(m*arr[i]);
// 		}
// 		cout << arr[i] << ": " << m << endl;
// 	}
// }

// int main()
// {
// 	int arr[4]={100, 50, 20, 10};
// 	int amount;
// 	cout << "Enter amount: ";
// 	cin >> amount;
// 	count(arr, amount, 4);

// }



// // // creating a method inside a class
// #include<iostream>
// using namespace std;

// class Myclass
// {
// public:
// 	int age;
// 	void mymethod(){
// 		cout << "My method within a class" << endl;
// 	}
// }obj1;

// int main()
// {
// 	obj1.age = 22;
// 	cout << obj1.age << endl; 
// 	obj1.mymethod();
// }



// // // Creating a method outside a class
// #include<iostream>
// using namespace std;

// class Myclass
// {
// public:
// 	int age;
// 	void mymethod();
	
// }obj1;
// void Myclass :: mymethod(){
// 		cout << "My method outside class" << endl;
// 	}

// int main()
// {
// 	obj1.age = 22;
// 	cout << obj1.age << endl; 
// 	obj1.mymethod();
// }



// // // Creating a method outside a class with parameter/argument
// #include<iostream>
// using namespace std;

// class Myclass
// {
// public:
// 	int age;
// 	int mymethod(int height);
	
// }obj1;
// int Myclass :: mymethod(int height){
// 		return height;
// 	}

// int main()
// {
// 	obj1.age = 22;
// 	cout << obj1.age << endl; 
// 	cout << "Height: " << obj1.mymethod(6) << endl;
// }


// //// constructors

// #include<iostream>
// using namespace std;
// class Myclass
// {
// public:
// 	int age;
// 	Myclass(){
// 		cout << "I m a constructor" << endl;
// 	}
// }obj;

// int main()
// {
// 	obj.age = 22;
// 	cout << "My age: " << obj.age << endl;
// }





// #include<iostream>
// using namespace std;

// class Car
// {
// public:
// 	string brand;
// 	string model;
// 	int year;
// 	Car(string x, string y, int z){
// 		brand = x;
// 		model = y;
// 		year = z;
// 	}
// };

// int main()
// {
// 	Car obj("bmw", "x5", 1999);

// 	cout << obj.brand << " " << obj.model << " " << obj.year << endl;

// }


// #include<iostream>
// using namespace std;

// class Details
// {
// public:
// 	string name;
// 	string surname;
// 	int age;
// 	Details(string x, string y, int z){
// 		name = x;
// 		surname = y;
// 		age = z;
// 	}
// };

// int main()
// {
// 	Details obj("Ankita" , "Jaiswal", 22);
// 	cout << obj.name << " " << obj.surname << " " << obj.age << endl;
// }


// #include<iostream>
// using namespace std;

// class Car{
// public:
// 	string brand;
// 	string model;
// 	int year;
// 	Car(string x, string y, int z);
// };

// Car:: Car(string x, string y, int z){
// 	brand = x;
// 	model = y;
// 	year = z;

// }

// int main(){
// 	Car obj("BMW", "X5", 1999);
// 	cout << obj.brand << " " << obj.model << " " << obj.year << endl;
// }

// #include<iostream>
// using namespace std;

// class Myclass
// {
// public:
// 	int age;
// private:
// 	int height;
// }obj;

// int main()
// {
// 	obj.age=22;
// 	// obj.height=6;
// }



// #include<iostream>
// using namespace std;

// class Myclass
// {
// 	private:
// 		int age;

// 	public:
// 		void setage(int a){
// 			age = a;	
// 		}
// 		int getage(){
// 			return age;
// 		}

// }obj;

// int main()
// {
// 	obj.setage(22);
// 	cout << obj.getage() << endl;
// }


// #include<iostream>
// using namespace std;

// class Myclass
// {
// private:
// 	int age;
// public:
// 	void setage(int a){
// 		age = a;
// 	}
// 	int getage(){
// 		return age;
// 	}
// }obj;


// int main()
// {
// 	int n;

// 	cout << "Enter your age: ";
// 	cin >> n;
// 	obj.setage(n);
// 	cout << "My age is: " << obj.getage() << endl;
// }




// #include<iostream>
// using namespace std;

// class Vehicle
// {
// public:
// 	void mymethod1(){
// 		cout << "I am the base class object" << endl;
// 	}
// };

// class Cars : public Vehicle
// {
// public:
// 	void mymethod2(){
// 		cout << "I am the derived class object" << endl;
// 	}
// };



// int main(){

// 	Cars obj;
// 	obj.mymethod1();
// 	obj.mymethod2();
// }


// #include<iostream>
// using namespace std;

// class Base
// {	
// public:
// 	void Greet()
// 	{
// 		cout << "Hello I am Base Class method" << endl;
// 	}
// };


// class Child1 : public Base
// {
// public:
// 	void Greet1()
// 	{
// 		cout << "Child-1" << endl;
// 	}
// };

// class Derived : public Child1{
// public:
// 	void Greet2()
// 	{
// 		cout << "Child-2" << endl;
// 	}
// }obj;

// int main()
// {
// 	obj.Greet();
// 	obj.Greet1();
// 	obj.Greet2();
// }



// #include<iostream>
// using namespace std;

// class A
// {
// protected:
// 	int age;
// };

// class B : public A
// {
// public:
// 	int height;
// 	void setage(int a){
// 		age=a;
// 	}
// 	int getage(){
// 		return age;
// 	}
// }obj;


// int main()
// {
// 	obj.height = 6;
// 	obj.setage(22);
// 	cout << obj.getage() << endl;
// 	cout << obj.height << endl;
// }



// #include<iostream>
// using namespace std;

// class Fruits
// {
// public:
// 	void colour()
// 	{
// 		cout << "All colour of fruits" << endl;
// 	}
// }obj1;

// class Apple
// {
// public:
// 	void colour()
// 	{
// 		cout <<  "Apple is red" << endl;
// 	}
// }obj2;

// class Mango
// {
// public:
// 	void colour()
// 	{
// 		cout << "Mango is yellow" << endl;
// 	}

// }obj3;

// int main()
// {
// 	obj1.colour();
// 	obj2.colour();
// 	obj3.colour();
	
// }




// /////// Dynamic allocation of memory 

// #include<iostream>
// using namespace std;

// class Myclass
// {
// public:
// 	int i=10;
// 	void myMethod(){
// 		cout << "My method" << endl;

// 	}

// 	Myclass()
// 	{
// 		cout << "Constructor" << endl;
// 	}

// };


// int main()
// {
// 	Myclass obj1;
// 	Myclass *obj2 = new Myclass;
// 	cout << "i: " << obj1.i << endl; 
// 	cout << "i: " << (*obj2).i << endl; 
// 	cout << "i: " << obj2->i << endl; 
// }




// #include<iostream>
// using namespace std;

// class Myclass
// {
// public:
// 	int age;
// 	Myclass(int age){
// 		this -> age = age;
// 		cout << age << endl;
// 	}
// };

// int main()
// {
// 	Myclass obj(5);
// 	cout << "aa: " << obj.age << endl;
// }



// //// this keyword stores the current address of the object //// 


// #include<iostream>
// using namespace std;

// class Cons
// {
// public:
// 	int age; 
// 	Cons(int age){
// 		this -> age = age;
// 		cout << "Age: " << age << endl;
// 		cout << "Address of 'this': " << this << endl;
// 	}
// };

// int main()
// {
// 	Cons obj(5);
// 	cout << "Address of object: " << &obj << endl; 	
// }




// #include<iostream>
// using namespace std;

// class Mine
// {
// public:
// 	int age;
// 	Mine(int age){
// 		this -> age = age;
// 	}
// };

// int main()
// {
// 	Mine *obj = new Mine(22);
// 	// obj->age = 22;
// 	cout << "Age: " << (*obj).age << endl;
// }



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Hero
// {
// public:
// 	int age;
// 	string name;

// 	Hero(string name, int age){
// 		this -> age = age;
// 		this -> name = name;

// 	}
// 	void print(){
// 		cout << "Name: " << this -> name << endl;
// 		cout << "Age: " << this -> age << endl;
// 	}
// };

// int main(){
// 	Hero S("Ankita", 22);
// 	S.print();
// 	Hero R(S);
// 	S.print();


// }




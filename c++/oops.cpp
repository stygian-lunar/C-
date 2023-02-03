//// from w3 school




// #include<iostream>
// using namespace std;

// class Myclass			//the class
// {
// public:					// Access Specifier
// 	int mynum;			//Attribute (int variable)
// 	string mystring;	//Attribute (String variable)

// };

// int main()
// {
// 	Myclass myobj;		//Create an object of Myclass

// 	//Access attributes and set values
// 	myobj.mynum = 22;
// 	myobj.mystring = "Ankita";

// 	//Print attribute values
// 	cout << myobj.mynum << "\n";
// 	cout << myobj.mystring << endl;

// 	return 0;


// }



// #include<iostream>
// using namespace std;

// class Cars
// {
// public:
// 	string brand;
// 	string model;
// 	int year;
// }lambo, porsche;

// int main()
// {
// 	lambo.brand= "ABC";
// 	lambo.model= "Med1";
// 	lambo.year= 1986;

// 	porsche.brand = "CDE";
// 	porsche.model = "Med2";
// 	porsche.year = 1990;


// 	cout << lambo.brand << " " << lambo.model <<" "<< lambo.year << endl;
// 	cout << porsche.brand << " " << porsche.model << " " << porsche.year << endl;


// }



// ############################## Methods defined inside class ########################

// #include<iostream>
// using namespace std;

// class MyClass{							//the class
// public:									//Access Specifier
// 	void myMethod(){					//Method defined inside the class
// 		cout << "Hello World" << "\n";
// 	}
// }obj;									//create an object of MyClass

// int main(){
// 	obj.myMethod();						//Call the method
// 	return 0;
// }







// ############################## Methods defined outside class ########################


// #include<iostream>
// using namespace std;

// class Myclass{						//The class
// 	public:							//Access specifier
// 		void myMethod();			// Method/function declaration
// };

// //Method/function definition outside the class
// void MyClass::myMethod(){
// 	cout << "Hello World!";
// }

// int main(){
// 	MyClass obj;					//Create an object of MyClass
// 	obj.myMethod();					// Call the method
// 	return 0;
// }





// #include<iostream>
// using namespace std;

// class Cars{
// public:
// 	int a;
// 	int Speed(int speed);
// }obj;

// int Cars::Speed(int speed){
// 	obj.a =5;
// 	return speed+a;
// }

// int main(){

// 	cout << obj.Speed(200) << endl;
// 	return 0;
// }




// ############################## CONSTRUCTOR ########################



// #include<iostream>
// using namespace std;
 

// class MyClass{
// public:
// 	MyClass(){
// 		cout << "Hello World!" << endl;
// 	}
// }obj;

// int main(){
// 	return 0;
// }




// #include<iostream>
// using namespace std;

// class Name{
// 	public:
// 		Name(){
// 			cout << "Ankita";
// 		}
// }obj;

// int main(){
// 	return 0;
// }



// #include<iostream>
// using namespace std;

// class Car{
// public:
// 	string brand;
// 	string model;
// 	int year;
// 	Car(string x, string y, int z){
// 		brand= x;
// 		model= y;
// 		year= z;
// 	}
// };

// int main()
// {
// 	Car obj1("BMW", "x5", 1999);
// 	Car obj2("Ford", "Mustang", 1969);

// 	cout << obj1.brand << " "  << obj1.model << " " << obj1.year << endl;
// 	cout << obj2.brand <<  " " << obj2.model << " " << obj2.year << endl;
// 	return 0;

// }



// ###################### CONSTRUCTORS WITH PARAMETER INSIDE CLASS ##################



// #include<iostream>
// using namespace std;

// class Myclass{
// public:
// 	string name;
// 	int age;
// 	Myclass(string A, int a){
// 		name = A;
// 		age = a;
// 	} 

// };

// int main(){
// 	Myclass obj1("Ankita", 22);
// 	Myclass obj2("Prabhat", 21);

// 	cout << obj1.name << " " << obj1.age << endl;
// 	cout << obj2.name << " " << obj2.age << endl;

// 	return 0;
// }



// ###################### CONSTRUCTORS WITH PARAMETER OUTSIDE CLASS ##################

// #include<iostream>
// using namespace std;

// class Car{
// public:
// 	string name;
// 	int age;
// 	Car(string A, int a);
// };

// Car::Car(string A, int a){
// 	name= A;
// 	age= a;
// }

// int main(){

// 	Car obj1("Ankita", 22);
// 	Car obj2("Prabhat", 21);


// 	cout << obj1.name << " " << obj1.age << endl;
// 	cout << obj2.name << " " << obj2.age << endl;

// 	return 0;

// }



// ########### Access Specifiers ###################


// #include<iostream>
// using namespace std;

// class Age{
// public:
// 	string a;
// private:					//gives error as it is a privtae class
// 	string b;

// }obj;

// int main(){
// 	obj.a = "Ankkta";
// 	obj.b = "Jaiswal";
// // 
// 	cout << obj.a << endl;
// 	cout << obj.b << e ndl;

// 	return 0;
// }





// ################################ ENCAPSULATION ########################################


// ####################### ACCESS PRIVATE MEMBERS ###############################


// #################### GET AND SET #########################


// #include<iostream>
// using namespace std;

// class Employee {
// private:
// 	int salary;								// Private attribute


// public:
// 	void setSalary(int s) {					// Setter
// 		salary = s;
// 	}


// 	int getSalary() {						//Getter
// 		return salary;
// 	}
// }obj;


// int main() {
// 	obj.setSalary(60000);
// 	cout << obj.getSalary();

// 	return 0;

// }




// #include<iostream>
// using namespace std;

// class Student{
// private:
// 	int fees;


// public:
// 	void setFees(int f){
// 		fees = f;
// 	}

// 	int getFees(){
// 		return fees;
// 	}
// }obj;

// int main(){
// 	obj.setFees(100000);
// 	cout << obj.getFees() << endl;
// }



// #include<iostream>
// using namespace std;

// class Student{
// private:
// 	string name;


// public:
// 	void setName(string n){
// 		name = n;

// 	}


// 	string getName(){
// 		return name;
// 	}
// }obj;


// int main(){

// 	obj.setName("Ankita");
// 	cout << obj.getName() << endl;
// }





// ######################### INHERITANCE ##############################

// #include<iostream>
// using namespace std;

// class Vehicle{
// public:
// 	string brand = "Ford";
// 	void honk(){
// 		cout << "tuut, tuut! \n";
// 	}
// };

// class Car: public Vehicle{
// public:
// 	string model = "Mustang";
// };

// int main(){
// 	Car mycar;
// 	mycar.honk();

// 	cout << mycar.brand << " " << mycar.model << endl;
// 	return 0;
// }




// #include<iostream>
// using namespace std;

// class Name{
// public:
// 	string name = "Ankita";

// 	void Hobby(){
// 		cout << "My hobby is coding\n";
// 	}
// };

// class Surname: public Name{
// public:
// 	string surname = "Jaiswal";
// };

// int main(){
// 	Surname mysur;

// 	cout << "I am " << mysur.name << " " << mysur.surname << endl;
// 	mysur.Hobby();

// 	return 0;
// }



// //##### Multilevel inheritance

// #include<iostream>
// using namespace std;

// class Parent{
// public:
// 	void myFunction(){
// 		cout << "this is base parent class\n";
// 	}
// };


// class Mychild : public Parent{
// public:
// 	string a="this is child class\n";

// };

// class Grandchild : public Mychild{
// public:
// 	string b="this is grandchild class\n";
// };


// int main(){
// 	Grandchild obj;
// 	obj.myFunction();
// 	cout << obj.a;
// 	cout << obj.b;
// }




// //#######  Multiple Inheritance #####################


// #include<iostream>
// using namespace std;


// class Parent{
// public:
// 	void myFunction(){
// 		cout << "Hi i am the parent class\n";
// 	}
// };




// class Child{
// public:
// 	void myFunction1(){
// 		cout << "Hi I am the child\n";
// 	}
// };




// class Grandchild : public Child, public Parent{
// public:
// 	string name= "Ankita\n" ;
// }obj;



// int main(){
// 	cout << obj.name ;
// 	obj.myFunction();
// 	obj.myFunction1();
// 	return 0;
// }



// ############## ACCESS SPECIFIERS USED IN INHERITANCE #################


// #include<iostream>
// using namespace std;

// class Employee{
// protected:
// 	int salary;

// };

// class Programmer : public Employee{
// public:
// 	int bonus;
// 	void setSalary(int s){
// 		salary = s;
// 	}

// 	int getSalary(){
// 		return salary;
// 	}
// };

// int main(){
// 	Programmer obj;
// 	obj.setSalary(60000);
// 	obj.bonus = 50000;

// 	cout << obj.getSalary() << endl;
// 	cout << obj.bonus << endl;
// }



// #include<iostream>
// using namespace std;

// class Name{
// protected:
// 	string name;
// };

// class Job : public Name{
// public:
// 	string job;
// 	void setName(string n){
// 		name = n;
// 	}

// 	string getName(){
// 		return name;
// 	}
// }obj;


// int main(){
// 	obj.job = "Hacker ";
// 	obj.setName("Ankita");
// 	cout << obj.job << endl;
// 	cout << obj.getName() << endl;
// }




// #####################  POLYMORPHISM  #############################


// #include<iostream>
// using namespace std;

// class Animal{
// public:
// 	void animalsound(){
// 		cout << "The animal makes a sound \n";
// 	}
// };

// class Pig : public Animal{
// public:
// 	void animalsound(){
// 		cout << "The pig says: wee wee \n";
// 	}
// };


// class Dog : public Animal{
// public:
// 	void animalsound(){
// 		cout << "The dog says: bow wow \n";
// 	}
// };

// int main(){
// 	Animal myAnimal;
// 	Pig myPig;
// 	Dog myDog;

// 	myAnimal.animalsound();
// 	myPig.animalsound();
// 	myDog.animalsound();

// 	return 0;
// }



// #include<iostream>
// using namespace std;


// int sum(int k) {
//   if (k > 0) {
//     return k + sum(k - 1);
//   } else {
//     return 0;
//   }
// }

// int main() {
//   int result = sum(10);
//   cout << result;
//   return 0;
// } 



// #include<iostream>
// using namespace std;

// int fac(int f){
// 	if(f>0){
// 		return f* fac(f-1); 
// 	}
// 	else{
// 		return 1;
// 	}
// }

// int mainc(){
// 	int result = fac(5);
// 	cout << result << endl;
// }
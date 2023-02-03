// // Manual length of string

// #include<iostream>
// #include<cstring>
// using namespace std;

// int getlen(char name[]){
// 	int count=0;
// 	for(int i=0; name[i]!=0; i++){
// 		count++;
// 	}
// 	return count;
// }
// int main()
// {
// 	char name[20];
// 	cout << "Enter a name: ";
// 	cin >> name;
// 	// // terminator '\0'
// 	// name[2] ='\0';
// 	cout << "Your name is: " << name << endl;

// 	// cout << getlen(name) << endl;
// 	cout << strlen(name);
// }


// //length of string using in-built function

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
// 	char name[20];
// 	cout << "Enter a name: ";
// 	cin >> name;
// 	cout << strlen(name) << endl;
// }


// // // reverse a string

// #include<iostream>
// #include<cstring>
// using namespace std;

// void reverse_str(char name[], int len)
// {
// 	int start=0;
// 	int end=len-1;
// 	while(start<end)
// 	{
// 		swap(name[start++], name[end--]);

// 	}

// }
// int main()
// {
// 	char name[20];
// 	cout << "Enter your name: ";
// 	cin >> name;
// 	reverse_str(name, strlen(name));
// 	cout << "Reverse of the string: " << name << endl;
// }


// /////// Palindrome

// #include<iostream>
// #include<cstring>
// using namespace std;


// char tolowercase(char ch){
// 	if(ch>='a' && ch<='z'){
// 		return ch;
// 	}
// 	else{
// 		ch = ch - 'A' + 'a';
// 	}
// 	return ch;
// }
// int Palindrome(char name[20], int len)
// {
// 	int s=0;
// 	int e=len-1;
// 	while(s<e)
// 	{
// 		if(tolowercase(name[s])!=tolowercase(name[e]))
// 		{
// 			return 0;
// 		}
// 		else{
// 			s++;
// 			e--;
// 		}

// 	}
// 	return 1;
// }

// int main()
// {
// 	char name[20];
// 	cout << "Enter your name: ";
// 	cin >> name;

// 	if(Palindrome(name, strlen(name))==0){
// 		cout << "Not Palindrome" << endl;
// 	}
// 	else{
// 		cout << "Palindrome" << endl;
// 	}
// }



// //// converting lowercase to uppercase and uppercase to lowercase

// #include<iostream>
// #include<cstring>

// using namespace std;

// char lowercase(char ch){
// 	if(ch>='a' && ch<='z'){
// 		return ch;
// 	}
// 	else{
// 		ch= ch - 'A' +'a';
// 	}
// 	return ch;
// }

// char uppercase(char ch){
// 	if(ch>='A' && ch<='Z'){
// 		return ch;
// 	}
// 	else{
// 		ch= ch - 'a' + 'A';
// 	}
// 	return ch;
// }

// int main()
// {
// 	char ch[20];
// 	cout << "Enter String: ";
// 	cin >> ch;
// 	char string[20];
// 	int num;
// 	cout << "Enter 1 for lowercase or 2 for uppercase or 0 to terminate: ";
// 	cin >> num;

// 	if(num==1)
// 	{
// 	for(int i=0; i<strlen(ch); i++)
// 		{
// 		string[i]= lowercase(ch[i]);

// 		}
// 	cout << "All lowercase: " << string << endl;
// 	}

// 	else if(num==2)
// 	{
// 	for(int i=0; i<strlen(ch); i++)
// 		{
// 			string[i]= uppercase(ch[i]);

// 		}
// 	cout << "All uppercase: " << string << endl;
// 	}
// 	else{
// 		cout << "terminated" << endl;
// 		return 0; 
// 	}

// }






// //// //////////////////                   Valid Palindrome

// #include<iostream>
// #include<cstring>
// using namespace std;


// char tolowercase(char ch){
// 	if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
// 		return ch;
// 	}
// 	else{
// 		ch = ch - 'A' + 'a';
		
// 	}
// 	return ch;
// }


// int Palindrome(string name, int len){
// 	int s=0;
// 	int e=len-1;
// 	while(s<e)
// 	{
// 		if(tolowercase(name[s])!=tolowercase(name[e])){
// 			return 0;
// 		}
// 		else{
// 			s++;
// 			e--;
// 		}
// 	}
// 	return 1;
// }

// string valid_Char(string name, int len, string temp)
// {

// 	for(int i=0; i<len; i++){
// 		if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z') || (name[i]>='0' && name[i]<='9')){
// 			temp.push_back(name[i]);
// 		}
// 		else{
// 			continue;
// 		}
// 	}
// 	return temp;
// }


// int main()
// {
// 	string name;
// 	cout << "Enter your string: ";
// 	cin >> name;
// 	string temp;
// 	cout << "Valid: " << valid_Char(name, name.size(), temp) << endl;
// 	cout << "Palindrome: " << Palindrome(valid_Char(name, name.size(), temp), valid_Char(name, name.size(), temp).size()) << endl;
// 	if(Palindrome(valid_Char(name, name.size(), temp), valid_Char(name, name.size(), temp).size())==0){
// 		cout << "Not Palindrome" << endl;

// 	}
// 	else{
// 		cout << "Palindrome" << endl;
// 	}
	

// }


// //////Reverse a string without affecting special characters

// #include<iostream>
// #include<cstring>
// using namespace std;

// bool Bool(char ch){
// 	return (ch>='a' &&  ch<='z' || ch>='A' &&  ch<='Z');
// }
// void reverse(char str[], int len){
// 	int s=0;
// 	int e=len-1;
// 	while(s<e){
// 		if(!Bool(str[s])){
// 			s++;
// 		}
// 		else if(!Bool(str[e])){
// 			e--;
// 		}
// 		else{
// 			swap(str[s++], str[e--]);
// 		}
// 	}

// }

// int main()
// {
// 	char str[20];
// 	cout << "Enter String: ";
// 	cin >> str;
// 	reverse(str, strlen(str));
// 	cout << "Reverse: " << str << endl;
// }





// ////// number of characters in string
// ////// Maximum occuring character

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
// 	string s;
// 	cout << "Enter string: ";
// 	cin >> s;

// 	int arr[26] = {0};

// 	for(int i=0; i<s.size(); i++){
// 		arr[s[i]-'a']++;
// 	}
// 	int max=0;
// 	char m;
// 	for(int i=0; i<s.size(); i++){

// 		if(arr[s[i]-'a']>max){
// 			max=arr[s[i]-'a'];
// 			m=s[i];

// 		}
// 		if(arr[s[i]-'a']!=0){
// 		cout << s[i] << ":" << arr[s[i]-'a'] << " ";
// 		}

// 		arr[s[i]-'a']=0;
		
// 	}
// 	cout << endl;
	
// 	cout << "Max Occ: " << m << ":" << max << endl;
	

// }





// ////// replacing spaces with '@40'

// #include  <iostream>
// #include  <bits/stdc++.h>
// using namespace std;
// #define len 50

// string space(char str[]){
// 	string temp;
// 	for(int i=0; i< strlen(str); i++){
// 		if(str[i]==' '){
// 			temp.push_back('@');
// 			temp.push_back('4');
// 			temp.push_back('0');

// 		}
// 		else{
// 			temp.push_back(str[i]);
// 		}
// 	}
// 	return temp;
// }

// int main()
// {
// 	char str[50];
// 	cin.getline(str, len);
// 	cout << str << endl;
// 	cout << "Replaces string: " << space(str) << endl;
// }



// ////// Removing all occurence of a substring

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// string remove_substr(string s, string part){
// 	while(s.size()!=0 && s.find(part)<s.size()){
// 		s.erase(s.find(part), part.size());
// 	}
// 	return s;
// }

// int main()
// {
// 	string s;
// 	cout << "Enter String: ";
// 	cin >> s;
// 	string part="abc";
// 	cout << "After removing sub-string: " << remove_substr(s, part) << endl;

// }




//// permutation in a string    //// incomlete //// use & operations on two zero-initialised arrays.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool find_per(string s1, string s2){
	int arr[26]= {0};
	for(int i=0; i<s2.size(); i++){
		arr[s2[i]-'a']++;
	}

	for(int i=0; i<s2.size();i++){
		if()
	}
	for(int i=0; i<s1.size(); i++){
		if(s1[i]==ch1 && s1[i+1]==ch2 || s1[i]==ch2 && s1[i+]==ch1){
			return 1;
		}
		else{
			return 0;
		}
	}
}

int main(){
	string s;
	cout << "Enter the string: ";
	cin >> s;
	string s2="ab";
	cout << "permutation present? " << find_per(s1, s2) << endl;
}
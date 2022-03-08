/*
Question 4 : 
Write a menu driven program to perform following operations on strings (without using inbuilt string functions):
a) Show address of each character in string
b) Concatenate two strings.
c) Compare two strings
d) Calculate length of the string (use pointers) 
e) Convert all lowercase characters to uppercase 
f) Reverse the string
*/

#include<iostream>
#include <string>
using namespace std;

int main(){
    char i='\0';
    while(1){
        cout<<"What you want to do: \n1. Show Address of each charachter in a string\n2. Concatenate two strings\n3. Compare two strings\n4. Calculate length of string (use pointers)\n5. Convert to uppercase\n6. Reverse the string\n7. Exit\n Enter the number from 1 to 7"<<endl;
        cin>>i;
            switch(i){
                case '1':{
                    string str,dummy;
    				cout<<"Enter the string: ";
    				getline(cin,dummy);
    				getline(cin,str);
    				int n= str.size();
    				for (int i=0; i<n; i++){
      				  cout<<"Address of "<<str[i]<<" is "<<static_cast<void*>(&str[i])<<endl;
    					}
                    break;} 
                    
                    
                case '2':{
                        string str1, str2,dummy;
  						cout<<"Enter First string: "<<endl;
  						getline(cin,dummy);
    					getline(cin,str1);
    					cout<<"Enter Second string: "<<endl;
    					getline(cin,str2);
    					cout<<"Concatenated string is "<<str1+" "+str2<<endl;
                    break;}
                    
                    
                case '3':{
                    string str1, str2,Dummy;
    				cout<<"Enter the first string: "<<endl;
    				getline(cin,Dummy);
    				getline(cin,str1);
    				cout<<"Enter the second string: "<<endl;
    				getline(cin,str2);
    				int n1= str1.size();
    				int n2= str2.size();
    				if (n1 > n2){
    					cout<<"First string is greater \n\n";
    				}else if(n2 > n1){
    					cout<<"Second string is greater \n\n";
					}else{
						cout<<"Both strings are equal \n\n";
					}
        			
                    break;}
                    
                    
                case '4': {
                    string str,dummy;
                    cout<<"Enter the string: ";
                    getline(cin,dummy);
    				getline(cin,str);
                    cout<<"The size of string is "<<str.size()<<endl;
                    break;}
                    
                    
                case '5': {
                    string str1,Dummy;
	
					cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
					getline(cin,Dummy);
					getline(cin, str1);
	
					for (int i = 0; i < str1.length(); i++)
  					{
  					str1[i] = toupper(str1[i]);
  					}
  	
					cout<< "\nThe Given String in Uppercase = " << str1 <<"\n\n";
                    break;}
                    
                case '6': {
                        string str,dummy;
    					cout<<"Enter the string: "<<endl;
    					getline(cin,dummy);
    					getline(cin,str);
    					string s="";
    					int n= str.size()-1;
    					for (int i=0; i<str.size(); i++){
     					   s= s + str[n];
      					   n--;
    					}
    					
    			cout<<"Reverse string of "<<str<<" is "<<s<<endl;
                    		break;}
                    		
                case '7': {
                	return 0;
					break;
				}
                default: {
                    cout<<"Invalid option";
                    }
            }
        }
        return 0;
    }
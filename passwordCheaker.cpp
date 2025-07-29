#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"============================================================"<<endl;
    cout<<"Ask the user to enter the str:"<<endl;
    cin>> str;
    cout<<"Its time to display the str entered by the user is:"<<str<<endl;
    cout<<"============================================================"<<endl;
    int score = 0;
    int length = 0;
    cout<<"ITs time to check length of str"<<endl;
    for(int i=0; i<str.length(); i++){
        length++;
    }
    cout<<"The length is :"<<length<<endl;
    if(length >= 8){
        cout<<str<<": is valid because it has atleast 8 characters"<<endl;
    }
    else{
        cout<<str<<": str must be atleast 8 characters long!"<<endl;
    }
    cout<<"================================================================="<<endl;
    bool hasUpper = false;
    cout<<"Its time to check whether  str has upperLetter or not"<<endl;
    for(int i= 0; i < str.length();i++){
        
        if(str [i]>='A'&& str[i]<='Z'){
            hasUpper = true;
            break;
           
        }
    }
    if(hasUpper)
        {
            cout<<str<<" :Have an upperccase letter"<<endl;
        }
        else
        {
            cout<<str<<":Donot have any uppercase letter"<<endl;
        }
        cout<<"================================================================"<<endl;
        bool hasLower = false;
        cout<<"Its time to check wheather str has any of lowerCase letter or not"<<endl;
    for(int i= 0; i < str.length();i++){
        
        if(str [i]>='a'&& str[i]<='z'){
            hasLower = true;
            break;
           
        }
    }
    if(hasLower)
        {
            cout<<str<<" :Have lowerccase letter"<<endl;
        }
        else
        {
            cout<<str<<":Donot have any lowercase letter"<<endl;
        }
        cout<<"===================================================================="<<endl;
        bool hasDigit = false;
        cout<<"Its time to check wheather str has any of digit or not"<<endl;
    for(int i= 0; i < str.length();i++){
        
        if(str [i]>='0'&& str[i]<='9'){
            hasDigit = true;
            break;
           
        }
    }
    if(hasDigit)
        {
            cout<<str<<" :Have digit"<<endl;
        }
        else
        {
            cout<<str<<":Donot have any digit"<<endl;
        }
        cout<<"====================================================================="<<endl;
        bool hasSymbol = false;
        cout<<"Its time to check wheather str has any of symbol or not"<<endl;
    for(int i= 0; i < str.length();i++){
        
        if(str [i]=='!'||str[i]=='#'|| str[i] == '$'||str[i] == '*'){
            hasSymbol = true;
            break;
           
        }
    }
    if(hasSymbol)
        {
            cout<<str<<" :Have symbol"<<endl;
        }
        else
        {
            cout<<str<<":Donot have any symbol"<<endl;
        }

cout<<"=============================================================================="<<endl;
if(length >= 8){
	score++;
}
if(hasUpper){
	score++;
}
if(hasLower){
	score++;
}
if(hasDigit){
	score++;
}
if(hasSymbol){
	score++;
}

if( score == 5){
	cout<<"Its very strong Password"<<endl;
}
else if(score == 4){
	cout<<"Its the strong password:"<<endl;

}
else if(score == 3){

	cout<<"Its medium password:"<<endl;
}
else {
	cout<<"Weak password!!!!!"<<endl;
}
cout<<"============================================================================"<<endl;
return 0;
    
}

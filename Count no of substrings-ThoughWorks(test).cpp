/*

You have given a string str and a char c
You need to find number of subtring havng at least one count of char c.
input:

str=abcd ,c= b

a ab abc abcd -3
b bc bcd -3
c cd-0
d-0

ans: 6

*/


//Broute Force approach
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
     string str;cin>>str;
     char c;cin>>c;
 unordered_set<string> s;
 for(int i=0;i<str.length();i++){
     string temp="";
     for(int j=i;j<str.length();j++){
         temp+=str[j];
         s.insert(temp);
     }
 }
 int count=0;
 for(string x:s){
     if(x.find(c)<x.length()) count++;
 }
 cout<<count;

}

/*
bbbb
b bb bbb bbbb



*/


//Not complete fail for 30% test cases like
//  bbbb b  ans give 17 but ans is 4 


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;cin>>str;
    char c;cin>>c;
    int ans=0;
    int last=-1;
    bool flag=false;
    for(int i=0;i<str.length();i++{
        if(str[i]==c){
            flag=true;
          ans+=(i-last-1)*(str.length()-i)+(str.length()-i-1);
        }
    }
    if(flag) ans++;
    cout<<ans;

}






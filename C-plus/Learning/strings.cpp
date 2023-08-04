#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int main()
{
    string str1 = "Shekhar", str;
    string s1 = "fam", s2 = "ily";
    // cin>>str;  this will input only one line;
    getline(cin, str); // input multiple word;

    s1.append(s2); // connect s2 into s1 it will change s2 //output family

    cout << s1 + s2 << endl;  //will add letters

    cout<<s2.compare(str1)<<endl;  //compare s2 with s1 //s2-s1 ascii value
    
    str1.clear(); // will delete everything from string
   
    cout<<s1.empty()<<endl;  //return bool value;
   
    s1.erase(3,2); // 3 starting index and 2 is number of characters startin index
    
    cout<<s1<<endl;

    cout<<s1.find("am")<<endl;

    cout<<s1.size();

    s1.insert(2,"lol");  //starting 2nd index insert lol
    
    string s=s1.substr(6,4);//starting from 6 index upto 4 character substring

    string s2="1234";
    
    int x=stoi(s2); //convert string into integer
   
    s2=to_string(x); //convert integer into string

    sort(s1.begin(),s1.end()); //sprt string  

    return 0;
}
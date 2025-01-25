//STL for string in cpp
    // * find :- It is used to find a substring in a string
    // * substr :- It is used to extract a substring from a string
    // * insert :- It is used to insert a string in another string
    // * erase :- It is used to erase a substring from a string
    // * size :- It is used to find the size of a string
    // * clear :- It is used to clear a string
    // * empty :- It is used to check if a string is empty or not
    // * compare :- It is used to compare two strings
    // * swap :- It is used to swap two strings
    // * push_back :- It is used to add a character at the end of a string
    // * pop_back :- It is used to remove a character from the end of a string
    // * resize :- It is used to resize a string
    // * capacity :- It is used to find the capacity of a string
    // * reserve :- It is used to reserve a space for a string
    // * at :- It is used to access a character at a particular index

// * sort :- It is used to sort a string
// sort(str.begin(), str.end());
// reverse(str.begin(), str.end());
// string str = to_string(num);
// ans = stoll(str);
// getline(ss, word, delimiter):
// std::stringstream ss(str):

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "hello";
    cout<<str<<endl;

    // * find :- It is used to find a substring in a string
    if(str.find("lo") != string::npos){
        cout<<"Substring is present"<<endl;
    }else{
        cout<<"Substring is not present"<<endl;
    }

    // * substr :- It is used to extract a substring from a string
    string str1 = str.substr(1, 3);
    cout<<str1<<endl;

    // * insert :- It is used to insert a string in another string
    str.insert(1, "abc"); // 1 is the index where we want to insert the string
    cout<<str<<endl;

    // * erase :- It is used to erase a substring from a string
    str.erase(1, 3); // where 1 is the index and 3 is the number of characters to be erased( 1 is included)
    cout<<str<<endl;   

    // * size :- It is used to find the size of a string
    cout<<str.size()<<endl;

    // * clear :- It is used to clear a string
    str.clear();

    // * empty :- It is used to check if a string is empty or not
    if(str.empty())
        cout<<"String is empty"<<endl; 

    // * compare :- It is used to compare two strings
    string str2 = "hello";
    if(str.compare(str2) == 0){
        cout<<"Strings are equal"<<endl;
    }else{
        cout<<"Strings are not equal"<<endl;
    }

    // * swap :- It is used to swap two strings
    str.swap(str2);
    cout<<str<<endl;         // hello

    // * push_back :- It is used to add a character at the end of a string
    str.push_back('a');      // helloa

    // * pop_back :- It is used to remove a character from the end of a string
    str.pop_back();         // hello

    // * resize :- It is used to resize a string
    str.resize(10);
    cout<<str<<endl;        // helloabc

    // * capacity :- It is used to find the capacity of a string
    cout<<str.capacity()<<endl;  // 15

    // * reserve :- It is used to reserve a space for a string
    str.reserve(100);
    cout<<str.capacity()<<endl;  // 100

    // * at :- It is used to access a character at a particular index
    cout<<str.at(1)<<endl;  // e

    // * front :- It is used to access the first character of a string
    cout<<str.front()<<endl;  // h

    // * back :- It is used to access the last character of a string
    cout<<str.back()<<endl;  // a

    // * c_str :- It is used to convert a string to a character array
    const char* ch = str.c_str();
    cout<<ch<<endl;         // hello

    // * data :- It is used to convert a string to a character array
    char* ch1 = &str[0];
    cout<<ch1<<endl;        // hello

    // * substr :- It is used to extract a substring from a string
    string str3 = "hello,world";
    string word;
    word = str3.substr(0, 5);
    cout<<word<<endl;       // hello


    // * sort :- It is used to sort a string
    sort(str.begin(), str.end());
    cout<<str<<endl;

    // * reverse :- It is used to reverse a string
    reverse(str.begin(), str.end());
    cout<<str<<endl;

    // * to_string :- It is used to convert a number to string
    int num = 123;
    string str1 = to_string(num);
    cout<<str1<<endl;

    // * stoi :- It is used to convert a string to integer
    int ans1 = stoi(str1);
    cout<<ans1<<endl;


    // * stoll :- It is used to convert a string to long long
    long long ans = stoll(str1);
    cout<<ans<<endl;

    // * getline :- It is used to read a string from input stream and store it in a string variable.
    string str2 = "hello,world";
    string word;
    char delimiter = ',';
    stringstream ss(str2);
    getline(ss, word, delimiter);
    cout<<word<<endl;

    // * stringstream :- It is used to operate on strings
    string str3 = "hello,world";
    stringstream ss1(str3);
    string word1;
    while(getline(ss1, word1, ',')){
        cout<<word1<<endl;
    }


    return 0;
}
// #include<iostream>
// #include<cstring>
// using namespace std ;
// int main(){
//     string str1="Hello";
//     string str2="world";
//     cout << "Length of str1:"<<str1.length() << endl;
//     cout << "Size of str2: " << str2.size()<< endl; //sizeof-> not used
//     str1.swap(str2);
//     cout << "After swaping:" << str1 << str2 << endl;
//     str1.swap(str2);
//     string s1="This is a simple text";
//     string s2="simple";
    
//     cout << s1.find(s2);
//     if(s1==s2) cout << "s1 and s2 are equal";
//     else cout << "s1 and s2 are not equal";
//     char Str1[]="Hello";
//     char Str2[]="World";
//     strcat(Str1,Str2);
//     cout << "After strcat: " << Str1 << endl ;
//     string str3 = str1+str2;
//   char str4[100];
//     str3.copy(str4,10,0);
//     str4[10]='\0';
//     cout << "Copied string: " << str4 ;
//     char ch='W';
//    string Str4="Hello World"
//     cout << "Character 'W' found at the position: " << Str4.find(ch);







   

//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    // Length and size
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Size of str2: " << str2.size() << endl;

    // Swapping
    swap(str1, str2);
    cout << "After swapping: str1 = " << str1 << ", str2 = " << str2 << endl;

    // String initialization and finding a substring
    string text = "This is a simple text";
    cout << text << endl;
    cout << "'simple' found at index: " << text.find("simple") << endl;

    // Comparing strings
    string s1 = "Hello";
    string s2 = "World";
    if (s1 == s2)
        cout << "s1 and s2 are equal" << endl;
    else
        cout << "s1 and s2 are not equal" << endl;

    // String concatenation
    string concat = s1 + s2;
    cout << "After strcat: " << concat << endl;

    // Copying string
    string copied = concat;
    cout << "Copied string: " << copied << endl;

    // Finding a character position
    cout << "Character 'W' found at position: " << copied.find('W') << endl;

    // Substring extraction
    string sentence = "Programming is fun";
    cout << sentence << endl;
    cout << "Substring: " << sentence.substr(0, 11) << endl;

    // Erase part of string
    sentence.erase(11, 3);
    cout << "After erase: " << sentence << endl;

    // Clearing the string
    sentence.clear();
    cout << "After clear: \"" << sentence << "\" (Length: " << sentence.length() << ")" << endl;

    // Replace in string
    string str = "I like apples";
    cout << "Str= " << str << endl;
    str.replace(7, 6, "bananas");
    cout << "After replace: " << str << endl;

    // Push_back and Pop_back
    string fruit = "Mango";
    cout << "Str= " << fruit << endl;
    fruit.push_back('s');
    cout << "After push_back: " << fruit << endl;
    fruit.pop_back();
    cout << "After pop_back: " << fruit << endl;

    return 0;
}


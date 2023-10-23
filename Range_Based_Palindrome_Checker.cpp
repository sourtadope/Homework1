#include<iostream>
#include<string> 
#include <cctype>

using namespace std; 

bool isStringPalindrome(const string &str);

int main() {

    cout << isStringPalindrome("Aman a plan a canal Panama") << endl;


}

bool isStringPalindrome(const string &str){
    vector<char> vectorChar; 
    vector<char> reversedVecChar;
    
    for (char c: str){
        if (c != ' '){
            vectorChar.push_back(tolower(c));
        }
        
    }

    for (int i = vectorChar.size() - 1; i >= 0; i --){
        reversedVecChar.push_back(tolower(vectorChar[i]));
    }


    return vectorChar == reversedVecChar;
}
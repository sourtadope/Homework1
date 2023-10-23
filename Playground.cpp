#include<iostream>
#include<vector>
#include<string>

using namespace std; 

int main(){
    string inputString = "Hello World!";
    vector<char> vectorChar; 

    for (char c: inputString){
        if (c != ' '){
            vectorChar.push_back(c);
        }
        
    }
    
    for (char c: vectorChar){
        cout << c << endl;
    }
}
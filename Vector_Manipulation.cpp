#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


void reverseVector(vector<int> &v);
void removeOdd(vector<int> &v);
bool isPalindrome(const vector<int> &v);

int main() {
    vector<int> vec2 = {3,5,4};
    // reverseVector(vec2); 
    // removeOdd(vec2);
    // for (int num: vec2){
    //     cout << num << endl;
    // }
    
    cout << isPalindrome(vec2) << endl;

}

//Reverse Function
void reverseVector(vector<int> &v) {
    for (int i = v.size() - 1; i >= 0; i--) { 
        cout << v[i] << endl;
    }
}


//Remove all odd numbers
void removeOdd(vector<int> &v){
    for(int i = v.size() - 1; i >= 0; i--){
        if (v[i] % 2 != 0){
            v.erase(v.begin() + i);
        }
    }
}

//Palindrome
bool isPalindrome(const vector<int> &v){
    vector<int> reversedVec;
    for (int i = v.size() - 1; i >= 0; i--) { 
        reversedVec.push_back(v[i]); 
    }

    return reversedVec == v;


}
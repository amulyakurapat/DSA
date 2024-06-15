#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};
int main(){
	Solution sol;
	string s1 = "anagram";
	string s2 = "nagaram";
	if(sol.isAnagram(s1,s2)){
		cout << "the strings are anagrams " << endl;
	} else{
		cout << "the strings are not anagrams" << endl;
	}
	return 0;
}

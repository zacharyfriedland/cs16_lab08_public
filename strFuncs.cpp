#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;
string remPunctAndSpace(string s);
string lowercase(string x);
string reverseTheString(string a);

bool isAnagram(string s1, string s2){
/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
	string clean1 = remPunctAndSpace(s1);
	string clean2 = remPunctAndSpace(s2);
	string lowClean1 = lowercase(clean1);
	string lowClean2 = lowercase(clean2);
	bool check = false;
	if(lowClean1.length() != lowClean2.length()){
		return false;
	}
	else{
		int count = 0;
		for(int i =0; i < lowClean1.length(); i++){
			for(int j = 0; j < lowClean2.length(); j++){
				if(lowClean1[i]== lowClean2[j]){
					lowClean2.erase();
					check = true;
				}
			}
			if(check == true){
				return true;
			}
		}
	}
	return false;
}

bool isPalindrome(const string s1){
/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
	string process = remPunctAndSpace(s1);
	string cleanStr = lowercase(process);
	if(cleanStr.length() == 1){
		return true;
	}
	else{
		string revStr = cleanStr;
		if(cleanStr == reverseTheString(revStr)){
			return true;
		}
		else{
			return false;
		}
	} 
}

string remPunctAndSpace(string s){
	/*Preconditions: s is a valid string
	 * Postconditions: string s is returned without spaces 
	 * and without punctuation*/
	string newStr = "";
	for(int i = 0; i < s.length(); i++){
		if(isalpha(s[i])){
			newStr += s[i];
		}
	}
	return newStr;
}

string lowercase(string x){
	/*Preconditions: x is a valid string that may have uppercase or lowercase characters
	 * Postconditions: string x is returned with all lowercase letters*/
	string allLower = "";
	for(int z = 0; z < x.length(); z++){
		if(x[z] >= 97 && x[z] <= 122){
			allLower+=x[z];
		}
		else if(x[z] >= 65 && x[z] <= 90){
			allLower+= (x[z] + 32);
		}
		else{
			return "error";
		}
	}
	return allLower;
}

string reverseTheString(string a){
	/*Preconditions: a valid string is entered and recursion is 
	 * used to solve the function
	 * Postconditions: the string's letters are reversed and 
	 * a new string is returned*/

	if(a.length() > 0){
		return a[a.length()-1] + reverseTheString(a.substr(0, a.length()-1));
	}
	return a;
}

		
	

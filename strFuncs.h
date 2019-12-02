//Diba Mirza
#ifndef STRFUNCS_H
#define STRFUNCS_H
using namespace std;
#include <string>
#include "linkedList.h"
bool isAnagram(string s1, string s2);

bool isPalindrome(const string s1);

string remPunctAndSpace(string s);

string lowercase(string x);

string reverseTheString(string a);

int recursiveSum(Node* head);

int recursiveLargestValue(Node* head);
#endif //STRFUNCS_H

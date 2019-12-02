#include "linkedList.h"
#include "linkedListFuncs.h"
#include "linkedList.h"
#include "strFuncs.h"
#include <iostream>
using namespace std;

int recursiveSum(Node* head) {
	/*Preconditions: head is a ptr to a Node * which is the 
	 * head of a linked list
	 * Postconditions: return sum of all values in linked list 
	 * using a recursive approach
	 * if head is null return 0*/

	if(head->next == NULL){
		return head->data;
	}
	else{
		return head->data + recursiveSum(head->next);
	}
}

int recursiveLargestValue(Node* head) {
	/*Preconditions: head is a ptr to a Node* which is the 
	 * head of a linked list. We assume the list has at
	 * least one element
	 * Postconditions: return the largest value in the linked list 
	 * using a recursive approach*/

	if(head->next == NULL){
		return head->data;
	}
	else{
		if(head->data > recursiveLargestValue(head->next)){
			return head->data;
		}
		else{
			return recursiveLargestValue(head->next);
		}
	}
}

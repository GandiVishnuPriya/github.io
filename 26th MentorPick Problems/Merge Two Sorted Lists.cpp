#include <bits/stdc++.h>
using namespace std;

struct SLLNode{
	int data;
	struct SLLNode *next;
	SLLNode(int d){
		data = d;
		next = NULL;
	}
};

class BeingZero{
public:
	SLLNode *mergeTwoSortedLists(SLLNode *A, SLLNode *B){
	    
	    SLLNode* p1=A;
	    SLLNode* p2=B;
	    SLLNode* dummy = new SLLNode(-1);
	     SLLNode* p3=dummy;
	     
	     while(p1!=NULL && p2!=NULL)
	     {
	         if(p1->data < p2->data)
	         {
	         p3->next = p1;
	         p1=p1->next;
	         }
	         else{
	             p3->next=p2;
	             p2=p2->next;
	         }
	         p3=p3->next;
	         
	     }
	     while(p1!=NULL)
	     {
	         p3->next=p1;
	         p1=p1->next;
	         p3=p3->next;
	     }
	       while(p2!=NULL)
	     {
	         p3->next=p2;
	         p2=p2->next;
	         p3=p3->next;
	     }
	    
	    return dummy->next;
	    // TODO:  Complete this function
        // Do not read any input, use the List passed in as function input parameter
        // Do not print any output
        // Just return head after completing the function
        // Do it in CONSTANT space
	}
};

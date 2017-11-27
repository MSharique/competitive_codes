#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

// * Definition for singly-linked list.
  struct ListNode 
  {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
  void display(ListNode* temp)
  {
  	while(temp)
  	{
  		cout<<temp->val<<" -> ";
  		temp = temp->next;
  	}
  	cout<<endl;
  }
 
  ListNode* insert(ListNode* head ,int node)
  {
  	ListNode* temp = head;
  	if(temp==NULL)
  	{
  		ListNode* x = new ListNode(node);
  		head = x;
  	
	}
  	else
  	{
  		while(temp->next)
  		{
			temp = temp->next;
  		}
  		ListNode* x = new ListNode(node);
  		temp->next = x;
  	
	}
	return head;
  }	
  
  int lpalin(ListNode* A)	
  {
  	ListNode* temp;
  	ListNode* prev;
  	ListNode* cur;
  	ListNode* net;
  	ListNode* temp1;
  	temp = A;
  	temp1 = A;
  	while(temp1!=NULL && temp->next !=NULL)
  	{
  		temp = temp->next;
  		temp1 = temp1->next;
  		if(temp1)temp1=temp1->next;
  	}
  	cout<<"\n mid node val "<<temp->val<<endl;
  	//temp1 = temp->next;
  	prev = temp->next;
  	temp->next = NULL;
  	cur = prev->next;
  	net = cur->next;
  	cur->next = prev;
	while(net)
  	{
  		cout<<"....";
  		prev = cur;
  		cur = net;
  		net = net->next;
  		cur->next = prev;
  	}
  	prev->next = NULL;
  	
  	cout<<"\n LL1 : ";
  	net = A;
  	while(net)
  	{
  		cout<<net->val<<" -> ";
  		net = net->next;
  	}
  	cout<<endl;
  	
	  cout<<"\n LL2 : ";
  	net = cur;
  	while(net)
  	{
  		cout<<net->val<<" -> ";
  		net = net->next;
  	}
  	cout<<endl;
  	
  	while(temp && temp1)
  	{
  		if(temp->val != temp1->val)return 0;
  		temp = temp->next;
  		temp1 = temp1->next;
  	}
  	return 1;
  }
  
  
  int main()
  {
  	int num,val;
  	ListNode* head = NULL;
  	cin>>num;
  	for(int i=0;i<num;i++)
  	{
  		cin>>val;
  		head = insert(head,val);
  	}
  	cout<<"\n init LL : ";
  	display(head);
  	
  	cout<<"\n isplalin ?? "<<lpalin(head)<<endl;
  	return 0;
  }

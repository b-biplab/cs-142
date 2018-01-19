/* Biplab Behera (1711042)
 * Computer Science {CS142}
 * Lab-2 Assignment
 */

#include<iostream>
using namespace std;

/*
 * Contains a data storage unit and a pointer to the next
 * element of the linked list.
 */

class node
{
        public:
	int data;
	node *next;
};

/*
 * Class for Singly Linked List data structure
 * Pointers to the first and last element of the list
 */
class list
{
		private:
		node *head, *tail;
		public:
		list()
		{
			head=NULL;
			tail=NULL;
		}

        // Member functions of the list class.
        
	void createnode(int value);
	void insert_start(int value);
	void insert_position(int pos, int value);
	void delete_first();
	void delete_last();	
	void delete_position(int pos);
	
	
};
	
void list() :: createnode(int value) {
	               /*
                        * Inserts the value stored at the end of the list.
                        */
	
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;    // Steps to perform when the list is empty.
				tail=temp;
				temp=NULL;
			}
			else
			{
				tail->next=temp;   // Steps to perform when the list is non-empty.
				tail=temp;
			}
		}
		
void list() :: insert_start(int value) {
	               
	             /*
                      * Inserts the value stored at the start of the list.
                      */
		       
	                node *temp=new node;
			temp->data=value;
			temp->next=head;
			head=temp;
		}
	       
void list() :: insert_position(int pos, int value) {
	            
	                /*
                         * Inserts the value stored at the any position of the list.
                         */
	
			node *pre=new node;
			node *cur=new node;
			node *temp=new node;
			cur=head;
			for(int i=1;i<pos;i++)
			{
				pre=cur;
				cur=cur->next;
			}
			temp->data=value;
			pre->next=temp;
			temp->next=cur;
		}
	        
void list() :: delete_first() { 
			
			/*
                         * Deletes the value stored at the first of the list.
                         */
		
			node *temp=new node;
			temp=head;
			head=head->next;
			delete temp;
		}
	      
void list() :: delete_last() {
	                /*
                         * Deletes the value stored at the last of the list.
                         */
			node *current=new node;
			node *previous=new node;
			current=head;
			while(current->next!=NULL)
			{
				previous=current;
				current=current->next;
			}
			tail=previous;
			previous->next=NULL;
			delete current;
		}
	       
void list() :: delete_position(int pos) {
	                /*
                         * Deletes the value stored at the position of the list.
                         */
			
	                node *current=new node;
			node *previous=new node;
			current=head;
			for(int i=1;i<pos;i++)
			{
				previous=current;
				current=current->next;
			}
			previous->next=current->next;
		}
	
void list() :: display() {
		      /*
                       * Displays the value stored of the list.
                       */
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
		}


int main()
{
	
	list obj;
	
	
	obj.createnode(1);
	obj.createnode(2);
	obj.createnode(3);
	obj.createnode(4);
	
	
	
	cout<<"--------------------------------------------------" << endl;
	cout<<"---------------Displaying All nodes---------------";
	cout<<"-------------------------------------------------"<< endl;
	obj.display();
	
	
	
	
	
	cout<<"------------------------------------------------"<< endl;
	cout<<"-----------------Inserting At End-----------------";
	cout<<"-------------------------------------------------"<< endl;
	obj.createnode(5);
	obj.display();
	
	
	
	
	
	cout<<"-------------------------------------------------" << endl;
	cout<<"----------------Inserting At Start----------------";
	cout<<"--------------------------------------------------" << endl;
	obj.insert_start(0);
	obj.display();
	
	
	
	
	cout<<"-------------------------------------------------" << endl;
	cout<<"-------------Inserting At Particular Position--------------";
	cout<<"--------------------------------------------------" << endl;
	obj.insert_position(5,6);
	obj.display();
	
	
	
	
	cout<<"--------------------------------------------------" << endl;
	cout<<"----------------Deleting At Start-----------------";
	cout<<"--------------------------------------------------" << endl;
	obj.delete_first();
	obj.display();
	
	
	
	
	cout<<"--------------------------------------------------" << endl;
	cout<<"-----------------Deleing At End-------------------";
	cout<<"--------------------------------------------------" << endl;
	obj.delete_last();
	obj.display();
	
	
	
	
	
	cout<<"--------------------------------------------------" << endl;
	cout<<"--------------Deleting At Particular Position--------------";
	cout<<"-------------------------------------------------" << endl;
	obj.delete_position(4);
	obj.display();
	
	
	
	
	cout<<"--------------------------------------------------" << endl;
	
	return 0;
}

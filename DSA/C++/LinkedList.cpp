//Program to show use of basic linked list
//creation, initialization and traversing
//list length is hard coded at 5

//refer page no 415 (dad)

#include<iostream>

using namespace std;

struct dat{		//this is what a node looks like
	int a;		//the node's data
	dat *next;	//the address of next node of the structure type of current node
};

int main (void){
	dat *start = NULL;	//pointer of first address of the linked list //currently NULL because empty
	dat *node;			//pointer for instantanous storage of location of each node
	dat *prev;			//pointer for accessing the last node for address update for the next node
	
	int i;						//loop variable
	for(i=0; i<5; i++){ 		//hard codes a list of 5 elements
		node = new dat();		//creates a new node and stores its address 
		
		cout << "Enter a Number\t";
		cin >> node->a;
		node->next = NULL;		//sets the address part of newly formed node to NULL (for now this..
								//..node is the last node in the list untill next round of the loop)
								
		if(start == NULL){		//if this is the first ever node in the list
			start = node;		//stores is address in (start) to access the list later
		}
		else{					//if not the first ever node created
			prev->next = node;	//changes the last node's address part to indicate current node
		}
		prev = node;			//stores current nodes adress to help access this node in the next round for the above, else part
	}
	for(node = start; node!=NULL; node=node->next){		//starts the list from first adress, goes till finds NULL, updates 
		cout << node->a << endl;						//basic data access and print
	}
}

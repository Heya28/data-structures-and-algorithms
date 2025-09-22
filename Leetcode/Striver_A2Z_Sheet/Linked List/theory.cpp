//////////1//////////
// Define a struct named Book that contains three members: title (a std::string), author (a std::string), and pages (an int).
// In your main function, dynamically allocate a Book object on the heap using the new keyword.
// Create a pointer to store the address of this new Book object.
// Using the pointer and the -> operator, assign values to the title, author, and pages of your book.
// Print out the details of the book.
// Finally, delete the book object to free its memory and set the pointer to nullptr.
// #include<bits/stdc++.h>
// using namespace std;
// struct Book{
//     string title;
//     string author;
//     int pages;
//     // Book(){}; Not required, as automatic constructor call happens.
// };
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     Book* bookptr= new Book();
//     bookptr->author="JK Rowling";
//     bookptr->title="Harry Potter";
//     bookptr->pages=10;
//     cout<<"Printing details of the book: "<<bookptr->author<<' '<<bookptr->pages<<' '<<bookptr->title;
//     delete bookptr;
//     bookptr=nullptr;
//     return 0;
// }

//////////2//////////
// Implementation of a Linked List
// #include<iostream>
// using namespace std;
// struct Node{
//     // public by default
//     int data;
//     Node* next;
//     Node(int val) :data(val), next(nullptr){};
// };
// // most important job of class ll is to keep a track of where the list starts.
// class LinkedList{
//     private:
//     Node* head; // pointer to the very first element of ll , keeping it private helps code from outside accidently losing start of the list
//     public:
//     LinkedList(){
//         head=nullptr; // when a ll is first created. it's empty
//     }
//     void push_front(int val){
//         Node* newnode= new Node(val); // here we create a newnode pointer pointing to the element of Node type with data = val and next=nullptr
//         // we want this element to be the first element of the ll, then,
//         newnode->next=head;
//         head=newnode;
//         // Now head points to this element 
//     }
//     // O(1) since same three steps need to be done no matter how long the list
// };

// int main(){
//     LinkedList l1;
//     l1.push_front(10);
//     l1.push_front(20);
//     return 0;
// }


//////////3///////////
// Use a destructor ( delete and ptr = nullptr for a struct )
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node(int val): data(val), next(nullptr);
// };
// class LinkedList{
//     Node* head;
//     public:
//     LinkedList(){
//         head =nullptr;
//     }
//     void push_front(int val){
//         Node* newnode=new Node(val); // This creates an element of type Node with data = val and next = nullptr. A pointer newnode points to this element with data=val
//         newnode->next=head; // since this element is the first, whatever is at head becomes second
//         head=newnode;
//     }
//     void pop_front(){
//         if(head==nullptr){
//             return;
//         }
//         Node*temp=head;
//         head=head->next;
//         delete temp;
//     }
//     // creating a destructor here that serves the purpose of DELETING ALL the elements of the linked list as whatever is created in a HEAP must be deleted. 
//     // An array does not need to be deleted extensively as it is created in a stack and  once the main function is done executing, then it ( all elements eg int arr[10] ) gets deleted as all the elements of a stack are temporary and local and are automatically managed.
//     ~LinkedList(){
//         while(head!=nullptr){ // while condition is required as if the DEREFERENCING OF A NULLPTR Happens, that is invalid.
//             pop_front();
//         }
//     }
// };


////Striver LL Implementation////
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val, Node* ptr):data(val), next(ptr){};
//     Node(int val):data(val), next(nullptr){};
// };
// int main(){
//     Node* newnode= new Node(10);
//     return 0;
// }


//////////4///////////
// HEAD AND TAIL POINTERS ( SUPER IMPORTANT )
// #include<iostream>
// using namespace std;
// struct Node{
//     // public by default
//     int data;
//     Node* next;
//     Node(int val): data(val), next(nullptr){};
// };
// class LinkedList{
//     private:
//     Node* head; // points to FIRST element
//     Node* tail; // points to LAST element
//     public:
//     LinkedList():head(nullptr), tail(nullptr){}; // when created a list is empty
//     ////////////INSERTION AT BEGINNING////////// 
//     // push_front ***  ( MUST HANDLE THE CASE WHERE the list is empty. ) 
//     void push_front(int val){
//         Node* newnode= new Node(val); // here we create a newnode pointer to a Node element with data = val and next = nullptr
//         newnode->next=head; // now next of the new element points to the previous element head was pointing to.
//         head=newnode; // we want that now the head points to the newly created Node element which newnode points to.
//         if(tail==nullptr){ // EMPTY ARRAY CASE HANDLING
//             tail=head; // if before the push_back, the list  was empty, then the newnode is also the tail.
//         } 

//     }
//     ///////////DELETION AT BEGINNING///////////
//     // pop_front
//     void pop_front(){
//         if(head==nullptr){
//             return;
//         }
//         Node* temp=head;
//         head=head->next;
//         delete temp;
//         // HOW ARE WE ENSURING DANGLING POINTER ERROR
//         // ensure DANGLING POINTERS ERROR
//         if(head==nullptr){ // When the last element is reached that is when head is set to nullptr THIS IS CRUCIAL AS unlike temp, tail and head 
//             tail=nullptr;
//         }
//     }
//     //////////TRAVERSE A LL /////////////
//     // Display the list 
//     void display_list(){
//         Node* mover=head;
//         while(mover!=nullptr){
//             cout<<mover->data<<" -> ";
//             mover=mover->next;
//         }
//         cout<<"nullptr"<<endl;
//     }
//     ///////INSERTION AT THE END OF A LINKED LIST/////////
//     // push_back() function
//     void push_back(int val){
//         Node* newnode=new Node(val);
//         // HANDLING empty list
//         if(head==nullptr){
//             head=newnode;
//             tail=newnode;
//             return;
//         }
//         // Non empty list case
//         tail->next=newnode; // as tail is pointing to the last element as of now.
//         tail=newnode; // as now newnode points to the last element.
//     }
//     ~LinkedList(){
//         while(head!=nullptr){
//             pop_front();
//         }
//     }
// };
// int main(){
//     LinkedList l1;
//     l1.push_front(10);
//     l1.push_front(20);
//     l1.push_front(30);
//     // now ll should be 30->20->10->nullptr
//     l1.display_list();
//     l1.pop_front();
//     // now ll should be 20->10->nullptr
//     l1.display_list();
//     l1.push_back(40);
//     // 20->10->40->nullptr
//     l1.display_list();
//     return 0; // memory in heap is destroyed now.   
// }

////////////CONVERT AND ARRAY INTO A LINKED LIST && TRAVERSING AN ARRAY ///////////////
// #include<iostream>
// using namespace std;

// struct Node{
//     // public by default
//     int data;
//     Node* next;
//     Node(int val):data(val), next(nullptr){};
// };

// class LinkedList{
//     // private
//     Node* head; // first element
//     Node* tail; // points to last element
//     public:
//     LinkedList():head(nullptr), tail(nullptr){}; // when an ll object is created, it is empty hence head and tail are set to nullptr

//     // push_front()
//     void push_front(int val){
//         // first change the head incase of an empty element and then update it to tail incase of first element being push_front 'ed
//         Node* newnode=new Node(val);
//         newnode->next=head;
//         head=newnode;
//         if(tail==nullptr){
//             tail=head; // only tail=head for FIRST EMPTY CASE as this is push_FRONT() function so tail is NOT affected other than 
//         }
//     }
//     //push_back()
//     void push_back(int val){
//         Node* newnode = new Node(val);
//         // empty list case
//         if(head==nullptr){
//             head=newnode;
//             tail=newnode;
//             return;
//         }
//         //  We NEED to update tail as well in the previous loop as then if tail is not updated and return statement dne, then tail-> next that is nullpointer->next will return an ERROR
//         tail->next=newnode; // connect second last to the last node 
//         tail=newnode; // make the tail point to the last node
//     }

//     //pop_front()
//     void pop_front(){
//         if(head==nullptr){
//             return;
//         }
//         // Why can't I use while(head!=nullptr here insetad of returning when head==nullptr????)
//         Node* temp=head;
//         head=head->next;
//         delete temp;
//         if(head==nullptr){
//             tail=head; ////////////// after head has been changed now we will chek for tail DANGLING POINTER CASE
//         }
//     }

//     //display_list
//     void display_list(){
//         Node* mover=head;
//         while(mover!=nullptr){
//             cout<<mover->data<<" -> ";
//             mover=mover->next;
//         }
//         cout<<"nullptr"<<endl;
//     }

//     // Get head function
//     Node* get_head(){
//         return head;
//     }

//     ~LinkedList(){
//         while(head!=nullptr){
//             pop_front();
//         }
//     }
// };

// int main(){
//     LinkedList l1;
//     int arr[]={10,100,199,10,-20,192,81,10,10};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         l1.push_back(arr[i]);
//     }
//     l1.display_list();
//     return 0;
// }

//////////////STRIVER BASICS////////////////
// Convert an array to ll ( check )
// Traverse an ll ( check )
// Size of ll
// Check if node present
// delete linkedlist ( memory leaks )
// Note: Ensure that delete is taking place and memory leaks do not happen! ( do this manually ) in int main . 
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val, Node* ptr):data(val), next(ptr){};
//     Node(int val):data(val),next(nullptr){};
// };
// // Convert an array to a LL
// Node* convertarrtoLL(vector<int>& vec){
//     Node* head=new Node(vec[0]);
//     Node* mover=head;
//     int size=vec.size();
//     for(int i=1;i<size;i++){
//         Node* temp=new Node(vec[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }
// // Traverse a linked list
// void displayall(Node* head){
//     Node* mover=head;
//     while(mover!=nullptr){
//         cout<<mover->data<<"->"; // NOTE Do not display mover but mover->data is the value mover is the memory address of the node
//         mover=mover->next;
//     }
//     cout<<"nullptr"<<endl;
// }

// // size of a linkedlist
// int sizeofll(Node* head){
//     Node* mover=head;
//     int size=0;
//     while(mover!=nullptr){
//         size++;
//         mover=mover->next;
//     }
//     return size;
// }
// // ####### ERROR ALERT!!!!!!!
// // This is because if we reach the end of the loop and then mover has NOT found the value then the condition will be nullptr->data which will cause the SYSTEM TO CRASH as this is an ILLEGAL OPERATION.
// //check if a value is present or not
// bool checkifnodepresent(Node* head, int val){
//     Node* mover=head;
//     // while(mover->data!=val){
//     //     mover=mover->next;
//     // }
//     while(mover!=nullptr){
//         if(mover->data==val){ // ERROR ALERT == NOT =
//             return true;
//         }
//         mover=mover->next;
//     }
//     return false;
// }

// // delete a linked list for memory leaks.
// // esentially similar to pop_front()
// void deletell(Node* head){
//     while(head!=nullptr){
//         Node*temp=head;
//         head=head->next;
//         delete temp;
//     }
// }
// int main(){
//     vector<int> array={-10,199,28,19,36,87,6};
//     Node* head=convertarrtoLL(array);
//     displayall(head);
//     // ########## ERROR 
//     // Canot have a variable and function with same name in same scope as the compiler gets confused. 
//     // int sizeofll=sizeofll(head);
//     int list_size=sizeofll(head);
//     cout<<"Size of the linked list is "<<list_size<<endl;
//     bool isvalpresent=checkifnodepresent(head,19);
//     if(isvalpresent){
//         cout<<"Yes, present."<<endl;
//     }else{
//         cout<<"No, not present."<<endl;
//     }
//     bool isval2present=checkifnodepresent(head,26);
//     if(isval2present){
//         cout<<"Yes, present."<<endl;
//     }else{
//         cout<<"No, not present."<<endl;
//     }
//     // To ensure no MEMORY LEAKS:
//     deletell(head);
//     // WHY NO DANGLING POINTER IN THIS SITUATION
//     // The head pointer created inside int main is on the stack but the Node object it is pointing to is created in the heap memory which must be deleted. Now, since int main() ends hence the program also ends hence head is finished. Hence we do not need to set it to nullptr. As far as the mover and temp pointers created their scope is within the scope of the function createarrtoll() etc and hence will be deleted from stack once the function executes and therefore must not be set to nullptr.
//     return 0;
// }

// Implementing the same code above with the class LinkedList
struct Node{
    int data;
    Node* next;
    Node(int val):data(val), next(nullptr){};
};
class LinkedList{
    Node* head;
    Node* tail;
    public:
    LinkedList():head(nullptr), tail(nullptr){};
    // push_front() O(1) Time Complexitys
};
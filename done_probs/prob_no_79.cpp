//problem: https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem





#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : public Cache {
  
  public:
        LRUCache(int capacity)  {
                cp = capacity;
                tail = NULL;
                head = NULL;
           }  
  
        void set(int k, int v) override {
                Node* nNode = new Node(NULL, NULL, k, v);
                auto targItr = mp.find(k);
                if(targItr != mp.end()){//found!
                    Node* targNode = targItr->second;          
                
                    Node* prevN = targNode->prev;
                    Node* nextN = targNode->next;
                        
                    
                    //re-link (remove the targetNode from its current place to update its recent usage cache priority)
                    if(prevN != NULL){ //if not tail
                        prevN->next = nextN;    
                    }
                    if (nextN != NULL){//if not head
                        nextN->prev = prevN;
                    }
                    
                    //put target node in the new place for its priority LRU(at tail 'most recent')
                    Node* oldTail = tail; //save
                    oldTail->prev = tail; // push tail forward
                    
                    //put the new tail
                    tail = targNode;
                    
                    //set the new tail prev pointer to null
                    tail->prev = NULL;
                    
                    //set the new tail next pointer to old tail
                    tail->next = oldTail;
                    
                    //put new values
                    tail->value = v;
                    tail->key   = k; //actually key didn't change put nothing wrong to re-assure
                    
                    mp[k] = nNode;//update map
                    
                } else { //not found (push the new node(discard head and advance tail once!)              
                    if(mp.size() <= 0){
                        head = nNode;
                        tail = nNode;

                        head->prev = NULL;
                        head->next = NULL;
                        
                        tail->prev = NULL;
                        tail->next = NULL;

                                tail->value = v; //update
                                head->value = v; //update
                        
                        mp[k] = nNode;//update map
                        return;
                    }
                    if (mp.size() == 1){//mostly there is only one element
                            head->prev = nNode;
                            tail = nNode;
                    } else if(mp.size() >= cp){
                        Node* oldHead = head;
                         //discard head 
                                mp.erase(head->key);//remove from map
                                
                        oldHead->prev = NULL; 
                        oldHead->next = NULL; //actually head always has next pointer 
                        //continue above comment: with null value but np to re-assure this
                        oldHead->value = 0; 
                        oldHead->key = -1;
                        
                        if(head->prev != NULL){//just making sure
                            Node* newHead = head->prev;
                            //put the new head
                            newHead->next  = NULL;
                            head = newHead;
                        } 

                                delete oldHead;
                                oldHead = nullptr;
                    }
                   
                    //add new node (push to tail)
                    //put target node in the new place for its priority LRU(at tail 'most recent')
                    Node* oldTail = tail; //save
                    oldTail->prev = tail; // push tail forward
                    
                    //put the new tail
                    tail = nNode;
                    
                    //set the new tail prev pointer to null (as all tail nodes)
                    tail->prev = NULL;
                    
                    //set the new tail next pointer to old tail
                    tail->next = oldTail;
                    
                    //put new values
                    tail->value = v;
                    tail->key = k;
                    
                    mp[k] = nNode;//update map
                }
        }
  
        int get(int k) override{
                auto targItr = mp.find(k);
                if(targItr != mp.end()){//found!
                    Node* targNode = targItr->second;
                
                    Node* prevN = targNode->prev;
                    Node* nextN = targNode->next;
                        
                    
                    //re-link (remove the targetNode from its current place to update its recent usage cache priority)
                    
                    if(prevN != NULL){ 
                        if(mp.size() > 1){
                            prevN->next = nextN;    
                        } 
                    }
                    if (nextN != NULL){
                        if(mp.size() > 1){
                            nextN->prev = prevN;
                        }
                    }
                    
                    //put target node in the new place for its priority LRU(at tail 'most recent')
                    Node* oldTail = tail; //save
                    if(mp.size() > 1){
                        oldTail->prev = tail; // push tail forward
                    }
                    
                    //put the new tail
                    tail = targNode;
                    
                    //set the new tail prev pointer to null
                    tail->prev = NULL;
                    
                    //set the new tail next pointer to old tail
                    if(mp.size() > 1){
                        tail->next = oldTail;
                    }
                    return tail->value;//update map
                } else {//not found
                    return -1;
                }
        }
  
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}

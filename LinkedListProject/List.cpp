//
//  LinkedList.cpp
//  LinkedListProject
//
//  Created by Josh Barton  on 12/02/20.
//  Copyright © 2020 Josh Barton . All rights reserved.
//


#include "List.hpp"
#include <iostream>
using namespace std;


List::List (){
    head = NULL;
    curr = NULL;
    temp = NULL;
    
}

void List::AddNode(Car* addData){
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;
    
    if (head !=NULL){
        curr = head;
        
        while(curr->next !=NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
}

void List::DeleteNode(Car* delData){
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr !=NULL && curr->data->GetInfo() != delData->GetInfo()){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        std::cout << delData->GetInfo() << "was not in the list\n";
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        std::cout << "the value" << delData->GetInfo() << "was deleted\n";
    }
}

void List::Printlist(){
    curr = head;
    while(curr != NULL){
        std::cout << curr->data->GetInfo() << endl;
        curr->data->details();
        curr = curr->next;
        
    }
    
    
    
}


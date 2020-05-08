//
//  LinkedList.hpp
//  LinkedListProject
//
//  Created by Josh Barton  on 12/02/20.
//  Copyright © 2020 Josh Barton . All rights reserved.
//

#ifndef List_hpp
#define List_hpp
#include <stdio.h>

class List
{
private:
   typedef struct node{
       
        int data;
        node* next;
   }*nodePtr;
    
    nodePtr head;
      nodePtr curr;
      nodePtr temp;
public:
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void Printlist();
};


#endif /* LinkedList_hpp */

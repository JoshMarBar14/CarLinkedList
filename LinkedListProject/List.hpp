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
#include "Car.hpp"

class List
{
private:
   typedef struct node{
       
        Car data;
        node* next;
       
   }*nodePtr;
    
    nodePtr head;
      nodePtr curr;
      nodePtr temp;
public:
    List();
    void AddNode(Car addData);
    void DeleteNode(Car delData);
    void Printlist();
};


#endif /* LinkedList_hpp */

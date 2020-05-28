//
//  main.cpp
//  LinkedListProject
//
//  Created by Josh Barton  on 12/02/20.
//  Copyright © 2020 Josh Barton . All rights reserved.
//

#include <iostream>
#include "List.hpp"
#include "Car.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

    //int age = 10;
    
    Car* car1 = new Car(150, "tesla-X", true);
    car1->details();
    
    Car* car2  = new Car(200, "lamborghini Veneno", false);
    car2->details();
    
    Car* car3  = new Car(300, "Bugatti", false);
    car3->details();
    
    Car* car4  = new Car(300, "McLaren", false);
    car4->details();
    
    Car* car5  = new Car(200, "CyberTruck", true);
    car5->details();
    
    
    List ShowRoom;
    
    ShowRoom.AddNode(car1);
    ShowRoom.AddNode(car2);
    ShowRoom.AddNode(car3);
    ShowRoom.AddNode(car4);
    ShowRoom.AddNode(car5);

    ShowRoom.Printlist();

  /*  List Josh;
    
    Josh.AddNode(1);
    Josh.AddNode(2);
    Josh.AddNode(3);
    
    
    
    
    Josh.Printlist();
    
    Josh.DeleteNode(1);
    Josh.Printlist();
   */
    
    return 0;
}

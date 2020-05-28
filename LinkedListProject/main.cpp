//
//  main.cpp
//  LinkedListProject
//
//  Created by Josh Barton  on 12/02/20.
//  Copyright © 2020 Josh Barton . All rights reserved.
//

#include <iostream>
#include "Car.hpp"
#include "List.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    //int age = 10;
    
    Car* car1 = new Car(150, "tesla-X", true);
    
    //  car1->details();
    
    
    //   car1->setSpeed(150);
    // car1->setEco(true);
    //  car1->setName("tesla-X");
    // car1->details();
    
    
    
    Car* car2 = new Car(200, "lamborghini Veneno", false);
    //car2->details();
    
    //   car2->setSpeed(200);
    // car2-.setEco(false);
    //car2.setName("lamborghini Veneno");
    
    
    Car* car3 = new Car(300, "Bugatti", false);
    // car3->details();
    
    //  car3.setSpeed(300);
    //car3.setEco(false);
    //car3.setName("Bugatti");
    
    Car* car4 = new Car(300, "McLaren", false);
    // car4->details();
    
    //    car4.setSpeed(300);
    //    car4.setEco(false);
    //     car4.setName("McLaren");
    
    Car* car5 = new Car(200, "CyberTruck", true);
    //  car5->details();
    
    //   car5.setSpeed(200);
    //  car5.setEco(true);
    //  car5.setName("CyberTruck");
    
    
    List ShowRoom;
    
    ShowRoom.AddNode(car1);
    ShowRoom.AddNode(car2);
    ShowRoom.AddNode(car3);
    ShowRoom.AddNode(car4);
    ShowRoom.AddNode(car5);
    
    
    ShowRoom.Printlist();
    
    
    
    return 0;
}

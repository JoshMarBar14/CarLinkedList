//
//  Car.cpp
//  LinkedListProject
//
//  Created by Josh Barton  on 04/05/20.
//  Copyright © 2020 Josh Barton . All rights reserved.
//

#include <iostream>
#include "Car.hpp"
using namespace std;


Car::Car(float _speed, string _carName, bool _eco){
    
    speed = _speed;
    carName = _carName;
    eco = _eco;
    
}



void Car::details(){

    std::cout << "the cars speed is " << speed << endl;
    std::cout << "the cars name is " << carName << endl;
    
    if(eco == true){
       
        std::cout << "the car is eco friendly" << endl;
    }
    
    if(eco == false){
        
        std::cout << "the car is not eco friendly" << endl;

    }
    
}

//
//  Car.hpp
//  LinkedListProject
//
//  Created by Josh Barton  on 04/05/20.
//  Copyright © 2020 Josh Barton . All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Car
{
    
private:
    
    float speed = 100;
    bool eco = false;
    string carName = "ferrari";
    
    
    
public:
    void details();
    Car(float _speed, string _carName, bool _eco);
    Car();
    
    
    
    void setSpeed(float _speed)
    {
        speed = _speed;
    }
    
    void setEco(bool _eco)
    {
        eco = _eco;
    }
    
    void setName(string _carName)
    {
        carName = _carName;
    }
    
    
    string GetInfo()
    {
        return carName;
    }
    
    
};








#endif /* Car_hpp */

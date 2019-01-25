//
//  Runner.cpp
//  firstClass
//
//  Created by Shepherd, Kayden on 1/24/19.
//  Copyright © 2019 Ctec. All rights reserved.
//
#include "Controller.hpp"
int main()
{
    Controller myFirstController;
    myFirstController.start();
    Controller * myPointer = new Controller();
    myPointer->start();
    
    return 0;
}

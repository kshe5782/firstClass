//
//  Controller.cpp
//  firstClass
//
//  Created by Shepherd, Kayden on 1/24/19.
//  Copyright © 2019 Ctec. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    
}

void Controller :: start()
{
    cout << "this is epic" << endl;
    cout << "You like Arby's curly fries?" << endl;
    cout << "I have a " << specialNumber << " inch weenie" << endl;
    string input;
    cout << "how big is yours?" << endl;
    cin >> input;
    cout << input << "? That's it?" << endl;
}

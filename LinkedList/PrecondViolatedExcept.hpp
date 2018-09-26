//
//  PrecondViolatedExcept.hpp
//  LinkedList
//
//  Created by Tetsuya Hayashi on 9/9/18.
//  Copyright © 2018 Tetsuya Hayashi. All rights reserved.
//

#ifndef PrecondViolatedExcept_hpp
#define PrecondViolatedExcept_hpp

#include <stdio.h>
#include <stdexcept>
#include <string>

class PrecondViolatedExcept: public std::logic_error{
public:
    PrecondViolatedExcept(const std::string& message = "");
};

#endif /* PrecondViolatedExcept_hpp */

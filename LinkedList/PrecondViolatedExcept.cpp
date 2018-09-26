//
//  PrecondViolatedExcept.cpp
//  LinkedList
//
//  Created by Tetsuya Hayashi on 9/9/18.
//  Copyright © 2018 Tetsuya Hayashi. All rights reserved.
//

#include "PrecondViolatedExcept.hpp"

PrecondViolatedExcept::PrecondViolatedExcept(const std::string& message): std::logic_error("Precondition Violated Exception: " + message){
    
}

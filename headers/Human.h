//
// Created by Yannick Fumukani on 10/21/21.
//

#ifndef DATA_STRUCTURE_ALGORITHM_CPP_HUMAN_H
#define DATA_STRUCTURE_ALGORITHM_CPP_HUMAN_H

#include <iostream>

class Human {

protected:
    int bYear;
    std::string name;
    char sex;

public:
    Human();
    Human(std::string name, int bYear, char sex);

    void setBYear(int bYear);
    int getCurrentAge() const;
    void getDetail();

};


#endif //DATA_STRUCTURE_ALGORITHM_CPP_HUMAN_H

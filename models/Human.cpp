#include "../headers/Human.h"

Human::Human() {
}

Human::Human(std::string name, int bYear, char sex) {
    this->name = name;
    this->bYear = bYear;
    this->sex = sex;
}

void Human::setBYear(int bYear) {
    this->bYear = bYear;
}

int Human::getCurrentAge() const {
    return 2021 - this->bYear;
}

void Human::getDetail() {
    std::cout<<"name: "<<this->name<<" | age: "<<this->getCurrentAge()<<" | sex: "<<this->sex<<" | year of birth: "<<this->bYear<<std::endl;
}

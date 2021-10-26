//
// Created by Yannick Fumukani on 10/26/21.
//

#include <vector>
#include <iomanip>
#include "headers/Human.h"
#include "headers/arrayUtil.h"

int mainx() {

    std::vector <double> numbers;
    std::cout<< std::fixed<<std::setprecision(2);
    double sum = 0;
    double larger = INT_MIN;

    for(int i = 0; i < 5; i++){
        std::cout<<"Enter Weight "<<i+1<<std::endl;
        double n;
        std::cin>>n;
        numbers.push_back(n);
    }

    std::cout<<"You entered: ";

    for(auto n: numbers){
        sum += n;
        if(larger < n){
            larger = n;
        }
        std::cout<<std::setprecision(2)<<n<<" ";
    }

    std::cout<<std::endl;

    std::cout<<"Total weight: "<<sum<<"\n";
    std::cout<<"Average weight: "<<sum / numbers.size()<<"\n";
    std::cout<<"Max weight: "<<larger<<"\n";

    return 0;
}

#include <iostream>
#include <vector>
#include <limits>

void swapvec(int* &arr, std::vector<int> &vec, const int &asize) {
    for (int i=0;i<asize;i++) {
        int temp=arr[i];
        arr[i]=vec[i];
        vec[i]=temp;
    }
}

int main() {

    std::cout<<"Input array size: ";
    int asize;
    std::cin>>asize;

    while (asize<1 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input correct array size: ";
        std::cin>>asize;
    }

    std::vector<int> even(asize);
    int odd[asize];

    for (int i=0;i<asize;i++) {
        even[i]=2+i*2;
        odd[i]=1+i*2;
    }

    
    std::cout<<"Before swap: "<<std::endl;

    std::cout<<"Array: "<<odd[0];
    for (int i=1;i<asize;i++) {
        std::cout<<" "<<odd[i];
    }

    std::cout<<std::endl;
    std::cout<<"Vector: "<<even[0];
    for (int i=1;i<asize;i++) {
        std::cout<<" "<<even[i];
    }

    int* odda=odd;

    swapvec(odda,even,asize);

    std::cout<<std::endl;
    std::cout<<"After swap: "<<std::endl;

    std::cout<<"Array: "<<odd[0];
    for (int i=1;i<asize;i++) {
        std::cout<<" "<<odd[i];
    }

    std::cout<<std::endl;
    std::cout<<"Vector: "<<even[0];
    for (int i=1;i<asize;i++) {
        std::cout<<" "<<even[i];
    }


}
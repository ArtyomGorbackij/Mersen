#include <math.h>
#include <iostream>
#include <vector>
int ez(int N){
    bool b = false;
    for(int i=2;i<N;i++) {
        if (N % i){
            b=true;
            }
        else{return false;}
    };
    return b;
};
int main(int argc, const char * argv[]) {
    std::vector<int> vec;
    vec.push_back(1);
    for (int i=1;i<32;i++){
        if(ez(pow(2,i)-1)){vec.push_back(pow(2,i)-1);}};

    for (int i=0; i< vec.size();i++){
        std::cout<<vec[i]<<"\t";
    };
    return 0;
}

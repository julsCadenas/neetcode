#include <iostream>
#include <string>

int factorial(int num) {
    if (num==0){
        return 1;
    } else {
        return num*factorial(num-1);
    }
}

int fibonacci(int num) {
    if (num<=1){
        return num;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}

void fiboSequence(int n) {
    int a=0;
    int b=1;
    int c;
    for(int i=0; i<n; i++){
        std::cout<<a;
        if(i < n-1){
            std::cout<<", ";
        }
        c = a + b;
        a = b;
        b = c;
    }
}

std::string reverse(std::string x) {
    int left = 0;
    int right = x.length()-1;

    while(left < right){
        char temp = x[left];
        x[left] = x[right];
        x[right] = temp;

        left++;
        right--;
    }
    return x;
}

int main() {

    int x;

    std::cout<<"enter a number: ";
    std::cin>>x;

    fiboSequence(x);
    // std::cout<<"fibonacci: "<<ans<<std::endl;

    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <set>

float electricalCharges(float n) {
    float firstK = 0.07633;
    float moreThan1 = 0.09259;
    float ans = 0;

    if (n <= 0) {
        ans = 0;
    } else if (n > 1000) {
        int excess = n-1000;
        ans = (excess * moreThan1) + (1000 * firstK);
    } else {
        ans = 1000 * firstK; 
    }
    return ans;
}

void commas(std::vector<std::string> words) {
    std::string word;
    std::cout<<"press q to quit"<<std::endl;
    while(true){
        std::cout<<"Enter a word: ";
        std::cin>>word;
        if(word=="quit"){
            break;
        }
        words.push_back(word);
    }
    for(int i=0; i<words.size(); i++) {
        std::cout<<words[i];
        if(i < words.size()-1){
            std::cout<<", ";
        }
    }
}

float quotient(float numbers[15]) {
    std::cout<<"Enter a number: ";
    float num;
    int count = 0;
    // input the array
    while (count < 15 && std::cin >> num) {
        numbers[count] = num;
        count++;
        if(num==0){
            break;
        }
    }    
    // get the smallest and largest number
    float largest = numbers[0];
    float smallest = numbers[0];
    for(int i=0; i<count; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        } 
        if(numbers[i] < smallest && numbers[i]!=0) {
             smallest = numbers[i];
        }
    }
    // calcualte the largest possible quotient
    float largestQuotient = largest / smallest;
    return largestQuotient;
}

std::string coordinates(int x, int y) {
    std::string quadrant;
    // 0,0
    if(x==0 && y==0) {
        quadrant = "center";
    // 0, y
    } else if(x==0){
        quadrant = "on x axis";
    // x, 0
    } else if(y==0){
        quadrant = "on y axis";
    // 1st quadrant
    } else if(x>0 && y>0) {
        quadrant = "Q1";
    // 2nd quadrant
    } else if(x<0 && y>0) {
        quadrant = "Q2";
    // 3rd quadrant
    } else if(x<0 && y<0) {
        quadrant = "Q3";
    // 4th quadrant
    } else if(x>0 && y<0) {
        quadrant = "Q4";
    }
    return quadrant;
}

// void difference(int n1[], int n2[]) {
//     int size1 = sizeof(n1) / sizeof(n1[0]); 
//     int size2 = sizeof(n2) / sizeof(n2[0]); 
//     int counter = 0;
//     int diff[100];
//     for(int i=0; i<size1; i++){
//         for(int j=0; j<size2; j++){
//             if(n1[i] == n2[j]){
//                 diff[counter] = n1;  
//                 counter++;
//             }
//         }
//     }
// }

int main() {
    


    return 0;
}
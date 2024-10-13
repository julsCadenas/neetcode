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

// get the difference between arrays
void difference(int n1[], int n2[], int size1, int size2) {
    int counter = 0;
    int diff[100];

    for(int i=0; i<size1; i++){
        bool found = false;
        for(int j=0; j<size2; j++){
            if(n1[i] == n2[j]){
                found = true;
                break;
            } 
        }
        if(!found){
            diff[counter] = n1[i];
            counter++;
        }
    }

    for(int i=0; i<size2; i++){
        bool found = false;
        for(int j=0; j<size1; j++){
            if(n2[i] == n1[j]){
                found = true;
                break;
            } 
        }
        if(!found){
            diff[counter] = n2[i];
            counter++;
        }
    }

    // sort the new array
    bool swap;
    for(int i=0; i<counter-1; i++) {
        swap = false;
        for(int j=0; j<counter-i-1; j++){
            if(diff[j] > diff[j+1]){
                int temp = diff[j];
                diff[j] = diff[j+1];
                diff[j+1] = temp;
                swap = true;
            }
        }
        if(!swap) {
            break;
        }
    }

    std::cout<<"the differences are: ";
    for(int i=0; i<counter; i++){
        std::cout<<diff[i]<<" ";
    }
}

int main() {
    
    int i[]={27, 19, 1, 7};
    int j[]={7, 23, 14, 9, 27};
    int size1 = sizeof(i) / sizeof(i[0]);
    int size2 = sizeof(j) / sizeof(j[0]);

    difference(i, j, size1, size2);


    return 0;
}
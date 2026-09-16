#include <iostream>
using namespace std;

// The function prototypes
bool isValid(long long number);
int sumofDoubleEvenPlace(long long number);
int getDigit(int number);
int sumofOddPlace(long long number);
bool prefixMatched(long long number,int d);
int getSize(long long d);
long long  getPrefix(long long number, int k);


int main(){
// declare long long number
long long number;
// print "Enter a credit card number: "
cout << "Enter a credit card number" <<endl;
// read number into variable
cin >> number;

// Check for vadility of the number
if (isValid(number)){
cout << "Your credit card number is valid : "<<endl;
}
else{
cout << "Your credit card number is invalid : " <<endl;
}


return 0;
}

bool isValid(long long number){
int size = getSize(number);
if (size < 13 || size > 16){
    return false;
}
if (!(prefixMatched(number,4)||prefixMatched(number,5)||prefixMatched(number,6)||prefixMatched(number,37))){
return false;
}

int sum = sumofDoubleEvenPlace(number) + sumofOddPlace(number);
return (sum % 10 == 0);
}


int sumofDoubleEvenPlace(long long number){
int sum = 0;
int position = 1;

while(number > 0){
    int digit = (int)(number % 10);
    if (position % 2 == 0){
        sum += getDigit(digit * 2);
    }
    number /= 10;
    position++;
     
}
 return sum;
}


int getDigit(int number){
    if(number < 10){
        return number;
    }

    else 
    {
    return (number / 10) + (number % 10);
    }
}


int sumofOddPlace(long long number){
    int sum = 0;
    int position = 1;

    while (number != 0){
        int digit = (int)(number % 10);
        if (position  % 2 != 0){
            sum += digit;
        }
        number /= 10;
        position++;
    }
    return sum;
}

bool prefixMatched(long long number,int d){
    int k = getSize(d);
    return (getPrefix(number,k) == d);
}

int getSize(long long d){
    int count = 0;
    while (d>0){
        count ++;
        d /= 10;
    }
    return count;
}

long long  getPrefix(long long number, int k){
    int size = getSize(number);

    if (size < k){
        return number;
    }
    for (int i = 0; i < size-k ; i++ ){
    number /= 10;
    }
    return number;
}
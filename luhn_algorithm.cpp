#include <iostream>
int odd(const std::string cardnumber);
int even(const std::string cardnumber);
int getdigit(const int number);
int main() {
    std::string cardnumber;
    int result=0;
    std::cout<<"ENTER NO. :- ";
    std::cin>>cardnumber;
    result=odd(cardnumber)+even(cardnumber);
    if(result%10==0){
        std::cout<<"VALID";
    }else{
        std::cout<<"NOT";
    }
    return 0;
}
int odd(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-1;i>=0;i-=2){
        sum+=cardnumber[i]-'0';
    }
    return sum;
}
int even(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-2;i>=0;i-=2){
        sum+=getdigit((cardnumber[i]-'0')*2);
    }
    return sum;
}
int getdigit(const int number){
    return number%10 +(number/10);
}
#include <iostream>
#include<stack>

using namespace std;

int solution (string& S)
{
    std::cout<<"Input string item is"<<S<<std::endl;
    if(S.size() > 200000)
        return -1;
    stack<int> number_stack {};
    auto getNumber = [&number_stack](int& num1,int& num2 )
    {
        num1 = number_stack.top();
        number_stack.pop();
        num2 = number_stack.top();
        number_stack.pop();
    };
    for(auto& item : S)
    {
        if(isdigit(item))
        {
            int number = int(item) - '0';
            number_stack.push(number);
        }
        else if(item == '+')
        {
            if(number_stack.size() < 2)
                return -1;
            int num1;
            int num2;
           getNumber(num1,num2);
            number_stack.push(num1+num2);
        }
        else if(item == '*')
        {
            if(number_stack.size() < 2)
                return -1;
            int num1;
            int num2;
            getNumber(num1,num2);
            number_stack.push(num1*num2);
        }
        else
        {
            //not a valid symbol or number
            return -1;
        }
    }
    return number_stack.top();
}

int main()
{
    string input = "13+62*7+*";
    int result = solution(input);
    std::cout<<"My result is "<<result<<std::endl;


    input = "13+62+3";
    result = solution(input);
    std::cout<<"My result is "<<result<<std::endl;
    return 0;
}

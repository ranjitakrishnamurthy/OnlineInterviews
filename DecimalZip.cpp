#include <iostream>

using namespace std;

int solution (int A, int B)
{
    string first_item = to_string(A);
    string second_item = to_string(B);

    std::string result_string="";

    int max_element = std::max(first_item.size(),second_item.size());
    for(int index=0;index<max_element;index++)
    {
        if(index<first_item.size())
        {
            result_string += first_item.at(index);
        }
        if(index<second_item.size())
        {
            result_string += second_item.at(index);
        }
    }
    int result = stoi(result_string);

    return result > 100000000 ? -1 : result;

}

int main()
{
    int my_result = solution(345,6789);
    std::cout<<"My result is "<<my_result<<std::endl;
    my_result = solution(123,456);
    std::cout<<"My result is "<<my_result<<std::endl;
    my_result = solution(12345,678);
    std::cout<<"My result is "<<my_result<<std::endl;
    my_result = solution(123,67890);
    std::cout<<"My result is "<<my_result<<std::endl;
    my_result = solution(1234,0);
    std::cout<<"My result is "<<my_result<<std::endl;
    return 0;
}

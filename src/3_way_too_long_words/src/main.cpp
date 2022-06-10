#include<iostream>
#include<string>
#include<vector>
// void answer()
int main()
{
    int number_of_times;
    std::cin>>number_of_times;
    std::vector<std::string> string_list;
    while(number_of_times-- !=0)
    {
        std::string temp;
        std::cin>>temp;
        string_list.push_back(temp);
    }
    for (size_t i = 0; i < string_list.size(); i++)
    {
        std::string str = string_list[i];
        if(str.length() > 10)
        {
            std::cout<<str[0]+std::to_string(str.length() - 2)+str[str.length() - 1]<<"\n";
        }
        else
        {
            std::cout<<str<<"\n";
        }       /* code */
    }
    string_list.clear();
    
    
}
#include<iostream>
#include<vector>
#include<bitset>
int main()
{
    int number_of_inputs;
    std::cin>>number_of_inputs;
    int i = 0;
    int result = 0;
    // while(i<number_of_inputs)
    // {
    //     i++;
    //     std::bitset<3> b_input;
    //     std::cin>>b_input;
    //     if((b_input[0]+b_input[1]+b_input[2])>1){
    //         ++result;
    //     }
    //     if(i==number_of_inputs)
    //     {
    //         std::cout<<result;
    //     }

    // }
    while(i<number_of_inputs)
    {
        i++;        
        int a,b,c;
        std::cin>>a>>b>>c;
        if((a+b+c)>1){
            ++result;
        }
        if(i==number_of_inputs)
        {
            std::cout<<result;
        }

    }
}
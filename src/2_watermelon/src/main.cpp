#include<iostream>
int main()
{
    int weight;
    // std::cout<<"Enter the Weight: ";
    std::cin>>weight;
    std::cout<<"\n";
    static bool can_divide = false;
    if(weight %2 == 0)
    {
        int a,b;
        // b = weight;
        for (int i = 1; i < weight; i++)
        {
            a = i;
            for (int j = 1; j < weight; j++)
            {
                b=j;
                if((a%2== 0) && (b%2==0) && ((a+b)== weight))
                {
                    // std::cout<<"First part: "<<a<<" Second part: "<<b<<" \n";
                    can_divide = true;
                    break;
                }
            }
            if(can_divide)
            {
                break;
            }
        }
        if(can_divide)
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }
        
    }
    else
        {
            std::cout<<"NO\n";
        }
}
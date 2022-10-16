#include<iostream>
#include <vector>
#include <string>
int main()
{
    int M(0),N(0);
    std::cout<<"M N ";
    std::cin>>M>>N;
    int** array = new int*[M];
    // std::vector<std::vector<std::string>> ** tes = new std::vector<std::string>*(M,N);
    using matrix = std::vector< std::vector<std::string> >;
    matrix tes(M, std::vector<std::string>(N));
    // std::vector<tmp1> **tes = new std::vector<tmp1>(N);
    // std::vector<std::vector<std::string>> tes;
    
    //Dynamically allocating column space in heap
    for(int i=0; i<M; i++){
        array[i] = new int[N];
    }
    int count = 0;
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            //verrtrical method
            if(array[i][j] != 1 )
            {
                if(M > i+1)
                {
                    array[i][j] = 1;
                    array[i+1][j] = 1;
                    tes[i][j] = std::string("||");
                    tes[i+1][j] = std::string(" _ ");
                    count++;
                    continue;
                }
                //horizontal
                if(N > j+1)
                {
                    array[i][j] = 1;
                    array[i][j+1] = 1;
                    tes[i][j] = std::string(" [=");
                    tes[i][j+1] = std::string("=] ");
                    count++;
                    continue;
                }
            }
            

        }


        
    }
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            // std::cout<<" "<<array[i][j];
            std::cout<<tes[i][j];

            if(j+1 == N){
                std::cout<<"\n";
            }
        }
    }
    // for (size_t i = 0; i < M; i++)
    // {
    //     // std::vector<std::string> tmp = tes[i];
    //     for (size_t j = 0; j < N; j++)
    //     {
    //         std::cout<<tes[i][j];
    //         if(j+1 == N){
    //             std::cout<<"\n";
    //         }
    //     }
        
    // }
    
    std::cout<<count;
    delete [] array;
}
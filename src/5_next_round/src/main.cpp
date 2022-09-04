#include<iostream>
#include<vector>
#include<array>
int algo_for_next_round(const  int*__restrict__ data_score_board, const int size_of_array, const int k_place){
    int number_of_successors = 0;
    static const int max_value = data_score_board[k_place-1];
    // std::cout<< max_value;
    for (size_t i = 0; i < size_of_array; i++)
    {
        if(size_of_array == 1 && k_place ==1){
            if((data_score_board)[i] >0){
                number_of_successors=1;
            }
            else{
                number_of_successors=0;
            }
        }
        else if (((data_score_board)[i] >=max_value && (data_score_board)[i] > 0))
        {
            number_of_successors++;
        }
    }
    return number_of_successors;
}
void get_inputs(){
    int number_of_participants = 0, k_th_place=0;
    std::cin>>number_of_participants>>k_th_place;
    // std::cout<<"number_of_participants "<<number_of_participants <<" k_th_place "<<k_th_place<<"\n";
    int *score_board = new int[number_of_participants];
    for (size_t i = 0; i < number_of_participants; i++)
    {
        std::cin>>(score_board)[i];
        // std::cout<<(score_board)[i]<<" ";
    }

    std::cout<< algo_for_next_round(score_board,number_of_participants,k_th_place);
    delete [] score_board;

}
int main()
{
    get_inputs();
}
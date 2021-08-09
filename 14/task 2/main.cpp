#include <iostream>

struct game{
    static const short SIZE =3;
    char field[SIZE][SIZE]={{'1','2','3'},
                            {'4','5','6'},
                            {'7','8','9'}};


    void output_field(){
        std::cout<<field[0][0]<<"|"<<field[0][1]<<"|"<<field[0][2]<<"\n";
        std::cout<<field[1][0]<<"|"<<field[1][1]<<"|"<<field[1][2]<<"\n";
        std::cout<<field[2][0]<<"|"<<field[2][1]<<"|"<<field[2][2]<<"\n";
    };

    void put_mark(char mark,char simbol){
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (field[i][j]==mark){
                    field[i][j]=simbol;
                    break;
                }
            }
        }
    };

    char winner(){

        for (int i = 0; i < SIZE; ++i) {
            if (field[i][0]==field[i][1]&&field[i][0]==field[i][2])
            {
                return field[i][0];
            }
        }
        for (int i = 0; i < SIZE; ++i) {
            if (field[0][i]==field[1][i]&&field[0][i]==field[2][i])
            {
                return field[0][i];
            }
        }
        return 'n';

    };

};



int main() {

    game tictactoe{};
    int count{1};
    char mark{};
    char simbol{};

    while (true){
        if (count==9){
            std::cout<<"\ngame over";
            break;
        }

        if (count%2){
            std::cout<<"'X' turn\n";
            simbol='X';
        }else{
            std::cout<<"'O' turn\n";
            simbol='O';
        }
        tictactoe.output_field();
        std::cout<<"watch the field and enter your mark!\n";
        std::cin>>mark;
        tictactoe.put_mark(mark,simbol);

        if (count>3){
            tictactoe.winner();
            if (tictactoe.winner()!='n'){
                std::cout<<"winner is "<<tictactoe.winner()<<std::endl;
                break;
            }
        }
        count++;
        system("clear");
    }
    system("pause");
    return 0;
}
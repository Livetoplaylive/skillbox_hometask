#include <fstream>
#include <string>
#include <iostream>

const int SIZE = 13;

int show(int *available_sectors);
void foo(std::ifstream &temp,int *arr);
void find_and_delete(int *available_sectors, int need_sector);

int main() {
    std::ifstream question, answer;
    std::string dummy{},user_answer{};

    const char *question_path = "/home/wandsman/Repository/skillbox_hometask/19/task_5/questions.txt";
    const char *answer_path = "/home/wandsman/Repository/skillbox_hometask/19/task_5/answer.txt";

    int question_index[SIZE]{},answer_index[SIZE],available_sectors[SIZE]{1,2,3,4,5,6,7,8,9,10,11,12,13};
    int question_num{}, user_score{}, computer_score{};

    question.open(question_path);
    answer.open(answer_path);

    if (!question || !answer) {
        printf("%s\n", "file don't open!");
    }

    foo(question,question_index);
    foo(answer,answer_index);


    while(user_score<=6||computer_score<=6){

        question_num=show(available_sectors)-1;
        question.seekg(question_index[question_num]);
        answer.seekg(answer_index[question_num]);
        getline(question,dummy);
        printf("%s",dummy.c_str());
        dummy.clear();
        getline(answer,dummy);
        std::cin>>user_answer;
        if (dummy==user_answer){
            user_score++;
        }
        else{
            computer_score++;
        }
        printf("your_score:%d\ncomputer score:%d\n",user_score,computer_score);
        find_and_delete(available_sectors,question_num);
    }



    question.close();
    answer.close();
    return 0;
}
void foo(std::ifstream &temp, int *arr) {
    std::string basicString;
    for (int i = 0, tmp = 0; i < SIZE; ++i) {
        arr[i] = tmp;
        getline(temp, basicString);
        tmp = (int) temp.tellg() ;
    }
    temp.clear();
    temp.seekg(0,std::ios::beg);
}

int show(int *available_sectors) {
    int question_num;
    printf("%s\n", "\nall sector's that you can take");
    for (int i = 0; i < SIZE; ++i) {
        if (available_sectors[i] == 0) {
            continue;
        } else {
            printf("%d ", available_sectors[i]);
        }
    }
    scanf("%d", &question_num);
    return question_num;
}

void find_and_delete(int *available_sectors, int need_sector) {
    need_sector++;
    for (int i = 0; i < SIZE; ++i) {
        if (available_sectors[i] == need_sector) {
            available_sectors[i] = 0;
        }
    }
}

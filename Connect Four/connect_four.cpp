#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

void create_matrix(int *);

void print_matrix(int *);

void change_matrix(int *, int*, int *);

void change_order(int *, int*);

void horizontal_check_matrix(int *, int *, int *);

void vertical_check_matrix(int *, int *, int *);

void diagonal_check_matrix(int *, int *, int *);

int main() {

    srand(time(NULL));

    int matrix[6][7];
    int *p_matrix;
    p_matrix = matrix[0];

    int starter = 0;
    int *p_starter;
    p_starter = &starter;
    starter = (rand() % 2) + 4;

    int row_choice = 1;
    int *p_row_choice;
    p_row_choice = &row_choice;

    int five = 5;
    int four = 4;
    int *p_five;
    int *p_four;
    p_five = &five;
    p_four = &four;

    int win_check = 0;
    int *p_win_check;
    p_win_check = &win_check;

    create_matrix(p_matrix);
    print_matrix(p_matrix);

    cout << "The starter is number #" << starter << endl;

    do
    {
        cout << "Which col you will choose? (1 - 7): ";
        cin >> row_choice;
        cout << endl;

        if (starter == 4)
        {
            change_matrix(p_matrix, p_four, p_row_choice);
            change_order(p_four, p_five);
            cout << "Your turn: " << *p_four;
            cout << endl;
            horizontal_check_matrix(p_matrix, p_win_check, p_starter);
            vertical_check_matrix(p_matrix, p_win_check, p_starter);
            diagonal_check_matrix(p_matrix,p_win_check, p_starter);
        }

        else if(starter == 5)
        {
            change_matrix(p_matrix, p_five, p_row_choice);
            change_order(p_five, p_four);
            cout << "Your turn: " << *p_five;
            cout << endl;
            horizontal_check_matrix(p_matrix, p_win_check, p_starter);
            vertical_check_matrix(p_matrix, p_win_check, p_starter);
            diagonal_check_matrix(p_matrix,p_win_check, p_starter);
        }

        print_matrix(p_matrix);

    } while (win_check == 0);

    if(*(p_win_check) == 1)
    {
        cout << endl << "CONGRATS! YOU WON!" << endl;
    }

    return 0;
}

void create_matrix(int *matrix) {
    int i;
    for(i = 0; i < 42; i++)
    {
        *(matrix + i) = 0;
    }
}

void print_matrix(int *matrix) {
    int i;
    for(i = 0; i < 42; i++)
    {
        if((i % 7) == 0)
        {   
            cout << endl;
        }
        cout << *(matrix + i) << "\t";
    }
    cout << endl << endl;
}

void change_matrix(int *matrix, int *starter, int *row_choice) {

    // FIRST COL

    if(*(row_choice) % 7 == 0 && *(matrix + 41) == 0)
    {
        *(matrix + 41) = *starter;
    }
    else if(*(row_choice) % 7 == 6 && *(matrix + 40) == 0)
    {
        *(matrix + 40) = *starter;
    }
    else if(*(row_choice) % 7 == 5 && *(matrix + 39) == 0)
    {
        *(matrix + 39) = *starter;
    }
    else if(*(row_choice) % 7 == 4 && *(matrix + 38) == 0)
    {
        *(matrix + 38) = *starter;
    }
    else if(*(row_choice) % 7 == 3 && *(matrix + 37) == 0)
    {
        *(matrix + 37) = *starter;
    }
    else if(*(row_choice) % 7 == 2 && *(matrix + 36) == 0)
    {
        *(matrix + 36) = *starter;
    }
    else if(*(row_choice) % 7 == 1 && *(matrix + 35) == 0)
    {
        *(matrix + 35) = *starter;
    }

    // SECOND COL

    else if((*(row_choice) % 7 == 0) && (*(matrix + 34) == 0))
    {
        *(matrix + 34) = *starter;
    }
    else if((*(row_choice) % 7 == 6) && (*(matrix + 33) == 0))
    {
        *(matrix + 33) = *starter;
    }
    else if((*(row_choice) % 7 == 5) && (*(matrix + 32) == 0))
    {
        *(matrix + 32) = *starter;
    }
    else if((*(row_choice) % 7 == 4) && (*(matrix + 31) == 0))
    {
        *(matrix + 31) = *starter;
    }
    else if((*(row_choice) % 7 == 3) && (*(matrix + 30) == 0))
    {
        *(matrix + 30) = *starter;
    }
    else if((*(row_choice) % 7 == 2) && (*(matrix + 29) == 0))
    {
        *(matrix + 29) = *starter;
    }
    else if((*(row_choice) % 7 == 1) && (*(matrix + 28) == 0))
    {
        *(matrix + 28) = *starter;
    }

    // THIRD COL

    else if((*(row_choice) % 7 == 0) && (*(matrix + 27) == 0))
    {
        *(matrix + 27) = *starter;
    }
    else if((*(row_choice) % 7 == 6) && (*(matrix + 26) == 0))
    {
        *(matrix + 26) = *starter;
    }
    else if((*(row_choice) % 7 == 5) && (*(matrix + 25) == 0))
    {
        *(matrix + 25) = *starter;
    }
    else if((*(row_choice) % 7 == 4) && (*(matrix + 24) == 0))
    {
        *(matrix + 24) = *starter;
    }
    else if((*(row_choice) % 7 == 3) && (*(matrix + 23) == 0))
    {
        *(matrix + 23) = *starter;
    }
    else if((*(row_choice) % 7 == 2) && (*(matrix + 22) == 0))
    {
        *(matrix + 22) = *starter;
    }
    else if((*(row_choice) % 7 == 1) && (*(matrix + 21) == 0))
    {
        *(matrix + 21) = *starter;
    }

    // FOURTH COL

    else if((*(row_choice) % 7 == 0) && (*(matrix + 20) == 0))
    {
        *(matrix + 20) = *starter;
    }
    else if((*(row_choice) % 7 == 6) && (*(matrix + 19) == 0))
    {
        *(matrix + 19) = *starter;
    }
    else if((*(row_choice) % 7 == 5) && (*(matrix + 18) == 0))
    {
        *(matrix + 18) = *starter;
    }
    else if((*(row_choice) % 7 == 4) && (*(matrix + 17) == 0))
    {
        *(matrix + 17) = *starter;
    }
    else if((*(row_choice) % 7 == 3) && (*(matrix + 16) == 0))
    {
        *(matrix + 16) = *starter;
    }
    else if((*(row_choice) % 7 == 2) && (*(matrix + 15) == 0))
    {
        *(matrix + 15) = *starter;
    }
    else if((*(row_choice) % 7 == 1) && (*(matrix + 14) == 0))
    {
        *(matrix + 14) = *starter;
    }

    // FIFTH COL

    else if((*(row_choice) % 7 == 0) && (*(matrix + 13) == 0))
    {
        *(matrix + 13) = *starter;
    }
    else if((*(row_choice) % 7 == 6) && (*(matrix + 12) == 0))
    {
        *(matrix + 12) = *starter;
    }
    else if((*(row_choice) % 7 == 5) && (*(matrix + 11) == 0))
    {
        *(matrix + 11) = *starter;
    }
    else if((*(row_choice) % 7 == 4) && (*(matrix + 10) == 0))
    {
        *(matrix + 10) = *starter;
    }
    else if((*(row_choice) % 7 == 3) && (*(matrix + 9) == 0))
    {
        *(matrix + 9) = *starter;
    }
    else if((*(row_choice) % 7 == 2) && (*(matrix + 8) == 0))
    {
        *(matrix + 8) = *starter;
    }
    else if((*(row_choice) % 7 == 1) && (*(matrix + 7) == 0))
    {
        *(matrix + 7) = *starter;
    }

    // SIXTH COL

    else if((*(row_choice) % 7 == 0) && (*(matrix + 6) == 0))
    {
        *(matrix + 6) = *starter;
    }
    else if((*(row_choice) % 7 == 6) && (*(matrix + 5) == 0))
    {
        *(matrix + 5) = *starter;
    }
    else if((*(row_choice) % 7 == 5) && (*(matrix + 4) == 0))
    {
        *(matrix + 4) = *starter;
    }
    else if((*(row_choice) % 7 == 4) && (*(matrix + 3) == 0))
    {
        *(matrix + 3) = *starter;
    }
    else if((*(row_choice) % 7 == 3) && (*(matrix + 2) == 0))
    {
        *(matrix + 2) = *starter;
    }
    else if((*(row_choice) % 7 == 2) && (*(matrix + 1) == 0))
    {
        *(matrix + 1) = *starter;
    }
    else if((*(row_choice) % 7 == 1) && (*(matrix + 0) == 0))
    {
        *(matrix + 0) = *starter;
    }
}

void change_order(int *five, int *four) {
    int temp;
    temp = *four;
    *four = *five;
    *five = temp;
}

void horizontal_check_matrix(int *matrix, int *win_check, int *starter) {
    int i;
    int j;

    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;
    
    // SIXTH COL

    for(i = 35; i <= 38; i++)
    {
        result1 += *(matrix + i);
    }
    for(i = 36; i <= 39; i++)
    {
        result2 += *(matrix + i);
    }
    for(i = 37; i <= 40; i++)
    {
        result3 += *(matrix + i);
    }
    for(i = 38; i <= 41; i++)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // FIFTH COL

    for(i = 28; i <= 31; i++)
    {
        result1 += *(matrix + i);
    }
    for(i = 29; i <= 32; i++)
    {
        result2 += *(matrix + i);
    }
    for(i = 30; i <= 33; i++)
    {
        result3 += *(matrix + i);
    }
    for(i = 31; i <= 34; i++)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // FOURTH COL

    for(i = 21; i <= 24; i++)
    {
        result1 += *(matrix + i);
    }
    for(i = 22; i <= 25; i++)
    {
        result2 += *(matrix + i);
    }
    for(i = 23; i <= 26; i++)
    {
        result3 += *(matrix + i);
    }
    for(i = 24; i <= 27; i++)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // THIRD COL

    for(i = 14; i <= 17; i++)
    {
        result1 += *(matrix + i);
    }
    for(i = 15; i <= 18; i++)
    {
        result2 += *(matrix + i);
    }
    for(i = 16; i <= 19; i++)
    {
        result3 += *(matrix + i);
    }
    for(i = 17; i <= 20; i++)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // SECOND COL

    for(i = 7; i <= 10; i++)
    {
        result1 += *(matrix + i);
    }
    for(i = 8; i <= 11; i++)
    {
        result2 += *(matrix + i);
    }
    for(i = 9; i <= 12; i++)
    {
        result3 += *(matrix + i);
    }
    for(i = 10; i <= 13; i++)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // FIRST COL

    for(i = 0; i <= 3; i++)
    {
        result1 += *(matrix + i);
    }
    for(i = 1; i <= 4; i++)
    {
        result2 += *(matrix + i);
    }
    for(i = 2; i <= 5; i++)
    {
        result3 += *(matrix + i);
    }
    for(i = 3; i <= 6; i++)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }
}

void vertical_check_matrix(int *matrix, int *win_check, int *starter) {
    int i;

    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;
    int result5 = 0;
    int result6 = 0;
    int result7 = 0;

    // THIRD ROW

    for(i = 35; i >= 14; i -= 7)
    {
        result1 += *(matrix + i);
    }
    for(i = 36; i >= 15; i -= 7)
    {
        result2 += *(matrix + i);
    }
    for(i = 37; i >= 16; i -= 7)
    {
        result3 += *(matrix + i);
    }
    for(i = 38; i >= 17; i -= 7)
    {
        result4 += *(matrix + i);
    }
    for(i = 39; i >= 18; i -= 7)
    {
        result5 += *(matrix + i);
    }
    for(i = 40; i >= 19; i -= 7)
    {
        result6 += *(matrix + i);
    }
    for(i = 41; i >= 20; i -= 7)
    {
        result7 += *(matrix + i);
    }

    //

    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20 || (result5) == 16 || (result5) == 20 || (result6) == 16 || (result6) == 20 || (result7) == 16 || (result7) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
        result5 = 0;
        result6 = 0;
        result7 = 0;
    }

    // SECOND ROW

    for(i = 28; i >= 7; i -= 7)
    {
        result1 += *(matrix + i);
    }
    for(i = 29; i >= 8; i -= 7)
    {
        result2 += *(matrix + i);
    }
    for(i = 30; i >= 9; i -= 7)
    {
        result3 += *(matrix + i);
    }
    for(i = 31; i >= 10; i -= 7)
    {
        result4 += *(matrix + i);
    }
    for(i = 32; i >= 11; i -= 7)
    {
        result5 += *(matrix + i);
    }
    for(i = 33; i >= 12; i -= 7)
    {
        result6 += *(matrix + i);
    }
    for(i = 34; i >= 13; i -= 7)
    {
        result7 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20 || (result5) == 16 || (result5) == 20 || (result6) == 16 || (result6) == 20 || (result7) == 16 || (result7) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
        result5 = 0;
        result6 = 0;
        result7 = 0;
    }

    // FIRST ROW

    for(i = 21; i >= 0; i -= 7)
    {
        result1 += *(matrix + i);
    }
    for(i = 22; i >= 1; i -= 7)
    {
        result2 += *(matrix + i);
    }
    for(i = 23; i >= 2; i -= 7)
    {
        result3 += *(matrix + i);
    }
    for(i = 24; i >= 3; i -= 7)
    {
        result4 += *(matrix + i);
    }
    for(i = 25; i >= 4; i -= 7)
    {
        result5 += *(matrix + i);
    }
    for(i = 26; i >= 5; i -= 7)
    {
        result6 += *(matrix + i);
    }
    for(i = 27; i >= 6; i -= 7)
    {
        result7 += *(matrix + i);
    }

    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20 || (result5) == 16 || (result5) == 20 || (result6) == 16 || (result6) == 20 || (result7) == 16 || (result7) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
        result5 = 0;
        result6 = 0;
        result7 = 0;
    }
}

void diagonal_check_matrix(int *matrix, int *win_check, int *starter) {
    int i;

    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    int result4 = 0;

    // FIRST LEFT DIAGONAL

    for(i = 0; i <= 24; i += 8)
    {
        result1 += *(matrix + i);
    }
    for(i = 1; i <= 25; i += 8)
    {
        result2 += *(matrix + i);
    }
    for(i = 2; i <= 26; i += 8)
    {
        result3 += *(matrix + i);
    }
    for(i = 3; i <= 27; i += 8)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // FIRST RIGHT DIAGONAL

    for(i = 6; i <= 24; i += 6)
    {
        result1 += *(matrix + i);
    }
    for(i = 5; i <= 23; i += 6)
    {
        result2 += *(matrix + i);
    }
    for(i = 4; i <= 22; i += 6)
    {
        result3 += *(matrix + i);
    }
    for(i = 3; i <= 21; i += 6)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // SECOND LEFT DIAGONAL

    for(i = 7; i <= 31; i += 8)
    {
        result1 += *(matrix + i);
    }
    for(i = 8; i <= 32; i += 8)
    {
        result2 += *(matrix + i);
    }
    for(i = 9; i <= 33; i += 8)
    {
        result3 += *(matrix + i);
    }
    for(i = 10; i <= 34; i += 8)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // SECOND RIGHT DIAGONAL

    for(i = 13; i <= 31; i += 6)
    {
        result1 += *(matrix + i);
    }
    for(i = 12; i <= 30; i += 6)
    {
        result2 += *(matrix + i);
    }
    for(i = 11; i <= 29; i += 6)
    {
        result3 += *(matrix + i);
    }
    for(i = 10; i <= 28; i += 6)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // THIRD LEFT DIAGONAL

    for(i = 14; i <= 38; i += 8)
    {
        result1 += *(matrix + i);
    }
    for(i = 15; i <= 39; i += 8)
    {
        result2 += *(matrix + i);
    }
    for(i = 16; i <= 40; i += 8)
    {
        result3 += *(matrix + i);
    }
    for(i = 17; i <= 41; i += 8)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }

    // THIRD RIGHT DIAGONAL 

    for(i = 20; i <= 38; i += 6)
    {
        result1 += *(matrix + i);
    }
    for(i = 19; i <= 37; i += 6)
    {
        result2 += *(matrix + i);
    }
    for(i = 18; i <= 36; i += 6)
    {
        result3 += *(matrix + i);
    }
    for(i = 17; i <= 35; i += 6)
    {
        result4 += *(matrix + i);
    }
    if((result1) == 16 || (result1) == 20 || (result2) == 16 || (result2) == 20 || (result3) == 16 || (result3) == 20 || (result4) == 16 || (result4) == 20)
    {
        *win_check = 1;
    }
    else
    {
        result1 = 0;
        result2 = 0;
        result3 = 0;
        result4 = 0;
    }
}
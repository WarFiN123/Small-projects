#include <iostream>

bool game_on = true;
char t1, t2, t3, m1, m2, m3, b1, b2, b3;
bool tt1, tt2, tt3, mm1, mm2, mm3, bb1, bb2, bb3;

void initialize_board()
{
    t1 = t2 = t3 = m1 = m2 = m3 = b1 = b2 = b3 = ' ';
    tt1 = tt2 = tt3 = mm1 = mm2 = mm3 = bb1 = bb2 = bb3 = false;
}


void print_with_color(char c)
{
    if (c == 'X') {
        std::cout << "\x1B[38;2;255;165;0m" << c << "\033[0m";
    } else if (c == 'O') {
        std::cout << "\x1B[38;2;255;255;0m" << c << "\033[0m";
    } else {
        std::cout << c;
    }
}

void print_board(char t1, char t2, char t3, char m1, char m2, char m3, char b1, char b2, char b3)
{
    print_with_color(t1); std::cout << " | "; print_with_color(t2); std::cout << " | "; print_with_color(t3); std::cout << std::endl;
    std::cout << "---------" << std::endl;
    print_with_color(m1); std::cout << " | "; print_with_color(m2); std::cout << " | "; print_with_color(m3); std::cout << std::endl;
    std::cout << "---------" << std::endl;
    print_with_color(b1); std::cout << " | "; print_with_color(b2); std::cout << " | "; print_with_color(b3); std::cout << std::endl;
}
template <typename T>
    requires std::same_as<T, char>
void check_win(T &t1, T &t2, T &t3, T &m1, T &m2, T &m3, T &b1, T &b2, T &b3)
{
    bool winner_found = false;
    if (t1 == 'X' && t2 == 'X' && t3 == 'X' || m1 == 'X' && m2 == 'X' && m3 == 'X' || b1 == 'X' && b2 == 'X' && b3 == 'X' || t1 == 'X' && m1 == 'X' && b1 == 'X' || t2 == 'X' && m2 == 'X' && b2 == 'X' || t3 == 'X' && m3 == 'X' && b3 == 'X' || t1 == 'X' && m2 == 'X' && b3 == 'X' || t3 == 'X' && m2 == 'X' && b1 == 'X')
    {
        game_on = false;
        winner_found = true;
        std::cout << "X wins!" << std::endl;
    }
    else if (t1 == 'O' && t2 == 'O' && t3 == 'O' || m1 == 'O' && m2 == 'O' && m3 == 'O' || b1 == 'O' && b2 == 'O' && b3 == 'O' || t1 == 'O' && m1 == 'O' && b1 == 'O' || t2 == 'O' && m2 == 'O' && b2 == 'O' || t3 == 'O' && m3 == 'O' && b3 == 'O' || t1 == 'O' && m2 == 'O' && b3 == 'O' || t3 == 'O' && m2 == 'O' && b1 == 'O')
    {
        game_on = false;
        winner_found = true;
        std::cout << "O wins!" << std::endl;
    }
    else if (tt1 == true && tt2 == true && tt3 == true && mm1 == true && mm2 == true && mm3 == true && bb1 == true && bb2 == true && bb3 == true && winner_found == false)
    {
        game_on = true;
        std::cout << "Tie" << std::endl;
        tt1 = tt2 = tt3 = mm1 = mm2 = mm3 = bb1 = bb2 = bb3 = false;
        t1 = t2 = t3 = m1 = m2 = m3 = b1 = b2 = b3 = ' ';
        print_board(t1, t2, t3, m1, m2, m3, b1, b2, b3);
    }
}

int main()
{
    initialize_board();
    char turn = 'X';
    int play;
    char play_again;
    std::cout << "Tic Tac Toe" << std::endl;
    std::cout << "\x1B[32m1 | 2 | 3\033[0m" << std::endl;
    std::cout << "\x1B[32m---------\033[0m" << std::endl;
    std::cout << "\x1B[32m4 | 5 | 6\033[0m" << std::endl;
    std::cout << "\x1B[32m---------\033[0m" << std::endl;
    std::cout << "\x1B[32m7 | 8 | 9\033[0m" << std::endl;

    while (game_on)
    {
        if (turn == 'X')
        {
            std::cout << "X's turn: ";
            std::cin >> play;
            if (play == 1)
            {
                if (t1 == 'X' || t1 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    t1 = 'X';
                    tt1 = true;
                    turn = 'O';
                }
            }
            else if (play == 2)
            {
                if (t2 == 'X' || t2 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    t2 = 'X';
                    tt2 = true;
                    turn = 'O';
                }
            }
            else if (play == 3)
            {
                if (t3 == 'X' || t3 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    t3 = 'X';
                    tt3 = true;
                    turn = 'O';
                }
            }
            else if (play == 4)
            {
                if (m1 == 'X' || m1 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    m1 = 'X';
                    mm1 = true;
                    turn = 'O';
                }
            }
            else if (play == 5)
            {
                if (m2 == 'X' || m2 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    m2 = 'X';
                    mm2 = true;
                    turn = 'O';
                }
            }
            else if (play == 6)
            {
                if (m3 == 'X' || m3 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    m3 = 'X';
                    mm3 = true;
                    turn = 'O';
                }
            }
            else if (play == 7)
            {
                if (b1 == 'X' || b1 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    b1 = 'X';
                    bb1 = true;
                    turn = 'O';
                }
            }
            else if (play == 8)
            {
                if (b2 == 'X' || b2 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    b2 = 'X';
                    bb2 = true;
                    turn = 'O';
                }
            }
            else if (play == 9)
            {
                if (b3 == 'X' || b3 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    b3 = 'X';
                    bb3 = true;
                    turn = 'O';
                }
            }
            else
            {
                std::cout << "Invalid move" << std::endl;
            }
        }
        else if (turn == 'O')
        {
            std::cout << "O's turn: ";
            std::cin >> play;
            if (play == 1)
            {
                if (t1 == 'X' || t1 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    t1 = 'O';
                    tt1 = true;
                    turn = 'X';
                }
            }
            else if (play == 2)
            {
                if (t2 == 'X' || t2 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    t2 = 'O';
                    tt2 = true;
                    turn = 'X';
                }
            }
            else if (play == 3)
            {
                if (t3 == 'X' || t3 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    t3 = 'O';
                    tt3 = true;
                    turn = 'X';
                }
            }
            else if (play == 4)
            {
                if (m1 == 'X' || m1 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    m1 = 'O';
                    mm1 = true;
                    turn = 'X';
                }
            }
            else if (play == 5)
            {
                if (m2 == 'X' || m2 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    m2 = 'O';
                    mm2 = true;
                    turn = 'X';
                }
            }
            else if (play == 6)
            {
                if (m3 == 'X' || m3 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    m3 = 'O';
                    mm3 = true;
                    turn = 'X';
                }
            }
            else if (play == 7)
            {
                if (b1 == 'X' || b1 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    b1 = 'O';
                    bb1 = true;
                    turn = 'X';
                }
            }
            else if (play == 8)
            {
                if (b2 == 'X' || b2 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    b2 = 'O';
                    bb2 = true;
                    turn = 'X';
                }
            }
            else if (play == 9)
            {
                if (b3 == 'X' || b3 == 'O')
                {
                    std::cout << "\x1B[31mSpot already taken\033[0m" << std::endl;
                }
                else
                {
                    b3 = 'O';
                    bb3 = true;
                    turn = 'X';
                }
            }
            else
            {
                std::cout << "Invalid move" << std::endl;
                game_on = false;
            }
        }
        system("CLS");
        print_board(t1, t2, t3, m1, m2, m3, b1, b2, b3);
        check_win(t1, t2, t3, m1, m2, m3, b1, b2, b3);
    }

    std::cout << "Play again? (y/n): ";
    std::cin >> play_again;
    if (play_again == 'y' || play_again == 'Y')
    {
        main();
    }
    else if (play_again == 'n' || play_again == 'N')
    {
        std::cout << "Goodbye!" << std::endl;
        throw;
    }
    else
    {
        std::cout << "Invalid input, exiting the game." << std::endl;
        system("pause");
    }

    return 0;
}
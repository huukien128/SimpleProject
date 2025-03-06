#include <iostream>

using namespace std;

int N;
int check(int i, int j);
void KnightsTour(int step, int i, int j, int** board, int* I, int* J, bool& Valid);
void ShowResult(int** board);

int main()
{
    cout << "Nhap kich thuoc N cua ban co (N >= 1): ";
    cin >> N;

    int** board = new int*[N];
    for(int i = 0; i < N; i++)
    {
        board[i] = new int[N];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            board[i][j] = 0;
        }
    }

    int i, j;
    cout << "Nhap vi tri cua quan ma (0 -> N-1): " << endl;
    cin >> i >> j;
    cout << endl;

    if(i < 0 || i >= N || j < 0 || j >= N || N < 1)
    {
        cout << "Vi tri khong hop le!" << endl;
        for(int i = 0; i < N; i++)
        {
            delete[] board[i];
        }
        delete[] board;
        return 0;
    }

    int I[8] = {-1, -2, -2, -1,  1,  2, 2, 1};
    int J[8] = {2,   1, -1, -2, -2, -1, 1, 2};

    bool Valid = 0;
    board[i][j] = 1;
    KnightsTour(1, i, j, board, I, J, Valid);

    if(Valid == true)
        ShowResult(board);
    else
        cout << endl << "Khong co loi giai!" << endl;

    for(int i = 0; i < N; i++)
    {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}

int check(int i, int j)
{
    return (i >= 0 && j >= 0 && i < N && j < N);
}

void KnightsTour(int step, int i, int j, int** board, int* I, int* J, bool& Valid)
{
    for(int m = 0; m < 8; m++)
    {
        int inext = i + I[m];
        int jnext = j + J[m];
        if(check(inext, jnext) && board[inext][jnext] == 0)
        {
            board[inext][jnext] = step + 1;
            if(step == N * N - 1)
                Valid = true;
            else
            {
                KnightsTour(step + 1, inext, jnext, board, I, J, Valid);
                if(Valid == false)
                    board[inext][jnext] = 0;
            }
        }
    }
}

void ShowResult(int** board)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl << endl;
    }
}

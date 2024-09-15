#include<bits/stdc++.h>
using namespace std;

void swapColumn(vector <vector<char> >&, int);
void swapRow(vector <vector<char> >&, int);

int MatrixBorder(string strArr[], int size) 
{
    vector < vector <char> > matrix;
    int swapCount = 0;

    for (int x = 0; x < size; x++)
    {
        vector <char> temp;

        for (int y = 0; y < strArr[x].length(); y++)
        {
            if (strArr[x][y] == '1' || strArr[x][y] == '0')
            {
                temp.push_back(strArr[x][y]);
            }    
        }

        matrix.push_back(temp);
    }

    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix[row].size(); col++)
        {
            if (row == 0 || row == matrix.size() - 1 || col == 0 || col == matrix[row].size()-1)
            {
                if (matrix[row][col] == '0')
                {
                    if (col == 0 || col == matrix[row].size() - 1)
                    {
                        swapColumn(matrix, col);
                        swapCount++;
                    }
                    else if (row == 0 || row == matrix.size()-1)
                    {
                        swapRow(matrix, row);
                        swapCount++;
                    }
                }
            }
        }
    }

    return swapCount;
}

void swapColumn(vector <vector<char> >& matrix, int col)
{
    for (int y = 0; y < matrix[0].size(); y++)
    {
        if (y == col || y == 0 ||  y == matrix[0].size()-1)
        {
            continue;
        }
        else
        {
            bool valid = true;

            for (int row = 0; row < matrix.size(); row++)
            {
                if (matrix[row][y] == '0')
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
            {
                char temp;

                for (int x = 0; x < matrix.size(); x++)
                {
                    temp = matrix[x][col];
                    matrix[x][col] = matrix[x][y];
                    matrix[x][y] = temp;
                }

                return;
            }
        }
    }
}

void swapRow(vector <vector<char> >& matrix, int row)
{
    for (int x = 0; x < matrix.size(); x++)
    {
        if (x == row ||  x== 0 || x == matrix.size()-1)
        {
            continue;
        }
        else
        {
            bool valid = true;

            for (int col = 0; col < matrix[x].size(); col++)
            {
                if (matrix[x][col] == '0')
                {
                    valid = false;
                    break;
                }
            }

            if (valid)
            {
                char temp;

                for (int y = 0; y < matrix.size(); y++)
                {
                    temp = matrix[row][y];
                    matrix[row][y] = matrix[x][y];
                    matrix[x][y] = temp;
                }

                return;
            }
        }
    }
}

int main() 
{
    string A[] = { "(0,1,1)", "(1,1,1)", "(1,1,1)" };
    string B[] = { "(0,1,0,1)", "(1,1,1,1)", "(0,1,0,1)", "(1,1,1,1)" };

    cout << MatrixBorder(A, sizeof(A) / sizeof(A[0])) << endl; // 2
    cout << MatrixBorder(B, sizeof(B) / sizeof(B[0])) << endl; // 2
    return 0;
}
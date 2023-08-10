// Q: Solve n equations using Gauss-Jordan Method
#include<bits/stdc++.h>
using namespace std;
double mat[10][10];
void gauss_jordan(int n)
{
    for(int i = 0; i < n; i++)
    {
        int pivot = i;
        for(int j = i+1; j < n; j++)
        {
            if (fabs(mat[j][i]) > fabs(mat[pivot][i]))
                pivot = j;
        }    
        if(fabs(mat[pivot][i]) == 0) continue;
        if(pivot != i)
        {
            for (int j = i; j <= n; j++)
                swap(mat[pivot][j], mat[i][j]);
        }
        double x = mat[i][i];
        for(int j = 0; j <= n; j++)
            mat[i][j] /= x;
        for(int j = 0; j < n; j++)
        {
            if (j != i)
            {
                double factor = mat[j][i] / mat[i][i];
                for (int k = i; k <= n; k++)
                    mat[j][k] -= factor * mat[i][k];
            }
        }    
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j <= n; j++)
            cin >> mat[i][j];
    gauss_jordan(n); // converting the matrix into a unit matrix or identity matrix
    for (int i = 0; i < n; i++)
    {
        cout << "root" <<i+1 <<" = ";
        cout << mat[i][n];
        cout << endl;
    } 
    return 0;
}
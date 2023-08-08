// Q: How many numbers are in 1 to 100 which divides by the given numbers.
// formula is, Count = (numbers divides by one number)-(numbers divides by two numbers)
//                    +(numbers divides by three numbers)-(numbers divides by four numbers).....
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> permutaion; 
void generatePermutaion(int i, int n, int arr[], vector<int> v)
{
    if(i == n) return;
    generatePermutaion(i + 1, n, arr, v);
    v.push_back(arr[i]);
    generatePermutaion(i + 1, n, arr, v);
    permutaion.push_back(v);
    v.pop_back();
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int> v;
    generatePermutaion(0, n, arr, v);
    int count = 0;
    for(int i = 0; i < permutaion.size(); i++)
    {
        int temp = 1;
        for(int j = 0; j < permutaion[i].size(); j++)
            temp *= permutaion[i][j];
        if(permutaion[i].size() %2 == 1)
            count += 100/temp;
        else
            count -= 100/temp;
    }
    cout << count << endl;
    return 0;
}
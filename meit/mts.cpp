#include<iostream>
using namespace std;
void ro()
{
    int n;
    cin >> n;
    //int* dist2 = new int[n][n];
    //int* point = new int[n][2];
    //int* dist2 = (int*)malloc(n*n*sizeof(int));
    //int* point = (int*)malloc(n*2*sizeof(int));
    long long point[n][2];
    long long dist2[n][n];
    for(int i=0;i<n;i++)
    {
        cin >> point[i][0] >> point[i][1];
        for(int j=0;j<i;j++)
        {
            dist2[i][j] = (point[i][0]-point[j][0])*(point[i][0]-point[j][0])
                            +(point[i][1]-point[j][1])*(point[i][1]-point[j][1]);
            dist2[j][i] = dist2[i][j];
        }
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            count = 0;
            for(int k=0;k<n;k++)
            {
                if(i==j || i==k || j==k)
                    continue;
                if(dist2[i][j] >= dist2[i][k])
                    count++;
            }
            cout << count << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ro();

    }
    return 0;
}
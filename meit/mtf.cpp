#include<iostream>
#include<vector>
using namespace std;
void clean()
{
    int n,m;
    int a;
    vector<int> v;
    vector<int> vmax;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        v.push_back(a);

        
    }
    vmax = v;
    vmax.resize(n-m);
    int vmax_min_index = 0;
    for(int j=1;j<vmax.size();j++)
    {
        if(vmax[j] < vmax[vmax_min_index])
        {
            vmax_min_index = j;
        }
    }

    for(int i=n-m;i<n;i++)
    {
        if(v[i] >= vmax[vmax_min_index])
        {
            vmax.erase(vmax.begin() + vmax_min_index);
            vmax.push_back(v[i]);
            vmax_min_index = 0;
            for(int j=1;j<vmax.size();j++)
            {
                if(vmax[j] > vmax[vmax_min_index])
                {
                    vmax_min_index = j;
                }
            }
        }
        // min = v[0];
        // min_index = 0;
        // for(int j=1;j<v.size();j++)
        // {
        //     if(v[j] < min)
        //     {
        //         min = v[j];
        //         min_index = j;
        //     }
        // }
        // v.erase(v.begin() + min_index);
    }
    for(int i=0;i<vmax.size();i++)
    {
        cout << vmax[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        clean();
    }
    return 0;
}
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
struct node{
    int a;
    int b;
};
int main(){
    int v1,v2,a,b;
    int n;
    cin>>n;
    unordered_map<int,int> t1,t2;
    t1[1] = 1;
    vector<node> v;
    for(int i=0;i<n;i++){
        
        cin>>v1>>v2;
        v.push_back({v1,v2});
    }
    while(v.size()>0){
        for(int i=0;i<v.size();i++){
            a = v[i].a;
            b = v[i].b;
            if(t1.find(a) != t1.end()){
                t2[b] = t1[a]+1;
                v.erase(v.begin()+i);
            }
            else if(t2.find(a) != t2.end()){
                t1[b] = t2[a]+1;
                v.erase(v.begin()+i);
            }
            else if(t1.find(b) != t1.end()){
                t2[a] = t1[b]+1;
                v.erase(v.begin()+i);
            }
            else if(t2.find(b) != t2.end()){
                t1[a] = t2[b]+1;
                v.erase(v.begin()+i);
            }
        }
    }
    vector<int> n1,n2;
    for(int i=1;i<=n;i++){
        cin>>a;
        n1
    }


    return 0;

}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n,maxhistory;
    string s;
    cin>>n>>maxhistory;
    vector<string> history;
    vector<string> forward;
    int nowhere = 0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0] == 'v'){ //visit
            
            cin>>s;
            
            if(history.size()<=maxhistory)
                history.push_back(s);
            else{
                history.erase(history.begin());
                history.push_back(s);
            }
            nowhere = history.size();
            forward.clear();
        }
        else if(s[0] == 'b'){ //back
            if(nowhere > 1){
                forward.push_back(history[nowhere-1]);
                nowhere--;
            }
        }
        else if(s[0] == 'f'){ //forward
            if(forward.size()>0){
                //history.push_back(forward.back());
                if(history.size()<=maxhistory)
                {
                    history.push_back(forward.back());
                    nowhere = history.size();
                }
                    
                else
                {
                    history.erase(history.begin());
                    history.push_back(forward.back());
                }
                forward.pop_back();
                
            }
        }
        else if(s[0] == 'p'){ //print
            if(nowhere > 0 && nowhere <= history.size()) {
                cout << history[nowhere-1] << endl;
            }
            else {
                cout << "Blank" << endl;
            }
        }
    }
    return 0;       
    
}
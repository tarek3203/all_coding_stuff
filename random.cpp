#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second > b.second;
}
void sort(map<string, int>& M)
{
  
    vector<pair<string, int> > A;
    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);

    /* for (auto& it : A) {
        cout << it.first << ' '
             << it.second << endl;
    } */
    
    cout<<"O My Goodness, don't worry I think you will the next lover by shuffler\n";
    cout<<"here the winner's name is "<<A[0].first<<endl<<"and also his score is "<<A[0].second<<endl;
    cout<<"thanks everyone";
}
int main()
{
    int n,m;
    cout<<"hey, what's up buddies?\n"<<"please select the number of people whose you would like to shuffle\n";
    cin>>n;
    cout<<"how many times do you wanna to shuffle them, please selct the number\n";
    cin>>m;
	srand(unsigned(time(0)));
	vector<string> v;

	for (int j = 0; j < n; ++j){
        string s;
        cin>>s;
        v.push_back(s);
    }
	map<string,int>cnt;
	for(int i=0;i<m;i++){
        random_shuffle(v.begin(), v.end());
        cnt[v[0]]++;
    }
    sort(cnt);	
	return 0;
}

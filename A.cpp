#include<bits/stdc++.h>

using namespace std;
#define w(x)            int x; cin>>x; while(x--)
#define mp make_pair
#define INT_BITS 64
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pb push_back
//#define int long long int
#define endl '\n'
#define float long doublea
#define ff              first
#define ss              second
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pq            priority_queue<int>
#define pqi            priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define all(a)      (a).begin(),(a).end()
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PI 3.14159265358979323844
#define DECIMAL(n)  std::cout << std::fixed;std::cout << std::setprecision(n); 

int main()
{
    string str;
    getline(cin,str);
    int l=str.size();
    cout<<str<<endl;
    string temp;
    string ans;
    int t=0;
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ' and temp.empty()==false)
        {
            t++;
            if(t==1)
            {
               ans=temp+ans;
                temp.clear();
               cout<<ans<<"----"<<endl;
            }
            else{
            ans=temp+"&"+ans;
            temp.clear();
            cout<<ans<<"----"<<endl;
               }

        }
        else if(!isspace(str[i])){
            temp=temp+str[i];
            cout<<temp<<endl;
        }
       
        
    }
    if(temp.empty()==false and t!=0)
    {
        ans=temp+"&"+ans;
    }
    if(t==0)
    {
        ans=temp;
    }
    cout<<ans<<endl;
 }







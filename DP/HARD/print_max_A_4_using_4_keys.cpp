#include<iostream>
#include<iomanip>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
#define X first
#define Y second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define mod 1000000007
//#define max 100007
#define itr ::iterator it
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))[i]
#define repp(X,a,Y) for (int (X) = a;(X) < (Y);++(X))
#define set(a, b) memset(a, b, sizeof(a));
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<vd> vvd;
typedef vector<pii> vii;
typedef vector<string> vs;
#define endl '\n'
int findoptimal(int n)
{
  if(n<=6)
    return n;
  int screen[n];
  for(int i=1;i<=6;i++)
    screen[i-1]=i;
  for (int i = 7; i <=n; i++)
  {
    screen[i-1]=0;
    for (int b = i-3; b>=1; b--)
    {
      int curr=(i-b-1)*screen[b-1];
      if(curr>screen[i-1])
      screen[i-1]=curr;
    }
  }
  return screen[n-1];
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  for (int N=1; N<=20; N++)
  cout<<"Maximum Number of A's with " <<N<<" keystrokes is :" <<findoptimal(N)<<endl;
  return 0;
}
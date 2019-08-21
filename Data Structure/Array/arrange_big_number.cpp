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
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
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
int mycompare(string x,string y)
{
  string xy=x.append(y);
  string yx=y.append(x);
  return xy.compare(yx)>0?1:0;
}
void printLargest(vector<string> arr)
{
  sort(arr.begin(),arr.end(),mycompare);
  for (int i = 0; i < arr.size(); i++)
    cout<<arr[i];
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  vector<string> arr;
  arr.push_back("54");
  arr.push_back("546");
  arr.push_back("548");
  arr.push_back("60");
  printLargest(arr);
  cout<<endl;
  return 0;
}

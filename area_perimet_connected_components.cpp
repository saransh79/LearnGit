/*
We have  a grid of size N x N. Each cell is either empty (.) or occupied (#). 
Size of each cell is 1 x 1. In the connected component, you can reach any cell from every 
other cell in the component by repeatedly stepping to adjacent cells in the north, south, east, and west directions. 
Your task is to find the area and perimeter of the connected component having the largest area.
 The area of a connected component is just the number of '#' characters that are part of it. 
 If multiple connected components tie for the largest area, find the smallest perimeter among them.


example
i/p
6
##....
....#.
.#..#.
.#####
...###
....##


o/p
13 22
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; //g++ ll.cpp -o ll.exe
typedef long double ld;
typedef pair < int, int > iii; //all elements to 0
const ll mod = 1e9 + 7;



ll n;
vector < string > v;
vector < vector < int >> vis;
ll ta, tp;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int check(int x, int y) {
  if (x >= 0 && x < n && y >= 0 && y < n) {
    if (v[x][y] == '#')
      return (1);

  }
  tp++;

  return 0;
}

void dfs(int i, int j) {

  vis[i][j] = 1;
  for (int k = 0; k < 4; k++) {
    int ndx = i + dx[k];
    int ndy = j + dy[k];

    if (check(ndx, ndy) && vis[ndx][ndy] == 0) {

      dfs(ndx, ndy);
      ta++;

    }

  }

}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  cin >> n;
  v.resize(n + 1);
  vis.assign(n + 1, vector < int > (n + 1, 0));

  vector < pair < int, int >> s;

  ll are = 1, per = 4;

  ta = 0;
  tp = 0;
  string st;
  for (int i = 0; i < n; i++) {
    cin >> st;
    v[i] = st;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!vis[i][j] && v[i][j] == '#') {

        ta = 1;
        tp = 0;
        dfs(i, j);

        if (ta == are)
          per = min(per, tp);
        else if (ta > are) {
          are = ta;
          per = tp;
        }

        //s.push_back({ta,tp});
      }
    }
  }

  cout << are << " " << per;

  return 0;
}

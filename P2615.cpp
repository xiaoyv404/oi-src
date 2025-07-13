#include <iostream>

int a[40][40];
uint n;

int main(){
  std::cin >> n;

  uint pev_x=0, pev_y=n/2;
  a[pev_x][pev_y]=1;
  for(size_t i=2; i <= n*n; i++){
    if(pev_x==0&&pev_y!=n-1){
      pev_x = n-1;
      pev_y++;
      a[pev_x][pev_y] = i;
      continue;
    }
    if (pev_y==n-1&&pev_x!=0){
      pev_y = 0;
      pev_x--;
      a[pev_x][pev_y] = i;
      continue;
    }
    if (pev_x==0&&pev_y==n-1){
      pev_x = 1;
      a[pev_x][pev_y] = i;
      continue;
    }
    if (pev_x!=0&&pev_y!=n-1){
      int& c = a[pev_x-1][pev_y+1];
      if (c == 0){
        c = i;
        pev_x--;
        pev_y++;
        continue;
      }else{
        a[pev_x+1][pev_y]=i;
        pev_x++;
        continue;
      }
    }
  }
  for (size_t x = 0; x < n; x++){
    for(size_t y = 0; y < n; y++){
      std::cout << a[x][y];
      if (y==n-1){
        std::cout << '\n';
      }else{
        std::cout << ' ';
      }
    }
  }
  return 0;
}

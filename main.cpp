#include <iostream>

using namespace std;

int sum(int n){

  int s = 0;
  for(int i = 0;i<=n;i++)
    s += i;

  return s;
}

int prod(int n){
  int p = 1;
  for(int i=1;i<=n;i++)
    p=p*i;

  return p;
}

int main(){
  int n;
  cout << "Give a number: " << endl;

  cin >> n;
  cout << sum(n) << endl;
  cout << prod(n) << endl;
}



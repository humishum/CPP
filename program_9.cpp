// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_9
#include<iostream>

using namespace std;
int main(){

int n;
cout<<"Enter the length of the diamond side: "<<endl;
cin>>n;
cout<<endl;
//top half
  for(int i=1;i<=n;i++){
    cout<<"  ";
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
  }
  cout<<endl;
}
//bottom half
for(int x=1;x<=n;x++){
  cout<<"  ";
  for(int y=1;y<=x;y++){
    cout<<" ";
  }
  for(int y=1;y<=(n-x)*2-1;y++){
    cout<<"*";
}
cout<<endl;
}

return 0;

}

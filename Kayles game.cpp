#include <iostream>

using namespace std;
// Make list with the length of the number 
void printnum(int x,int num[]){
    cout<<"Numbers are : ";
for(int i=0; i<x; ++i){
    cout<<num[i]<<" ";
}
}
int main()
{ 
// input the number which will be the length of the list  
   cout<<"Enter arbitrary number"<<endl;
   int x;
   cin>>x;
   int num[x];
   int z=1;
   for(int i=0;  i<=x; ++i){
        num[i]=z%10;
        z++;
   }
// Get player's input whether if it's 1 or 2 inputs
  printnum(x,num);
  int player=1;
  while (true){
  cout<<"Player"<<" "<<player<<" "<<"How many numbers to remove 1 or 2? "<<endl;
  
// Checking if the input is valid 
  int n;
  while(true){
  cin>>n;
  if(n==1 || n==2){
     break;
  }
  else{
    cout<<"Numbers should be 1 or 2"<<endl;
  }
  }

  if(n==1){
    cout<<"Player"<<player<<" : "<<endl;
    int p1;
    cin>>p1;
    num[p1-1]=-1;
    printnum(x,num);
  }
  
// Checking if the inputed 2 numbers are adjacent 
  else if (n==2){
    cout<<"Player"<<player<<" : "<<endl;
    int n1;
    int n2;
    while (true){
        cin>>n1;
        cin>>n2;
        if(n1-n2==1 || n1-n2==-1){
            break;
        }
        else{
            cout<<"Numbers are not adjacent"<<endl;
        }
    }
   num[n1-1]=-1;
   num[n2-1]=-1;
   printnum(x,num);
  }
  bool check=true;
  for(int i=0; i<x; ++i){
    if(num[i]==-1){
        check=true;
    }
    else{
        check=false;
    }
    }
 // Checking if there is a winner
        if (check==true){
        cout<<"Player"<<player<<"wins!"<<endl;
        break;
  }
if(player==1){
    player=2;
}
else if(player==2){
    player=1;
}

}
  }


#include <iostream>

int GCF(int a,int b);
int MAX(int a,int b);
using namespace std;
int main(){
cout<<"\r\nEnter 2 numbers\r\n>";
int n1,n2=0;
cin>>n1;
cin>>n2;
int gcf = GCF(n1,n2);
cout<<"\r\nYour GCF is:";
cout<<gcf;
return 0;
}

int GCF(int a,int b){
int m = MAX(a,b);
int GCF=1;
for(int i = 1;i<=m;i++){
    if(a%i==0 && b%i==0){
        GCF=i;
    }
}
return GCF;
}

int MAX(int a,int b){
if(a>b){
    return a;
}else{
    return b;
}
return a;
}

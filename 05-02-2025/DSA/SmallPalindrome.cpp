#include <bits/stdc++.h>
using namespace std;
string solve(int X,int Y){
    string num="";
    for(int i=0;i<X/2;i++){
        num=num+"1";
    }
    for(int i=0;i<Y;i++){
        num=num+"2";
    }
    for(int i=0;i<X/2;i++){
        num=num+"1";
    }
    return num;
}
int main() {
	int T,X,Y;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>X>>Y;
	    cout<<solve(X,Y)<<endl;
	}
	return 0;

}

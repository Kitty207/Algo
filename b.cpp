
#include <iostream>
using namespace std;

int main() {
	int n,f=0,digit,count=0,c=0;
	cin>>n;
	for(int i=1; i<=1000; i++){
	    int p=i,g=i;
	    while(p>0){
	        p=p/10;
	        c++;
	    }
	    while(g>0){
	        digit=g%10;
	        if((digit==4)||(digit==7)){
	            g=g/10;
	            count++;
	        }
	        else{
	            break;
	        }
	    }
	    if(c==count){
            if(n%i==0){
                f=1;
                break;
            }
        }
	}
	if(f==1){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}


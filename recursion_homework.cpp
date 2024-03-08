// problem 1

#include <iostream>
using namespace std;



int lenght(int n){

	if(n==1){
		return 1;
	}
	if(n%2==0){
		return 1+lenght(n/2);

	}
	else {
		return 1+lenght(3*n+1);
	}

}

int main() {

	int x = lenght(6);
	cout<<x;




}

// problem2

#include <iostream>
using namespace std;



int power(int a , int b){
	if(b==0){
		return 1;
	}
	return a * power(a,b-1);

}



int main() {

	int x = power(7,3);
	cout<<x;



}

//problem3
#include <climits>
#include <iostream>
using namespace std;

int n,a[100];


int max( int index){

	    if (index == n - 1) {
	        return a[index];
	    }

	    int max_rest = max(index +1);


	    return (a[index] > max_rest) ? a[index] : max_rest;

}



int main() {


	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
int x = max(0);
cout<<x;


}
//problem4
#include <climits>
#include <iostream>
using namespace std;

int n;
int a[100];
int sum(int index){

	if(index==n){
		return 0;
	}
	return a[index]+sum(index+1);
}



int main() {
	cin>>n;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}

int x= sum(0);
cout<<x;


}



//problem5

#include <climits>
#include <iostream>
using namespace std;

int n;
int a[100];
double sum(int index){

	if(index==n){
		return 0;
	}
	return a[index]+sum(index+1);
}



int main() {
	cin>>n;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}

double x= sum(0)/n;

cout<<x;


}
//problem 6

#include <climits>
#include <iostream>
using namespace std;
int a[100],n;
void f(int index){
if (index==n){
	return;
}
f(index+1);

	 a[index]+= index;
}

int main() {
	cin>>n;
			for(int i =0;i<n;i++){
				cin>>a[i];
}
			f(0);

			   for (int i = 0; i < n; i++) {
			        cout << a[i] << " ";
			    }
}


// problem 7
#include <climits>
#include <iostream>
using namespace std;
int a[100],n;
void f(int index){
if (index==n){
	return;
}
f(index+1);
for(int i =0;i <index;i++){
	 a[index]+= a[i];
}
}
int main() {
	cin>>n;
			for(int i =0;i<n;i++){
				cin>>a[i];
}
			f(0);

			   for (int i = 0; i < n; i++) {
			        cout << a[i] << " ";
			    }
}

//problem 8
#include <climits>
#include <iostream>
using namespace std;
int a[100],n;
void f(int index){
if (index==n){
	return;
}
f(index+1);

for(int i =index+1;i <n;i++){
	 if(a[index]>a[i]){
		 a[i]=a[index];
	 }
}
}

int main() {
	cin>>n;
			for(int i =0;i<n;i++){
				cin>>a[i];
}
			f(0);

			   for (int i = 0; i < n; i++) {
			        cout << a[i] << " ";
			    }
}


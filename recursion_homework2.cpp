// problem 9
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
	 if(a[index]<a[i]){
		 a[index]=a[i];
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

//problem 11
#include <climits>
#include <iostream>
using namespace std;

int a[100], n, N;

int f(int index, int N) {

    if (N == 0) {
        return 0;
    }


    if (index == n) {
        return 0;
    }


    return  a[index] + f(index + 1, N - 1);

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> N;


      cout << f(0, N);


    return 0;
}
// problem 10

#include <climits>
#include <iostream>
using namespace std;

int a[100], n, N;

int f(int index, int N) {

    if (N == 0) {
        return 0;
    }


    if (index == n) {
        return 0;
    }


    return  a[index] + f(index -1, N - 1);

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> N;


      cout << f(n-1, N);


    return 0;
}

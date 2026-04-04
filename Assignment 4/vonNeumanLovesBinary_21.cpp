// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0 ; i<n ; i++){
//         int decimal = 0;
//         int base = 1;
//         while(arr[i]>0){
//             int x = arr[i]%10;   //return last digit
//             decimal = decimal + x*base;
//             base*=2;
//             arr[i]/=10;
//         }
//         cout<<decimal<<" ";
//     }

//     return 0;
// }


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	while(n--){
		string binary;
		cin>>binary;

		int dec = 0 , power = 0;
		for(int i=binary.length()-1 ; i>=0; i--){
			if(binary[i]=='1'){
				dec += pow(2,power);
			}
			power++;
		}
		cout<<dec<<endl;
	}


	return 0;
}
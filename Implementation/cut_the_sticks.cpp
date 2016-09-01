#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int j=0;
    vector <int> sticks(1000);
		for(int i = 0; i < n; i++) {
			int stickLen = arr[i];
			sticks[stickLen]++;
		}
    int remainingSticks=n;
    cout<<remainingSticks<<endl;
		for(int i = 0; i <sticks.size(); i++) {
			if(sticks[i] > 0) {
				remainingSticks -= sticks[i];
				if(remainingSticks == 0) {
					break;
				}
				cout<<remainingSticks<<endl;
			}
		}
    return 0;
}

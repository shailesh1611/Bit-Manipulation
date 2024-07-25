#include <bits/stdc++.h>
using namespace std;

void swapTwoNumber(int &a, int &b) {
	a = a^b;
	b = b^a;
	a = a^b;
}

bool checkKthBitSet(int n, int k) {
	/******* By left shift operator ********/
	if(n&(1<<k)) return true;
	return false;

	/******* By right shift operator *******/
	// if((n>>k)&1) return true;
	// return false;
}

void setKthBit(int &n, int k) {
	n = n | (1<<k);
}

void unsetKthBit(int &n, int k) {
	n = n & (~(1<<k));
}

void toggleKthBit(int &n, int k) {
	n = n ^ (1 << k);
}

void unsetRightMostSetBit(int &n) {
	n = n & (n-1);
}

bool checkIfPowerOfTwo(int n) {
	if((n & (n-1)) == 0) return true;
	return false;
}

int countNumberOfSetBits(int n) {
	/*********** Method 1 ************/

	// int cnt = 0;
	// for(int i=n; i>0; i=i>>1) {
	// 	cnt += (i&1);
	// }
	// return cnt;

	/************ Method 2 ***********/

	// int cnt = 0
	// while(n > 0) {
	// 	n = n & (n-1);
	// 	cnt++;
	// }
	// return cnt;

	/*********** Method 3 ***********/

	return __builtin_popcount(n);
}

int main() {
	int a,b;
	cin>>a>>b;

	// cout<<"Before Swapping : a = "<<a<<" b = "<<b<<endl;
	// swapTwoNumber(a,b);
	// cout<<"After Swapping : a = "<<a<<" b = "<<b<<endl;

	// if(checkKthBitSet(a,b)) cout<<"YES"<<endl;
	// else cout<<"NO"<<endl;

	// setKthBit(a,b);
	// cout<<a<<endl;

	// unsetKthBit(a,b);
	// cout<<a<<endl;

	// toggleKthBit(a,b);
	// cout<<a<<endl;

	// unsetRightMostSetBit(a);
	// cout<<a<<endl;

	// if(checkIfPowerOfTwo(a)) cout<<"YES"<<endl;
	// else cout<<"NO"<<endl;

	// cout<<"Number of Set Bits : "<<countNumberOfSetBits(a)<<endl;

}
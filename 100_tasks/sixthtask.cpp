#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
	int array[] = {a, b, c, d};
	sort(array, array + 4);
	return array[3];

}

int main() {
	int a, b, c, d;
	scanf(" %d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a,b , c, d);
	printf("%d", ans);
cout << " "<< endl;
	return 0;
}

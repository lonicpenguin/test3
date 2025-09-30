//#include<iostream>
//#include<chrono>
//using namespace std;
//long long calcu(int n, int k) {
//	if (n < k)return 0;
//	else if (n == k)return 1;
//	else if (k == 1)return 1;
//	else return calcu(n - 1, k - 1) + k * calcu(n - 1, k);
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cout.tie(0);
//
//	auto start = std::chrono::high_resolution_clock::now();
//
//	for (int i = 1; i <= 25; i++) {
//		for (int j = 1; j <= 25; j++) {
//			cout << calcu(j, i) << " ";
//		}
//		cout << endl;
//	}
//
//	auto end = std::chrono::high_resolution_clock::now();
//
//	auto duration = chrono::duration_cast<std::chrono::microseconds>(end - start);
//	cout << "ºÄÊ±" << duration.count() << "Î¢Ãë";
//
//	return 0;
//}
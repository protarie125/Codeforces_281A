#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string line;
	cin >> line;

	auto offset = 'A' - 'a';
	if ('a' <= line[0] && line[0] <= 'z') {
		line[0] += offset;
	}

	cout << line;

	return 0;
}
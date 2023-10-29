#include <iostream>

using namespace std;

int k = 0; // 테스트 케이스의 수

int c = 0; // 반복 횟수

int n = 0; // 자연수

int main()
{
	cin >> k; // k값을 입력
	for (int a = 0; a < k; a++)
	{
		cin >> c; // 반복 횟수 입력

		int answer = 0; //answer 값 초기화

		for (int b = 0; b < c; ++b)
		{
			cin >> n; // n값을 입력
			answer += n; //anwer에 n만큼의 값을 더하기
		}

		cout << answer << endl; // anwer값 출력
	}

}

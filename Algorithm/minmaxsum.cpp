#include "hackerrank.h"

std::vector<int> HackerRank::InterviewPreparation::MinMaxSum::GetInput() {
	std::vector<int> arr{ 5,5,5,5,5 };
	return arr;
}

void HackerRank::InterviewPreparation::MinMaxSum::Run() {
	auto arr = this->GetInput();

	// Solution
	int max = *std::max_element(arr.begin(), arr.end());
	int min = *std::min_element(arr.begin(), arr.end());
	long sum = 0;
	for (auto i : arr)
		sum += i;
	printf("%ld %ld", sum - max, sum - min);
}
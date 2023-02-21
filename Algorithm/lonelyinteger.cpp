#include "hackerrank.h"

static const int maxInput = 101;

std::vector<int> HackerRank::InterviewPreparation::LonelyInteger::GetInput() {
	return std::vector<int>{1, 2, 3, 4, 3, 2, 1};
}

void HackerRank::InterviewPreparation::LonelyInteger::Run() {
	auto a = this->GetInput();
	int count[maxInput] = { 0, };

	for (const auto& input : a)
		count[input]++;
	for (int i = 0; i < maxInput; i++)
		if (count[i] == 1)
			std::cout << i;
}
#include "hackerrank.h"

std::vector<int> HackerRank::InterviewPreparation::PlusMinus::GetInput()
{
	std::vector<int> sample{ 1,1,0,-1,-1 };
	return sample;
}

void HackerRank::InterviewPreparation::PlusMinus::Run()
{
	auto arr = this->GetInput();

	// Solution
	double positive = 0;
	double negative = 0;
	double zero = 0;

	for (auto iter : arr)
		if (iter > 0)
			positive += 1;
		else if (iter < 0)
			negative += 1;
		else
			zero += 1;

	printf("%.6f\n", positive / arr.size());
	printf("%.6f\n", negative / arr.size());
	printf("%.6f", zero / arr.size());
}
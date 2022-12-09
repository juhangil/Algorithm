#include "hackerrank.h"

std::vector<std::string> HackerRank::InterviewPreparation::SparseArrays::GetString() {
	return std::vector<std::string>{"ab", "ab", "abc"};
}

std::vector<std::string> HackerRank::InterviewPreparation::SparseArrays::GetQuery() {
	return std::vector<std::string>{"ab", "abc", "bc"};
}

std::vector<int> HackerRank::InterviewPreparation::SparseArrays::Run() {
	auto strings = this->GetString();
	auto queries = this->GetQuery();

	// Solution
	std::map<std::string, int> map;
	for (auto i : strings) {
		if (map.find(i) == map.end())
			map.insert({ i,0 });
		map[i]++;
	}

	std::vector<int> result;
	for (auto i : queries)
		if (map.find(i) == map.end())
			result.push_back(0);
		else
			result.push_back(map[i]);
	//for (auto i : result)
	//	Utility::Print(std::to_string(i));
	return result;
}
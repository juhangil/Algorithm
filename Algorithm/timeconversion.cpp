#include "hackerrank.h"

std::string HackerRank::InterviewPreparation::TimeConversion::GetInput() {
	return "12:45:54PM";
}

std::string HackerRank::InterviewPreparation::TimeConversion::Run() {
	auto s = this->GetInput();

	// Solution
	auto sub = s.substr(0, 8);
	auto day = s.substr(8, 2);

	std::stringstream timeStream(sub);
	std::vector<std::string> time;
	std::string temp;
	while (std::getline(timeStream, temp, ':'))
		time.push_back(temp);

	bool isTwelve = time[0].compare("12") == 0;
	bool isPm = day.compare("PM") == 0;
	if (isPm && !isTwelve)
		time[0] = std::to_string(std::stoi(time[0]) + 12);
	if (!isPm && isTwelve)
		time[0] = "00";

	std::stringstream result;
	result << time[0] << ":";
	result << time[1] << ":";
	result << time[2];
	std::cout << result.str();

	return result.str();
}
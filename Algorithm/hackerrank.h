#pragma once
#include "stdafx.h"

namespace HackerRank {

	template <typename T>
	class HackerrankSolution {
	public:
		virtual T Run() = 0;
	};

	namespace InterviewPreparation {
		class PlusMinus : HackerrankSolution<void> {
		private:
			std::vector<int> GetInput();

		public:
			void Run() override;
		};

		class MinMaxSum : HackerrankSolution<void> {
		private:
			std::vector<int> GetInput();
		public:
			void Run() override;
		};

		class TimeConversion : HackerrankSolution<std::string> {
		private:
			std::string GetInput();
		public:
			std::string Run() override;
		};

		class SparseArrays : HackerrankSolution<std::vector<int>> {
		private:
			std::vector<std::string> GetString();
			std::vector<std::string> GetQuery();
		public:
			std::vector<int> Run() override;
		};

		class LonelyInteger : HackerrankSolution<void> {
		private:
			std::vector<int> GetInput();
		public:
			void Run() override;
		};
	}
}
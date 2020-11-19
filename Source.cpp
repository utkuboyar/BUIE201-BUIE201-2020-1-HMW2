#include <iostream>
#include <vector>
#include <set>
#include <chrono>

using namespace std;

void TestVectorSet(int sz, int ValueToFind)
{
	// measure 
	vector<int> largev;
	largev.reserve(sz);
	for (int i = 0; i < sz; i++)
	{
		largev.push_back(i);
	}

	// measure FindSimpleWithRangeForLoop(largev, ValueToFind);
	// measure FindBinarySearch(largev, largev.size() - 1, 0, ValueToFind);

	// measure 
	set<int> IntSet;
	for (int i = 0; i < sz; i++)
	{
		IntSet.emplace(i);
	}

	// measure IntSet.find(ValueToFind);
}

void main()
{
}
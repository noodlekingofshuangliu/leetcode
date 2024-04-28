#include <cstdio>
#include <unistd.h>
#include <string>
#include <unordered_set>
int lengthOfLongestSubstring(std::string s);
int main(){
	std::string s = "pwwkew";
	int c = lengthOfLongestSubstring(s);
}


int lengthOfLongestSubstring(std::string s) {
	int head = 0;
	int right = 0;
	int max = 0;
	std::unordered_set<char> window;
	for(head = 0; head < s.length(); head++)
	{
		if(head != 0)
		{
		window.erase(s[head] - 1);
		}
		while(right < s.length() && (!window.count(s[right])))
		{
			window.insert(s[right]);
			right++;
		}
		max = std::max(max, (int)window.size());
	}

	return max;
}

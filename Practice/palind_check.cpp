#include <iostream>
#include <string>
#include <unordered_set>
#include <list>
using namespace std;

// expand in both directions of low and high to find all palindromes
void expand(string str, int low, int high, auto &set, list <int> lst, list <int> lst2)
{
    // run till str[low.high] is a palindrome
    while (low >= 0 && high < str.length()
            && str[low] == str[high])
    {
        // push all palindromes into the set
        set.insert(str.substr(low, high - low + 1));
        lst.push_back(low);
        lst2.push_back(high - low + 1);

        // expand in both directions
        low--, high++;
    }
}

// Function to find all unique palindromic substrings of given string
void allPalindromicSubstrings(string str)
{
    // create an empty set to store all unique palindromic substrings
    unordered_set<string> set;
    list <int> lst1;
    list <int> lst2;
    for (int i = 0; i < str.length(); i++)
    {
        // find all odd length palindrome with str[i] as mid point
        expand(str, i, i, set, lst1, lst2);

        // find all even length palindrome with str[i] and str[i+1] as
        // its mid points
        expand(str, i, i + 1, set, lst1, lst2);
    }

    // print all unique palindromic substrings
    for (auto i : set){
        cout << i << " ";}
    list <int> :: iterator it;
    for(it = lst1.begin(); it != lst1.end(); ++it)
        {cout << '\t' << *it; }
    cout << '\n';
    for(it = lst2.begin(); it != lst2.end(); ++it)
        {cout << '\t' << *it; }
    cout << '\n';
}

int main()
{
    string str = "google";

    allPalindromicSubstrings(str);

    return 0;
}

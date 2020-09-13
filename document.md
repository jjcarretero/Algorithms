## Two sum
([C](./C/ft_twosum.c)   /   [C#](./Cs/twosum.cs))

Given an array of integers, return **indices** of the two numbers such that they add up to a specific target.

You may assume that each input would have **exactly** one solution, and you may not use the same element twice.

**Example:**

	Given nums = [2, 7, 11, 15], target = 9,

	Because nums[0] + nums[1] = 2 + 7 = 9,
	return [0, 1].


## Reverse Integer
([C](./C/ft_reverse_int.c)   /   [C#](./Cs/reverseint.cs))

Given a 32-bit signed integer, reverse digits of an integer.

**Note:**
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

**Example 1:**

	Input: 123
	Output: 321

**Example 2:**

	Input: -123
	Output: -321

**Example 3:**

	Input: 120
	Output: 21


## Palindrome Number
([C](./C/ft_ispalindrome.c)   /   [C#](./Cs/ispalindrome.cs))

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

**Note:**
Solve it without converting the integer to a string

**Example 1:**

	Input: 121
	Output: true

**Example 2:**

	Input: -121
	Output: false
*Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.*

**Example 3:**

	Input: 10
	Output: false
*Explanation: Reads 01 from right to left. Therefore it is not a palindrome.*


## Roman to Integer
([C](./C/ft_romantoi.c)   /   [C#](./Cs/romantoint.cs))

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

	Symbol       Value
	I             1
	V             5
	X             10
	L             50
	C             100
	D             500
	M             1000

For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

- I can be placed before V (5) and X (10) to make 4 and 9.
- X can be placed before L (50) and C (100) to make 40 and 90.
- C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

**Example 1:**

	Input: "III"
	Output: 3

**Example 2:**

	Input: "IV"
	Output: 4

**Example 3:**

	Input: "IX"
	Output: 9

**Example 4:**

	Input: "LVIII"
	Output: 58

*Explanation: L = 50, V= 5, III = 3.*

	**Example 5:**

	Input: "MCMXCIV"
	Output: 1994
*Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.*


## Valid Parentheses
([C](./C/ft_isvalid.c)   /   [C#](./Cs/validparentheses.cs))

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

**Note:**
Note that an empty string is also considered valid.

**Example 1:**

	Input: "()"
	Output: true

**Example 2:**

	Input: "()[]{}"
	Output: true

**Example 3:**

	Input: "(]"
	Output: false

**Example 4:**

	Input: "([)]"
	Output: false

**Example 5:**

	Input: "{[]}"
	Output: true


## Merge Two Sorted Lists
([C](./C/ft_lstmerge.c)   /   [C#](./Cs/mergetwolists.cs))

Merge two sorted linked lists and return it as a new **sorted** list. The new list should be made by splicing together the nodes of the first two lists.

**Example:**

	Input: 1->2->4, 1->3->4
	Output: 1->1->2->3->4->4


## Largest Time for Given Digits
([C](./C/ft_largest_time.c)   /   [C#](./Cs/largesttime.cs))

Given an array of 4 digits, return the largest 24 hour time that can be made.

The smallest 24 hour time is 00:00, and the largest is 23:59.  Starting from 00:00, a time is larger if more time has elapsed since midnight.

Return the answer as a string of length 5.  If no valid time can be made, return an empty string.

**Example 1:**

	Input: [1,2,3,4]
	Output: "23:41"

**Example 2:**

	Input: [5,5,5,5]
	Output: ""

**Note:**

	A.length == 4
	0 <= A[i] <= 9


## Contains Duplicate III
([C](./C/ft_containsduplicate3.c)   /   [C#](./Cs/containsduplicate3.cs))

Given an array of integers, find out whether there are two distinct indices i and j in the array such that the **absolute** difference between **nums[i]** and **nums[j]** is at most t and the **absolute** difference between i and j is at most k.

**Example 1:**

	Input: nums = [1,2,3,1], k = 3, t = 0
	Output: true

**Example 2:**

	Input: nums = [1,0,1,1], k = 1, t = 2
	Output: true

**Example 3:**

	Input: nums = [1,5,9,1,5,9], k = 2, t = 3
	Output: false


## Repeated Substring Pattern
([C](./C/ft_repeatedsubstring.c)   /   [C#](./Cs/repeatedsubstring.cs))

Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.

**Example 1:**

	Input: "abab"
	Output: True
*Explanation: It's the substring "ab" twice.*

**Example 2:**

	Input: "aba"
	Output: False

**Example 3:**

	Input: "abcabcabcabc"
	Output: True
*Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)*


## Partition Labels
([C](./C/ft_partitionlabels.c)   /   [C#](./Cs/partitionlabel.cs))

A string S of lowercase English letters is given. We want to partition this string into as many parts as possible so that each letter appears in at most one part, and return a list of integers representing the size of these parts.

**Example 1:**

	Input: S = "ababcbacadefegdehijhklij"
	Output: [9,7,8]
*Explanation:*
*The partition is "ababcbaca", "defegde", "hijhklij".*
*This is a partition so that each letter appears in at most one part.*
*A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits S into less parts.*

**Note:**

	S will have length in range [1, 500].
	S will consist of lowercase English letters ('a' to 'z') only.


## All Elements in Two Binary Search Trees
([C](./C/ft_elem_binarytree.c)   /   [C#](./Cs/elementsbinarytree.cs))

Given two binary search trees root1 and root2.
Return a list containing all the integers from both trees sorted in ascending order.

![AEITBST01](https://assets.leetcode.com/uploads/2019/12/18/q2-e1.png)

**Example 1:**

	Input: root1 = [2,1,4], root2 = [1,0,3]
	Output: [0,1,1,2,3,4]

**Example 2:**

	Input: root1 = [0,-10,10], root2 = [5,1,7,0,2]
	Output: [-10,0,0,1,2,5,7,10]

**Example 3:**

	Input: root1 = [], root2 = [5,1,7,0,2]
	Output: [0,1,2,5,7]

**Example 4:**

	Input: root1 = [0,-10,10], root2 = []
	Output: [-10,0,10]

![AEITBST02](https://assets.leetcode.com/uploads/2019/12/18/q2-e5-.png)

**Example 5:**

	Input: root1 = [1,null,8], root2 = [8,1]
	Output: [1,1,8,8]

**Constraints:**

	Each tree has at most 5000 nodes.
	Each node's value is between [-10^5, 10^5].


## Image Overlap
([C](./C/ft_largest_overlap.c)   /   [C#](./Cs/largestoverlap.cs))

Two images **A** and **B** are given, represented as binary, square matrices of the same size.  (A binary matrix has only 0s and 1s as values.)
We translate one image however we choose (sliding it left, right, up, or down any number of units), and place it on top of the other image.  After, the *overlap* of this translation is the number of positions that have a 1 in both images.

(Note also that a translation does **not** include any kind of rotation.)

What is the largest possible overlap?

**Example 1:**

	Input:		A =	[[1,1,0],
				[0,1,0],
				[0,1,0]]
			B =	[[0,0,0],
				[0,1,1],
				[0,0,1]]
	Output: 3
*Explanation: We slide A to right by 1 unit and down by 1 unit.*

**Notes:**

	1 <= A.length = A[0].length = B.length = B[0].length <= 30
	0 <= A[i][j], B[i][j] <= 1


## Word Pattern
([C](./C/ft_wordpattern.c)   /   [C#](./Cs/wordpattern.cs))

Given a pattern and a string str, find if str follows the same pattern.
Here **follow** means a full match, such that there is a bijection between a letter in pattern and a **non-empty** word in str.

**Example 1:**

	Input: pattern = "abba", str = "dog cat cat dog"
	Output: true

**Example 2:**

	Input:pattern = "abba", str = "dog cat cat fish"
	Output: false

**Example 3:**

	Input: pattern = "aaaa", str = "dog cat cat dog"
	Output: false

**Example 4:**

	Input: pattern = "abba", str = "dog dog dog dog"
	Output: false

**Notes:**
You may assume pattern contains only lowercase letters, and str contains lowercase letters that may be separated by a single space.


## Sum of Root to Leaf Binary Numbers
([C](./C/ft_sumroot_binary.c)   /   [C#](./Cs/sumrootbinary.cs))

Given a binary tree, each node has value 0 or 1.  Each root-to-leaf path represents a binary number starting with the most significant bit.  For example, if the path is 0 -> 1 -> 1 -> 0 -> 1, then this could represent 01101 in binary, which is 13.
For all leaves in the tree, consider the numbers represented by the path from the root to that leaf.
Return the sum of these numbers.

**Example 1:**

![SORTLBN01](https://assets.leetcode.com/uploads/2019/04/04/sum-of-root-to-leaf-binary-numbers.png)

	Input: [1,0,1,0,1,0,1]
	Output: 22
*Explanation: (100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22*

**Note:**

	The number of nodes in the tree is between 1 and 1000.
	node.val is 0 or 1.
	The answer will not exceed 2^31 - 1.


## Compare Version Numbers
([C](./C/ft_compare_version_nbr.c)   /   [C#](./Cs/compareversionnbr.cs))

Compare two version numbers version1 and version2.
If version1 > version2 return 1; if version1 < version2 return -1;otherwise return 0.
You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.
You may assume the default revision number for each level of a version number to be 0. For example, version number 3.4 has a revision number of 3 and 4 for its first and second level revision number. Its third and fourth level revision number are both 0.

**Example 1:**

	Input: version1 = "0.1", version2 = "1.1"
	Output: -1

**Example 2:**

	Input: version1 = "1.0.1", version2 = "1"
	Output: 1

**Example 3:**

	Input: version1 = "7.5.2.4", version2 = "7.5.3"
	Output: -1

**Example 4:**

	Input: version1 = "1.01", version2 = "1.001"
	Output: 0
*Explanation: Ignoring leading zeroes, both “01” and “001" represent the same number “1”*

**Example 5:**

	Input: version1 = "1.0", version2 = "1.0.0"
	Output: 0
*Explanation: The first version number does not have a third level revision number, which means its third level revision number is default to "0"*

**Note:**

	Version strings are composed of numeric strings separated by dots . and this numeric strings may have leading zeroes.
	Version strings do not start or end with dots, and they will not be two consecutive dots.


## Bulls and Cows
([C](./C/ft_bulls_and_cows.c)   /   [C#](./Cs/bullsandcows.cs))

You are playing the following Bulls and Cows game with your friend: You write down a number and ask your friend to guess what the number is. Each time your friend makes a guess, you provide a hint that indicates how many digits in said guess match your secret number exactly in both digit and position (called "bulls") and how many digits match the secret number but locate in the wrong position (called "cows"). Your friend will use successive guesses and hints to eventually derive the secret number.
Write a function to return a hint according to the secret number and friend's guess, use A to indicate the bulls and B to indicate the cows.
Please note that both secret number and friend's guess may contain duplicate digits.

**Example 1:**

	Input: secret = "1807", guess = "7810"
	Output: "1A3B"
*Explanation: 1 bull and 3 cows. The bull is 8, the cows are 0, 1 and 7.*

**Example 2:**

	Input: secret = "1123", guess = "0111"
	Output: "1A1B"
*Explanation: The 1st 1 in friend's guess is a bull, the 2nd or 3rd 1 is a cow.*

**Note:**

	You may assume that the secret number and your friend's guess only contain digits, and their lengths are always equal.


## Maximum Product Subarray
([C](./C/ft_max_product_subar.c)   /   [C#](./Cs/maxproductsubarray.cs))

Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

**Example 1:**

	Input: [2,3,-2,4]
	Output: 6
*Explanation: [2,3] has the largest product 6.*

**Example 2:**

	Input: [-2,0,-1]
	Output: 0
*Explanation: The result cannot be 2, because [-2,-1] is not a subarray.*


## Combination Sum III
([C](./C/ft_combination_sum_3.c)   /   [C#](./Cs/combinationsum3.cs))

Find all possible combinations of k numbers that add up to a number n, given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.

**Note:**
	All numbers will be positive integers.
	The solution set must not contain duplicate combinations.

**Example 1:**

	Input: k = 3, n = 7
	Output: [[1,2,4]]

**Example 2:**

	Input: k = 3, n = 9
	Output: [[1,2,6], [1,3,5], [2,3,4]]


## Insert Interval
*Special thanks to [gbudau](https://github.com/gbudau) for his help with pointers*

([C](./C/ft_insert_interval.c)   /   [C#](./Cs/insertinterval.cs))

Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
You may assume that the intervals were initially sorted according to their start times.

**Example 1:**

	Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
	Output: [[1,5],[6,9]]

**Example 2:**

	Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
	Output: [[1,2],[3,10],[12,16]]
*Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].*

**NOTE:**
	Input types have been changed on April 15, 2019. Please reset to default code definition to get new method signature.

#### Two sum
Given an array of integers, return **indices** of the two numbers such that they add up to a specific target.

You may assume that each input would have **exactly** one solution, and you may not use the same element twice.

	**Example:**

	Given nums = [2, 7, 11, 15], target = 9,

	Because nums[0] + nums[1] = 2 + 7 = 9,
	return [0, 1].

#### Reverse Integer
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

#### Palindrome Number
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

#### Roman to Integer
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

#### Valid Parentheses
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

#### Merge Two Sorted Lists
Merge two sorted linked lists and return it as a new **sorted** list. The new list should be made by splicing together the nodes of the first two lists.

	**Example:**

	Input: 1->2->4, 1->3->4
	Output: 1->1->2->3->4->4

#### Largest Time for Given Digits
Given an array of 4 digits, return the largest 24 hour time that can be made.

The smallest 24 hour time is 00:00, and the largest is 23:59.  Starting from 00:00, a time is larger if more time has elapsed since midnight.

Return the answer as a string of length 5.  If no valid time can be made, return an empty string.

	**Example 1:**

	Input: [1,2,3,4]
	Output: "23:41"

	Example 2:

	Input: [5,5,5,5]
	Output: ""

**Note:**

	A.length == 4
	0 <= A[i] <= 9

#### Contains Duplicate III
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

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


## House Robber
([C](./C/ft_house_robber.c)   /   [C#](./Cs/houserobber.cs))

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

**Example 1:**

	Input: nums = [1,2,3,1]
	Output: 4
*Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).*
*Total amount you can rob = 1 + 3 = 4.*

**Example 2:**

	Input: nums = [2,7,9,3,1]
	Output: 12
*Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).*
*Total amount you can rob = 2 + 9 + 1 = 12.*

**Constraints:**

	0 <= nums.length <= 100
	0 <= nums[i] <= 400


## Length of Last Word
([C](./C/ft_len_of_lastword.c)   /   [C#](./Cs/lengthoflastword.cs))

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.
If the last word does not exist, return 0.

**Note:**
	A word is defined as a maximal substring consisting of non-space characters only.

**Example:**

	Input: "Hello World"
	Output: 5


## Maximum XOR of Two Numbers in an Array
([C](./C/ft_max_xor_two_num_array.c)   /   [C#](./Cs/maxxoroftwonuminarray.cs))

Given a non-empty array of numbers, a0, a1, a2, … , an-1, where 0 ≤ ai < 231.
Find the maximum result of ai XOR aj, where 0 ≤ i, j < n.
*Could you do this in O(n) runtime?*

**Example:**

	Input: [3, 10, 5, 25, 2, 8]
	Output: 28
*Explanation: The maximum result is 5 ^ 25 = 28.*


## Robot Bounded In Circle
([C](./C/ft_robot_bounded_in_circle.c)   /   [C#](./Cs/robotboundedincircle.cs))

On an infinite plane, a robot initially stands at (0, 0) and faces north.  The robot can receive one of three instructions:
- "G": go straight 1 unit;
- "L": turn 90 degrees to the left;
- "R": turn 90 degress to the right.
The robot performs the instructions given in order, and repeats them forever.
Return true if and only if there exists a circle in the plane such that the robot never leaves the circle.

**Example 1:**

	Input: "GGLLGG"
	Output: true
*Explanation:*
*The robot moves from (0,0) to (0,2), turns 180 degrees, and then returns to (0,0).*
*When repeating these instructions, the robot remains in the circle of radius 2 centered at the origin.*

**Example 2:**

	Input: "GG"
	Output: false
*Explanation:*
*The robot moves north indefinitely.*

**Example 3:**

	Input: "GL"
	Output: true
*Explanation:*
*The robot moves from (0, 0) -> (0, 1) -> (-1, 1) -> (-1, 0) -> (0, 0) -> ...*

**Note:**
	1 <= instructions.length <= 100
	instructions[i] is in {'G', 'L', 'R'}


## Best Time to Buy and Sell Stock
([C](./C/ft_max_profit_1.c)   /   [C#](./Cs/maxprofit1.cs))

Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one.

**Example 1:**

	Input: [7,1,5,3,6,4]
	Output: 5
*Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.*
*Not 7-1 = 6, as selling price needs to be larger than buying price.*

**Example 2:**

	Input: [7,6,4,3,1]
	Output: 0
*Explanation: In this case, no transaction is done, i.e. max profit = 0.*


## Sequential Digits
([C](./C/ft_sequential_digits.c)   /   [C#](./Cs/sequentialdigits.cs))

An integer has sequential digits if and only if each digit in the number is one more than the previous digit.
Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

**Example 1:**

	Input: low = 100, high = 300
	Output: [123,234]

**Example 2:**

	Input: low = 1000, high = 13000
	Output: [1234,2345,3456,4567,5678,6789,12345]

**Constraints:**

- 10 <= low <= high <= 10^9


## Unique Paths III
([C](./C/ft_unique_paths_3.c)   /   [C#](./Cs/uniquepaths3.cs))

On a 2-dimensional grid, there are 4 types of squares:
* 1 represents the starting square.  There is exactly one starting square.
* 2 represents the ending square.  There is exactly one ending square.
* 0 represents empty squares we can walk over.
* -1 represents obstacles that we cannot walk over.

Return the number of 4-directional walks from the starting square to the ending square, that walk over every non-obstacle square exactly once.

**Example 1:**

	Input: [[1,0,0,0],[0,0,0,0],[0,0,2,-1]]
	Output: 2
*Explanation: We have the following two paths:*
*1. (0,0),(0,1),(0,2),(0,3),(1,3),(1,2),(1,1),(1,0),(2,0),(2,1),(2,2)*
*2. (0,0),(1,0),(2,0),(2,1),(1,1),(0,1),(0,2),(0,3),(1,3),(1,2),(2,2)*

**Example 2:**

	Input: [[1,0,0,0],[0,0,0,0],[0,0,0,2]]
	Output: 4
*Explanation: We have the following four paths:*
*1. (0,0),(0,1),(0,2),(0,3),(1,3),(1,2),(1,1),(1,0),(2,0),(2,1),(2,2),(2,3)*
*2. (0,0),(0,1),(1,1),(1,0),(2,0),(2,1),(2,2),(1,2),(0,2),(0,3),(1,3),(2,3)*
*3. (0,0),(1,0),(2,0),(2,1),(2,2),(1,2),(1,1),(0,1),(0,2),(0,3),(1,3),(2,3)*
*4. (0,0),(1,0),(2,0),(2,1),(1,1),(0,1),(0,2),(0,3),(1,3),(1,2),(2,2),(2,3)*

**Example 3:**

	Input: [[0,1],[2,0]]
	Output: 0
*Explanation:*
*There is no path that walks over every empty square exactly once.*
*Note that the starting and ending square can be anywhere in the grid.*

**Note:**
	1 <= grid.length * grid[0].length <= 20


## Car Pooling
([C](./C/ft_car_pooling.c)   /   [C#](./Cs/carpooling.cs))

You are driving a vehicle that has capacity empty seats initially available for passengers.  The vehicle **only** drives east (ie. it **cannot** turn around and drive west.)
Given a list of trips, trip[i] = [num_passengers, start_location, end_location] contains information about the i-th trip: the number of passengers that must be picked up, and the locations to pick them up and drop them off.  The locations are given as the number of kilometers due east from your vehicle's initial location.
Return true if and only if it is possible to pick up and drop off all passengers for all the given trips.

**Example 1:**

	Input: trips = [[2,1,5],[3,3,7]], capacity = 4
	Output: false

**Example 2:**

	Input: trips = [[2,1,5],[3,3,7]], capacity = 5
	Output: true

**Example 3:**

	Input: trips = [[2,1,5],[3,5,7]], capacity = 3
	Output: true

**Example 4:**

	Input: trips = [[3,2,7],[3,7,9],[8,3,9]], capacity = 11
	Output: true

**Constraints:**

	trips.length <= 1000
	trips[i].length == 3
	1 <= trips[i][0] <= 100
	0 <= trips[i][1] < trips[i][2] <= 1000
	1 <= capacity <= 100000


## Majority Element II
([C](./C/ft_majority_element_2.c)   /   [C#](./Cs/majorityelement2.cs))

Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
**Note:** The algorithm should run in linear time and in O(1) space.

**Example 1:**

	Input: [3,2,3]
	Output: [3]

**Example 2:**

	Input: [1,1,1,3,3,2,2,2]
	Output: [1,2]


## Gas Station
([C](./C/ft_gas_station.c)   /   [C#](./Cs/gasstation.cs))

There are N gas stations along a circular route, where the amount of gas at station i is gas[i].
You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.
Return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1.

**Note:**

	If there exists a solution, it is guaranteed to be unique.
	Both input arrays are non-empty and have the same length.
	Each element in the input arrays is a non-negative integer.

**Example 1:**

	Input:
	gas  = [1,2,3,4,5]
	cost = [3,4,5,1,2]

	Output: 3

*Explanation:*
*Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4*
*Travel to station 4. Your tank = 4 - 1 + 5 = 8*
*Travel to station 0. Your tank = 8 - 2 + 1 = 7*
*Travel to station 1. Your tank = 7 - 3 + 2 = 6*
*Travel to station 2. Your tank = 6 - 4 + 3 = 5*
*Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.*
*Therefore, return 3 as the starting index.*

**Example 2:**

	Input:
	gas  = [2,3,4]
	cost = [3,4,3]

	Output: -1

*Explanation:*
*You can't start at station 0 or 1, as there is not enough gas to travel to the next station.*
*Let's start at station 2 and fill up with 4 uniy of gas. Your tank = 0 + 4 = 4*
*Travel to station 0. Your tank = 4 - 3 + 2 = 3*
*Travel to station 1. Your tank = 3 - 3 + 3 = 3*
*You cannot travel back to station 2, as it requires 4 unit of gas but you only have 3.*
*Therefore, you can't travel around the circuit once no matter where you start.*


## Find the Difference
([C](./C/ft_find_the_difference.c)   /   [C#](./Cs/findthedifference.cs))

Given two strings **s** and **t** which consist of only lowercase letters.
String **t** is generated by random shuffling string **s** and then add one more letter at a random position.
Find the letter that was added in t.

**Example:**

	Input:
	s = "abcd"
	t = "abcde"

	Output:
	e

*Explanation:*
*'e' is the letter that was added.*


## Largest Number
([C](./C/ft_largest_number.c)   /   [C#](./Cs/largestnumber.cs))

Given a list of non negative integers, arrange them such that they form the largest number.

**Example 1:**

	Input: [10,2]
	Output: "210"

**Example 2:**

	Input: [3,30,34,5,9]
	Output: "9534330"

**Note:**
	The result may be very large, so you need to return a string instead of an integer.


## Teemo Attacking
([C](./C/ft_teemo_attacking.c)   /   [C#](./Cs/teemoattacking.cs))

In LOL world, there is a hero called Teemo and his attacking can make his enemy Ashe be in poisoned condition. Now, given the Teemo's attacking **ascending** time series towards Ashe and the poisoning time duration per Teemo's attacking, you need to output the total time that Ashe is in poisoned condition.
You may assume that Teemo attacks at the very beginning of a specific time point, and makes Ashe be in poisoned condition immediately.

**Example 1:**

	Input: [1,4], 2
	Output: 4
*Explanation: At time point 1, Teemo starts attacking Ashe and makes Ashe be poisoned immediately.*
*This poisoned status will last 2 seconds until the end of time point 2.*
*And at time point 4, Teemo attacks Ashe again, and causes Ashe to be in poisoned status for another 2 seconds.*
*So you finally need to output 4.*

**Example 2:**

	Input: [1,2], 2
	Output: 3
*Explanation: At time point 1, Teemo starts attacking Ashe and makes Ashe be poisoned.*
*This poisoned status will last 2 seconds until the end of time point 2.*
*However, at the beginning of time point 2, Teemo attacks Ashe again who is already in poisoned status.*
*Since the poisoned status won't add up together, though the second poisoning attack will still work at time point 2, it will stop at the end of time point 3.*
*So you finally need to output 3.*

**Note:**
	You may assume the length of given time series array won't exceed 10000.
	You may assume the numbers in the Teemo's attacking time series and his poisoning time duration per attacking are non-negative integers, which won't exceed 10,000,000.


## Evaluate Division
([C](./C/ft_evaluate_division.c)   /   [C#](./Cs/evaluatedivision.cs))

You are given equations in the format A / B = k, where A and B are variables represented as strings, and k is a real number (floating-point number). Given some queries, return the answers. If the answer does not exist, return -1.0.
The input is always valid. You may assume that evaluating the queries will result in no division by zero and there is no contradiction.

**Example 1:**

	Input: equations = [["a","b"],["b","c"]], values = [2.0,3.0], queries = [["a","c"],["b","a"],["a","e"],["a","a"],["x","x"]]
	Output: [6.00000,0.50000,-1.00000,1.00000,-1.00000]
*Explanation:*
*Given: a / b = 2.0, b / c = 3.0*
*queries are: a / c = ?, b / a = ?, a / e = ?, a / a = ?, x / x = ?*
*return: [6.0, 0.5, -1.0, 1.0, -1.0 ]*

**Example 2:**

	Input: equations = [["a","b"],["b","c"],["bc","cd"]], values = [1.5,2.5,5.0], queries = [["a","c"],["c","b"],["bc","cd"],["cd","bc"]]
	Output: [3.75000,0.40000,5.00000,0.20000]

**Example 3:**

	Input: equations = [["a","b"]], values = [0.5], queries = [["a","b"],["b","a"],["a","c"],["x","y"]]
	Output: [0.50000,2.00000,-1.00000,-1.00000]

**Constraints:**

	1 <= equations.length <= 20
	equations[i].length == 2
	1 <= equations[i][0], equations[i][1] <= 5
	values.length == equations.length
	0.0 < values[i] <= 20.0
	1 <= queries.length <= 20
	queries[i].length == 2
	1 <= queries[i][0], queries[i][1] <= 5
	equations[i][0], equations[i][1], queries[i][0], queries[i][1] consist of lower case English letters and digits.


## Subarray Product Less Than K
([C](./C/ft_subarray_product_less_than_k.c)   /   [C#](./Cs/subarrayproductlessthank.cs))

Your are given an array of positive integers nums.
Count and print the number of (contiguous) subarrays where the product of all the elements in the subarray is less than k.

**Example 1:**

	Input: nums = [10, 5, 2, 6], k = 100
	Output: 8

*Explanation: The 8 subarrays that have product less than 100 are: [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6].*
*Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.*

**Note:**

	0 < nums.length <= 50000.
	0 < nums[i] < 1000.
	0 <= k < 10^6.


## Word Break
([C](./C/ft_word_break.c)   /   [C#](./Cs/wordbreak.cs))

Given a **non-empty** string s and a dictionary wordDict containing a list of **non-empty** words, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

**Note:**

	The same word in the dictionary may be reused multiple times in the segmentation.
	You may assume the dictionary does not contain duplicate words.

**Example 1:**

	Input: s = "leetcode", wordDict = ["leet", "code"]
	Output: true
*Explanation: Return true because "leetcode" can be segmented as "leet code".*

**Example 2:**

	Input: s = "applepenapple", wordDict = ["apple", "pen"]
	Output: true
*Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".*
*Note that you are allowed to reuse a dictionary word.*

**Example 3:**

	Input: s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
	Output: false


## First Missing Positive
([C](./C/ft_first_missing_positive.c)   /   [C#](./Cs/firstmissingpositive.cs))

Given an unsorted integer array, find the smallest missing positive integer.

**Example 1**:

	Input: [1,2,0]
	Output: 3

**Example 2:**

	Input: [3,4,-1,1]
	Output: 2

**Example 3:**

	Input: [7,8,9,11,12]
	Output: 1

**Follow up:**
Your algorithm should run in O(n) time and uses constant extra space.

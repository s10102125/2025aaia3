#week01-2b.py 使用pt的版本2使用 .find()的函式
#Leetcode 28. Find the Index of the First Occurrence in a String
#在 haystack 乾稻草堆找到 needle 針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)

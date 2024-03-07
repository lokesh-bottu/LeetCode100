class Solution:
    def reverseWords(self, s: str) -> str:
        values = s.split()
        return " ".join(values[::-1])
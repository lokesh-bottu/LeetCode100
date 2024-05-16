class Solution:
    def isValid(self, s: str) -> bool:
        opening = ['{','[','(']
        closing = [')','}',']']
        stack = []
        for letter in s:
            if letter in opening:
                stack.append(letter)
            else:
                if len(stack) ==0:
                    return False
                elif letter == '}':
                    if stack[-1] != '{':
                        return False
                    else:
                        stack.pop()
                elif letter == ')':
                    if stack[-1] != '(':
                        return False
                    else:
                        stack.pop()
                elif letter == ']':
                    if stack[-1] != '[':
                        return False
                    else:
                        stack.pop()
        if len(stack) == 0:
            return True
        else:
            return False

            



        
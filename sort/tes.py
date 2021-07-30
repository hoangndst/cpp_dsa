def isBalanced(s):
    if len(s)%2 != 0:
        return "NO"
    stack = []
    for i in range(len(s)):
        if s[i] == '{' or s[i] == '[' or s[i] == '(':
            stack.append(s[i])
        else:
            if len(stack) == 0:
                return "NO"
                
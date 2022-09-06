def intparser(acc, s, ix):
    if ix >= len(s):
        return acc, ix
    c = s[ix]
    if c >= '0' and c <= '9':
        ix += 1
        return intparser(acc*10+int(c), s, ix)
    else:
        return acc, ix
def solve(s):
    i = 0
    while i < len(s):
        if s[i].isdigit():
            val, i = intparser(0,s,i)
            print(val)
        i += 1


s = input()
solve(s)
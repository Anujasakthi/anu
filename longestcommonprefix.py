n = input()
ar = []
t = 10000
fi = ''
for i in range(n):
    st = raw_input()
    ar.append(st)
    if len(st) < t:
        t = len(st)
for i in range(t):
    r = 1
    wo = ar[0][i]
    for j in range(1,n):
        if wo == ar[j][i]:
            r = r + 1
        else:
            break
    if r == n:
      fi = fi + wo
print fi

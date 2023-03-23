## https://www.codechef.com/problems/CONFCAT?tab=statement

# cook your dish here

t=int(input())
for test in range(t):
    n=int(input())
    
    l=[eval(i) for i in input().split()]
    
    
    i = max(zip(l, range(len(l))))[1]

    if i != 0:
        a = l[:i]
        b = l[i:]
        print(len(a))
        for term in a:
            print(term, end=" ")
        print()
        print(len(b))
        for term in b:
            print(term, end=" ")
        
        
    else:
        print('\n-1')

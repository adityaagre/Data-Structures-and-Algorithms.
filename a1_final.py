def no_of_digits(n):
    ctr = 0
    while(n>0):
        ctr += 1
        n=n//10
    return ctr

def split(n, length):
    if length==1:
        return[0,n,1]
    
    l1 = length//2
    exp = 10**l1
    return [n//exp, n%exp, l1]
 
def multiply(n1, n2):

    if(n1==0 or n2==0):
        return 0
    
    l1=no_of_digits(n1)
    l2=no_of_digits(n2)

    [a1,a2,p1] = split(n1,l1)
    [b1,b2,p2] = split(n2,l2)

    pow1 = 10**p1
    pow2 = 10**p2
    pow3 = 10**(p1+p2)
    
    if(l1==1 and l2==1):
        return pow3*(a1*b1) + pow1*(a1*b2) + pow2*(a2*b1) + (a2*b2)

    else:
        return pow3*(multiply(a1, b1)) + pow1*(multiply(a1, b2)) + pow2*(multiply(a2, b1)) + (multiply(a2, b2))


##import random
##for i in range(10000):
##    x= random.randint(1234567890123457687, 10000000000000000000)
##    y= random.randint(128634478657654, 10000000000000000000)
##
##    if(x*y != multiply(x,y)):
##        print("Error", x,y)
        
print(multiply(1000, 1000000000), multiply(10, 12333333323241643), multiply(0, 56886868686866), multiply(4567567657567657665, 76756753243243))

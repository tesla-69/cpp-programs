import math
import keyword
L=[]
ip="""main ()
{
int a , b , c , avg ;
scanf ( “ %d %d %d " , & a , & b , & c ) ;
avg = ( a + b + c ) / 3 ;
printf ( " avg = %d " , avg ) ;
}"""
s=""
for i in ip:
    if(i!=" " and i!="\n"):
        s+=i
    else:
        L.append(s)
        s=""
uniqueOperands={};
uniqueOperators={};
for i in L:
    if(i in keyword.kwlist or i in "+-/*=&,(){;" or i in ["printf","scanf","%d","int"]):
        if(i not in uniqueOperators.keys()):
            uniqueOperators[i]=1
        else:
            uniqueOperators[i]+=1
    elif(i not in ")}"):
        if(i not in uniqueOperands.keys()):
            uniqueOperands[i]=1
        else:
            uniqueOperands[i]+=1
N1=sum(uniqueOperators.values())
N2=sum(uniqueOperands.values())
n1=len(list(uniqueOperators.keys()))
n2=len(uniqueOperands.keys())
# Program Length (N)
N = N1 + N2
print(f"Required Halstead Software Science Metrics:-\nProgram Length={N}")
# Program Vocabulary (n)
n = n1 + n2
print(f"Program Vocabulary={n}")
# Volume (V)
V = N * math.log(n)
print(f"Volume={V}")

# Difficulty (D)
D = (n1 * N2) / (2 * n2)
print(f"Difficulty={D}")
# Effort (E)
E = D * V
print(f"Effort={E}")
# Time to Implement (T)
T = E / 18
print(f"Time to implement={T}”)
}

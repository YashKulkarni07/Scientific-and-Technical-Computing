program InClassChallenge9_Volume

implicit none
character(len=10) :: first
integer :: a,b,c
real :: d

first='Yash'
a=3
b=4
c=5
d=(a*b*c)/7.

print *, & "Hello ", first
print *, "Volume of sphere is", (4./3)*3.1415926535*a**3.0
print *, "Volume of rectangular prism",a*b*c
print *, "Value of d is ", d
print *, "Value of integer d is", int(d)


end program InClassChallenge9_Volume

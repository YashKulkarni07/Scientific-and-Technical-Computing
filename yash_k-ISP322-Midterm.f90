/* 
Yash Kulkarni
Kshift-Cypher
A program that gives the first 10,000 prime triples based on goldbach conjecture
10/27/2020
 */

Module Prime
implicit none
integer::n,srrp,i,condition=0
real::rp

contains 
 subroutine isitprime(n,condition)
 implicit none
 integer::n,i,condition

condition=0
 do i=2,n-1
  if(mod(n,i)==0) then 
        condition=1
        exit
  end if
 end do
end subroutine

end Module Prime

program Midterm2 
use Prime
implicit none
integer :: valp,b,gold,a,valq,valr,vald
integer,dimension(10000)::p,distance,r
integer,dimension(10100)::q

valp=1
p(1)=5
do a=7,104800
 call isitprime(a,condition)
 if(condition/=0) then
  cycle
  else
  valp=valp+1
  p(valp)=a
  end if
end do

valq=1
q(1)=7
do b=8,200000
  call isitprime(b,condition)
  if (condition/=0) then
     cycle
     else
     valq=valq+1
     q(valq)=b
    end if
  end do

valr=1
valq=1!
do while (p(valr)<104800)
r(valr)=p(valr)+(p(valr)-q(valq))
  call isitprime(r(valr),condition)
  if (condition/=0 .or. r(valr)==-1 .or. r(valr)==1) then
   valq=valq+1
  else
   r(valr)=abs(r(valr))
   valq=valr+1
   valr=valr+1
   end if
end do

valp=1
valr=1
vald=1
do while(vald<10100)
distance(vald)=(p(valp)-r(valr))
distance(vald)=abs(distance(vald))
valr=valr+1
valp=valp+1
vald=vald+1
end do




!print*,p
!print*,q
!print*,r
print*,distance

end program


   



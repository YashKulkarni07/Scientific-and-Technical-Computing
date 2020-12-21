Module Prime_Number
implicit none
integer::n,i,d,z,a,b
contains
  logical function IsPrime(n)
   integer :: n
   if (n>2 .and. mod(n,2)==0) then
      IsPrime=.False.
   else if(n>3 .and. mod(n,3)==0) then
      IsPrime=.False.
   else if(n>5 .and. mod(n,5)==0) then
      IsPrime=.False.
   else if(n>7 .and. mod(n,7)==0) then
      IsPrime=.False.
   else
      IsPrime=.True.
   end if
   end function

 integer function NextPrime(n)
   integer :: n,i,z
   do i=1,20
    z=n+i
    if(mod(z,2)/=0 .and. mod(z,3)/=0 .and. mod(z,17)/=0 .and. mod(z,19)/=0) then 
     NextPrime=z
    exit
    end if
   end do
 end function

integer function PreviousPrime(n)
   integer :: n,a,b
   do a=1,20
    b=n-a
   if(mod(b,2)/=0 .and. mod(b,3)/=0) then
     PreviousPrime=b
    exit
   end if
  end do
end function

end Module Prime_Number

program HW6_IsPrime
use Prime_Number
implicit none
n=1001
print *, IsPrime(n)
print *, NextPrime(n)
print*,PreviousPrime(n)
end program


 

program HW5PrimeNumb

implicit none
integer :: i


do i=0,100

 if (i==0 .or. i==1) then 
       Print*,i,"is not prime or composite number"

 else if (i>2 .and. mod(i,2)==0) then
       Print*,i,"is not prime: divisible by 2"

 else if (i>3 .and. mod(i,3)==0) then
        Print*,i,"is not a prime number: divisible by 3"
        
 else if (i>5 .and. mod (i,5)==0) then 
        Print*,i,"is not a prime number: divisible by 5"

else if(i>7 .and. mod(i,7)==0) then
        Print*,i,"is not a prime number: divisible by 7"

else 
        Print*,i,"is a prime"
       
       end if
    end do 
end program
 
        

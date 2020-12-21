   program uvw

   implicit none
   integer :: u,v,w
   real :: r,w1

    do u=1,100
     do v =u,100
        r=u**2 + v**2
        w1=sqrt(r)
        w=w1   
      
       
     if (w==w1 .AND. w<=100) then 
        print *, u,v,w
     end if
    end do
  end do

end program 

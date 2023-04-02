elements=3:14
rw=c("R1","R2","R3","R4")
cl=c("C1","C2","C3")
mylist1=list(c("CD","SG"),matrix(elements,nrow=4,ncol=3,byrow=T,dimnames = list(rw,cl))
            ,list("red",'blue'))
names(mylist1)=c("Names","MATRIX","Colors")
mylist1[1]
mylist1[3]
mylist1$MATRIX
mylist2=list(c("SID","ALPHA"),list("red",'blue'))
mylist2
mylist3=c(mylist1,mylist2)
mylist3

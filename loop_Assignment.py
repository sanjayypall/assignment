# # sum and product program
# i=1
# s,p=0,1
# while i<=10:
#     s=s+i
#     p=p*i
#     i=i+1
# print("The sum and product are respectively",s,p)

# s,p=0,1
# for i in range(1,11):
#     s=s+i
#     p=p*i
# print("The sum and product are : ",s,p)



# Electricity problem
# units=int(input("Enter the no. of units here : "))
# if units>=0:
#     if units>=0 and units<=100:
#         amount=4.5*units
#     elif units>100 and units<=200:
#         amount=450+(units-100)*6
#     elif units>200 and units<=300:
#         amount = 1050 + (units-200)*10
#     else:
#         amount = 2050 + (units-300)*20
# print("The total cost is : ",amount)


# l1=[]
# i=1
# while i<=100:
#     if i%4==0 or i%5==0:
#         l1.append(i*i*i)
#     i=i+1
# print(l1)



# l=[]
# for i in range(0,101):
#     l.append(i)
# l1=[]
# for x in l:
#     if x%4==0 or x%5==0:
#         l1.append(x*x*x)
# print(l1)


# string="i want to become a data scientist"
# count,i=0,0
# while i<len(string):
#     if string[i]=='a' or string[i]=='e' or string[i]=='i' or string[i]=='o' or string[i]=='u':
#         count=count+1
#     i=i+1
# print("The no. of vewel in the given string is : ",count)
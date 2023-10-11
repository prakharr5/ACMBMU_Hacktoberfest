list= eval(input('enter list'))

n = len(list)

if( n%2 != 0 ):
  print ("List has ODD number of elements.")
  exit()

list1 = list [0:n/2]

list2 = list [n/2:n]

print ("list : ",list)
print ("list1: ",list1)
print ("list2: ",list2)

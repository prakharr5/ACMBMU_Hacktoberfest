import math



print("select operation.")
print("1. Add")
print("2. Subtract")
print("3.Multiply")
print("4. Divide")
print("5. percentage")
print("6. sin")
print("7. cos")
print("8. tan")
print("9. log")
print("10. factorial")
print("11. Square Root")
print(("12. exponent\n"))

while True:
    choice = input("Enter choice(1,2,3,4,5,6,7,8,9,10,11,12):")
    if choice in ('1','2','3','4','5','6','7','8','9','10','11','12'):
       
        
        if choice == '1':
            
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(num1,"+",num2,"=",num1+num2)
            
        elif choice == '2':
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(num1,"-",num2,"=",num1-num2)
            
        elif choice == '3':
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(num1,"*",num2,"=",num1*num2)
            
        elif choice == '4':
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
            print(num1,"/",num2,"=",num1/num2)
            
        elif choice == '5':
            x= int(input('enter the no. '))
            y= int(input('enter the total no. from which percentage will be calculated'))
            print((x/y)*100,'%')

        elif choice == '6':
            x = float(input("Enter the number: "))
            print(math.sin(x))

        
        elif choice == '7':
            x = float(input("Enter the number: "))
            print(math.cos(x))

        
        elif choice == '8':
            x = float(input("Enter the number: "))
            print(math.tan(x))

        
        elif choice == '9':
            x = float(input("Enter the number: "))
            print(math.log(x))

        
        elif choice == '10':
            x = int(input("Enter the number: "))
            print(math.factorial(x))

        
        elif choice == '11':
            x = int(input("Enter the number: "))
            print(math.isqrt(x))

        
        elif choice == '12':
            x = int(input("Enter the number: "))
            y = int(input("Enter the power: "))
            
            print(x**y)
    
        break
    else:
            print("Invalid Input")

            

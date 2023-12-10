#Write a Python program that computes the net amount of a bank account based a 
#transaction log from console input. The transaction log format is shown as following: D 100 W 
#200 (Withdrawal is not allowed if balance is going negative. Write functions for withdraw and 
#deposit) D means deposit while W means withdrawal. Suppose the following input is supplied to 
#the program: D 300, D 300 , W 200, D 100 Then, the output should be: 500

def Deposit(num):
    global balance
    balance = balance + num
    
def Withdraw(num):
    global balance
    if(balance > num):
        balance = balance - num
    else:
        print("Insufficiant Balance")
        
list1 = []
list2 = []
balance = 0
Number = 4
i = 0

while True:
    Transaction = input("Enter Transaction details :")
    if( Transaction == "Exit"):
        break
    list1.append(Transaction)
    Amount = int(input("Amount :"))
    list2.append(Amount)
    i+1
    if(i == Number):
        break

print(list1,list2)

for i in range(Number):
    if(list1[i] == 'D'):
        Deposit(int(list2[i]))
    elif(list1[i]== 'W'):
    	Withdraw(int(list2[i]))
    else:
        break
    
print("Balance is :", balance)

addition=[];

def a():
    
     ad=input("type a task: ")
     addition.append(ad)    
     return 0    
 
def view():
    if len(addition)==0:
        print("no task") 
    else:    
        for b in range(len(addition)):
            print(b,addition[b]) 
        
def re():
    c=int(input("enter the line number want to remove: "))
    if c<=len(addition):
           print("enter a vaild number") 
    else:
        addition.pop(c) 
              
def display():
    print("\nWHAT WOULD YOU LIKE TO DO") 
    print(" to view tasks type view") 
    print(" to add a task type add") 
    print("to remove a task type remove")     

while(True):     
    display();
    t=input();
    if t=="view":
        view(); 
    elif t=="add":
        a();
    elif t=="remove":
        re();     
    else:
        print("inccorect command")
 

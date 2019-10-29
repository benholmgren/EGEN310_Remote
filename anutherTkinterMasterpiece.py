from tkinter import *
 
root = Tk()
root.title("EGEN 310 Group E7 Controls to the Ultimate Vessel")
root.geometry("1000x500")
 
logo = PhotoImage(file="msu icon_small.png").subsample(2)
logo.grid(column=10, row=5)

nlbl = Label(root, text="howdy")
nlbl.grid(column=2, row=0)
 
def clicked():
 
    lbl.configure(text="Button was clicked !!")
 
btn = Button(root, text="Click Me", command=clicked)
 
btn.grid(column=1, row=0)
 
window.mainloop()
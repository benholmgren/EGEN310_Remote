import tkinter as tk
from tkinter.ttk import Frame, Label, Style

#config window (called root)
root = tk.Tk()
root.title("EGEN 310 Group E7 Controls to the Ultimate Vessel")
root.geometry("1000x500")


logo = tk.PhotoImage(file="msu icon_small.png").subsample(2)
import tkinter as tk

root.configure(background='blue')

w1 = tk.Label(root, image=logo).pack(side="right")


explanation = """  EGEN 310 Group E7 Controls to the Ultimate Vessel  \n"""

w2 = tk.Label(root, justify=tk.LEFT, padx = 10, text=explanation).pack(side="left")

pine = tk.PhotoImage(file="ultimate_pine.png").subsample(2)


w3 = tk.Label(root, image=pine).pack(side="right")

racecarship = tk.PhotoImage(file="racepirate.png").subsample(5)

w4 = tk.Label(root, image=racecarship).pack(side="left")


def write_forward():
    print("Going Forward")
    
def write_stop():
    print("Stopping")
    
def write_goLeft():
    print("Left 15 degrees")
    
def write_goRight():
    print("Right 15 degrees")
    
def write_reverse():
    print("Going backward")
    

forward = tk.Button(root,
                   text="Forward",
                   command=write_forward)
forward.pack(side=tk.TOP)

stop = tk.Button(root, text="STOP", fg="red", command=write_stop)
stop.pack(side=tk.TOP)

reverse = tk.Button(root, text="Reverse", fg="green", command=write_reverse)
reverse.pack(side=tk.TOP)

turn_right = tk.Button(root, text="Right", command=write_goRight)
turn_right.pack(side=tk.TOP)

turn_left = tk.Button(root, text="Left", command=write_goLeft)
turn_left.pack(side=tk.TOP)








root.mainloop()
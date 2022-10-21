from tkinter import *
root =Tk()
root.title("Dice Roller")

Dice = {
0 : '🎲',
1 : '⚀',
2 : '⚁',
3 : '⚂',
4 : '⚃',
5 : '⚄',
6 : '⚅'
}

lb1 = Label(root,text=Dice[0],font=('Times',100))
lb1.grid(row=0,column=0,padx=40)

def roll():
    from random import randint
    dice_choice = randint(1, 6)

    dice_lbl = Label(root, text=Dice[dice_choice], font=('Times', 100), width=2)
    dice_lbl.grid(row=0, column=0, padx=40)

roll_button=Button(root,text='Roll',command=roll)
roll_button.grid()

root.mainloop()

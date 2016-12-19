from tkinter import *

janela = Tk()

lb1 = Label(janela, text="Label1", bg="green")
lb2 = Label(janela, text="Label2", bg="red")
lb3 = Label(janela, text="Label3", bg="yellow")
lb4 = Label(janela, text="Label4", bg="blue")

lb2.pack()
lb1.pack()
lb3.pack()
lb4.pack(side=BOTTOM)

janela.geometry("400x300+200+200")
janela.mainloop()
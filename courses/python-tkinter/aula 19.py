from tkinter import *

janela = Tk()

lb1 = Label(janela, width=15, height=6, bg="red")
lb2 = Label(janela, width=15, height=6, bg="blue")
lb3 = Label(janela, width=15, height=6, bg="black")
lb4 = Label(janela, width=15, height=6, bg="yellow")
lb5 = Label(janela, height=3, bg="green")
lb6 = Label(janela, width=5, bg="pink")

lb1.grid(row=0, column=0)
lb2.grid(row=1, column=0)
lb3.grid(row=0, column=1)
lb4.grid(row=1, column=1)

lb5.grid(row=2, column=0, columnspan=2, sticky=W+E)
lb6.grid(row=0, column=2, rowspan=2, sticky=N+S)

janela.geometry("500x300+100+100")
janela.mainloop()
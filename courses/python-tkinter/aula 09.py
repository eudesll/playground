from tkinter import *

def bt_click():
	print("bt_click")
	
	if (str(ed1.get()).isnumeric() and str(ed2.get()).isnumeric()):
		num1 = int(ed1.get())
		num2 = int(ed2.get())

		lb["text"] =  num1 + num2 
	else:
		lb["text"] = "Valores informados inválidos."


janela = Tk()

ed1 = Entry(janela)
ed1.place(x=100, y=100)

ed2 = Entry(janela)
ed2.place(x=100, y=130)

bt = Button(janela, text="SOMA", width=20, command=bt_click)
bt.place(x=100, y=150)

lb = Label(janela, text="Resultado")
lb.place(x=100, y=200)

janela.geometry("400x300+200+200")
janela.mainloop()
import datetime
import time
import tkinter as tk
from PIL import Image, ImageDraw, ImageFont

def HoraFecha():
    while True:
        horaActual = datetime.datetime.now()

        horaNueva = horaActual.strftime("%H:%M:%S")

        FechaActual = datetime.datetime.now()
        
        DemostrarFecha = FechaActual.strftime("%Y/%m/%d")
        
        print("\r" + DemostrarFecha + " " + horaNueva, end="", flush = True)
        
        time.sleep(1)

#Reloj con pinturillon de PITON

def FechaHora():
    hora = datetime.datetime.now().strftime("%H:%M:%S")
    fecha = datetime.datetime.now().strftime("%Y/%m/%d") 
    Reloj.config(text=fecha + " " + hora)
    ventana.after(1000,FechaHora)

ventana = tk.Tk()

ventana.title("RELOJASO")

Reloj = tk.Label(ventana, font=('Roman' , 40 , 'bold'), bg = 'White')
Reloj.pack(fill='both', expand=True)

FechaHora()
ventana.mainloop()

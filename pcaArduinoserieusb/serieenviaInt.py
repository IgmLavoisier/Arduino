import serial,time

def proceso():
    while True:
        for puerto in range(0,7):
            try:
                arduino = serial.Serial('/dev/ttyUSB'+str(puerto), 30000)
                break
            except serial.serialutil.SerialException:
                if puerto==6:
                    print("cerrado "+str(puerto) )
                    return()
        print( puerto )
        while True:
            #time.sleep(1)
            for x in range(10):
                try:
                    #cadena =
                    arduino.write(bytes(str(x),'utf-8') )
                    print(str(x))
                    time.sleep(0.1)
                    
                except serial.serialutil.SerialException:
                    print(" conexion perdida")
                    return()
                #if '00' in cadena.decode('UTF8'):
                #print(cadena.decode('UTF8')  )
        arduino.close()



proceso()
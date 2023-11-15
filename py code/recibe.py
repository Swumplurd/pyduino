import serial, time
arduino = serial.Serial('COM5', 9600)
time.sleep(2)
String = arduino.readline()
print(String)
arduino.close
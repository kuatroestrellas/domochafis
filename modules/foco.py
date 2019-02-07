
moduleName = "foco"

commandWords = ["foco"]
import serial

ser=serial.Serial('/dev/ttyACM0', 9600)
def execute(command):
    ser.write("3")
    return
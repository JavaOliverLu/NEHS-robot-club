from djitellopy import tello
import PY as kb

kb.init()
drone = tello.Tello()
drone.connect()
drone.streamon()

def getKeyboardPressed():
     move = 100
     lr, fb, ud, zc = 0,0,0,0

     if kb.keyPressed("a"): lr=move
     elif kb.keyPressed('d'):lr=-move
     else:lr=0
     if kb.keyPressed("w"):fb=move
     elif kb.keyPressed('s'):fb=-move
     else:fb=0
     if kb.keyPressed("i"):ud = move
     elif kb.keyPressed('k'):ud = -move
     else:ud=0
     if kb.keyPressed("j"):zc = move
     elif kb.keyPressed('l'):zc = -move
     else:zc=0

     if kb.keyPressed('y'):drone.land()
     if kb.keyPressed('u'):drone.takeoff()

     return[lr, fb, ud, zc]

while True:
    value=getKeyboardPressed()
    drone.send_rc_control(value[0],value[1],value[2],value[3])
    #sleep(0.05)

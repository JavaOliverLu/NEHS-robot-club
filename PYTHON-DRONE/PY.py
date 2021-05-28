import pygame

def init():
    pygame.init()
    basicset=pygame.display.set_mode((400,400))

def keyPressed(keyname):
    feedback=False
    for eve in pygame.event.get():pass
    keyInput=pygame.key.get_pressed()
    myKey=getattr(pygame,'K_{}'.format(keyname))
    if keyInput[myKey]:
        feedback=True
        pygame.display.update()
        return feedback

def main():
    if keyPressed("a"):
        print("☬   下去瞜")

if __name__=='__main__':
    init()
    while True:
        main()

type = float
output1 = main_queue
output2 = main_stack
source11 = queue
source21 = stack
source2 = list
source3 = mm

all:
	gcc -o $(output1)_$(type) $(output1)_$(type).c $(source11)_$(type).c $(source2)_$(type).c $(source3).c
	gcc -o $(output2)_$(type) $(output2)_$(type).c $(source21)_$(type).c $(source2)_$(type).c $(source3).c

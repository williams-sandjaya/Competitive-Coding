
/*python implementation

arr = [0] * 501; arr[0] = 1                                     # initialise an array of 501 ints and set first element to 1
DIV = 1298074214633706835075030044377087                        # this is the some_num

for i in range(1, 501):                                         # fill the array with appropriate values, like arr[0] = 1, arr[1] = arr[0] + 2^1 and so on ...
    arr[i] = (arr[i-1] + 2 ** i) % DIV

for turn in range(input()):
    print arr[input()]
    
*/

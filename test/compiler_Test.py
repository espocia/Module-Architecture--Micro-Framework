from MAGS.src import ArduinoCLI as board, Compiler, DigitalIn, DigitalOut, MotorOut
sketch = MotorOut.sweep(10)
arduino = board.get_board(board.search_board())
fqbn, port = arduino['Fqbn'], arduino['Port']
Compiler.compile(sketch, fqbn, port)

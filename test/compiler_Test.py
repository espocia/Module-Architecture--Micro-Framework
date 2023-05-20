from MAGS.src import ArduinoCLI as board, Compiler, DigitalOut
sketch = DigitalOut.chain(13, [50, 100, 500])
arduino = board.get_board(board.search_board())
fqbn, port = arduino['Fqbn'], arduino['Port']
Compiler.compile(sketch, fqbn, port)

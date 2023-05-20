import os
import platform
import subprocess


def compile(dir, fqbn, port):

    # Set the path to your arduino-cli binary
    operating_system = platform.system()

    if operating_system == 'Windows':
        ARDUINO_CLI = os.path.join(os.path.dirname(
            __file__), "windows-cli", "arduino-cli")
    else:
        ARDUINO_CLI = os.path.join(os.path.dirname(
            __file__), "linux-cli", "arduino-cli")

    # Set the path to your sketch
    DIR = dir
    # Set the name of your board
    BOARD_NAME = fqbn

    # Set the port to which your board is connected
    PORT = port

    # Compile the sketch
    compile_command = [ARDUINO_CLI, 'compile', '--fqbn', BOARD_NAME, DIR]
    subprocess.run(compile_command, check=True)

    # Upload the compiled sketch to the board
    upload_command = [ARDUINO_CLI, 'upload', '-p',
                      PORT, '--fqbn', BOARD_NAME, DIR]
    subprocess.run(upload_command, check=True)

import os
# ----- Utilitily functions ----
from .file_system_loader import file_system_load
from .file_system_loader import save_sketch
# ------------------------------


# ----- Digital Ouput Sketch Simple patterns --------
def sweep(pin):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "MotorsOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "MotorsOut", "MotorsOut.ino")
    base = 'SERVOOUT.ino'
    parameters = {
        'servo_pin': pin
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)

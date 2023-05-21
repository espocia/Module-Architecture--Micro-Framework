import os
# ----- Utilitily functions ----
from .file_system_loader import file_system_load
from .file_system_loader import save_sketch
# ------------------------------


# ----- Digital Ouput Sketch Simple patterns --------
def sweep(pin, angle=180):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "MotorsOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "MotorsOut_sweep", "MotorsOut.ino")
    base = 'SERVOOUT_sweep.ino'
    parameters = {
        'servo_pin': pin,
        'turn_angle': angle
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)


def push_sweep(servo_pin, btn_pin):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "MotorsOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "MotorsOut_push_sweep", "MotorsOut_push_sweep.ino")
    base = 'SERVOOUT_button.ino'
    parameters = {
        'servo_pin': servo_pin,
        'button_pin': btn_pin,
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)

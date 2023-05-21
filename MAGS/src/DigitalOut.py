import os
# ----- Utilitily functions ----
from .file_system_loader import file_system_load
from .file_system_loader import save_sketch
# ------------------------------


# ----- Digital Ouput Sketch Simple patterns --------
def chain(pin, delay=0):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "DigitalOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "DigitalOut_chain", "DigitalOut_chain.ino")
    base = 'PINOUT.ino'
    parameters = {
        'led_pin': pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)
# ------------------------------------


def cascade(pin, delay):
    """
    Generates Cascading Digital
    Signal Patterns
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "DigitalOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "DigitalOut_cascade", "DigitalOut_cascade.ino")
    base = 'PINOUTT_cacade.ino'
    parameters = {
        'led_pin': pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)
# ------------------------------------

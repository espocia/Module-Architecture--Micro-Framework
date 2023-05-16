# ----- Utilitily functions ----
from file_system_loader import file_system_load
from file_system_loader import save_sketch
# ------------------------------


# ----- Digital Ouput Sketch Simple patterns --------
def chain(pin, delay):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = './ArduinoTemplate/DigitalOut/'
    render_directory = './ArduinoRendered/DigitalOut_chain/DigitalOut_chain.ino'
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
    directory = './ArduinoTemplate/DigitalOut/'
    render_directory = './ArduinoRendered/DigitalOut_cascade/DigitalOut_cascade.ino'
    base = 'PINOUTT_cacade.ino'
    parameters = {
        'led_pin': pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)
# ------------------------------------


chain([11, 10, 9], [100, 200, 500])

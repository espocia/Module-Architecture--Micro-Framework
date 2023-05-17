from file_system_loader import file_system_load
from file_system_loader import save_sketch


def button(btn_pin, output_pin, delay=0):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = './ArduinoTemplate/DigitalOut/'
    render_directory = './ArduinoRendered/DigitalIn_btn/DigitalIn_btn.ino'
    base = 'PININ_btn.ino'
    parameters = {
        'led_pin': output_pin,
        'btn_pin': btn_pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)

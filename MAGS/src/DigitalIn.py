import os
# -------- Utility modules -----------
from .file_system_loader import file_system_load
from .file_system_loader import save_sketch
# ------------------------------------


def button(btn_pin, output_pin, delay=0):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "DigitalOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "DigitalIn_btn", "DigitalIn_btn.ino")
    base = 'PININ_btn.ino'
    parameters = {
        'led_pin': output_pin,
        'btn_pin': btn_pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)


def button_cascade(btn_pin, output_pin, delay=0):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "DigitalOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "DigitalIn_btn_cascade", "DigitalIn_btn_cascade.ino")
    base = 'PININ_btn_cascade.ino'
    parameters = {
        'led_pin': output_pin,
        'btn_pin': btn_pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)


def switch(btn_pin, output_pin, delay=0):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "DigitalOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "DigitalIn_switch_btn", "DigitalIn_switch_btn.ino")
    base = 'PININ_switch_btn.ino'
    parameters = {
        'led_pin': output_pin,
        'btn_pin': btn_pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)


def switch_cascade(btn_pin, output_pin, delay=0):
    """
    Generates Dynamic Arduino Skecth
    depending on the pins and delay
    initialization.
    """
    directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoTemplate", "DigitalOut")
    render_directory = os.path.join(os.path.dirname(
        __file__), "..", "ArduinoRendered", "DigitalIn_switch_cascade", "DigitalIn_switch_cascade.ino")
    base = 'PININ_switch_cascade.ino'
    parameters = {
        'led_pin': output_pin,
        'btn_pin': btn_pin,
        'pattern': delay
    }
    output = file_system_load(directory, base, parameters)

    return save_sketch(render_directory, output)

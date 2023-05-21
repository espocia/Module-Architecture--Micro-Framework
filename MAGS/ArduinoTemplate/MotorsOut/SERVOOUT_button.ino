{% set servo_pin = servo_pin %}
{% set button_pin =  button_pin %}
#include <Servo.h>

{% include 'utility/servo_objects.ino' %}

bool buttonPressed = false;   // flag to track button state
int pos = 0;

void setup() {
{% include 'setup_template/sweep_itebles_setup.ino'%}

{% if button_pin is iterable %}
  {% for pin in button_pin %}
  pinMode({{pin}}, INPUT_PULLUP);
  {% endfor %}
{% else %}
  pinMode({{button_pin}}, INPUT_PULLUP);  // configure the button pin as input with internal pull-up resistor
{% endif %}
  
}

void loop() {
  
{% if button_pin is iterable %}
  {% include 'loop_template/singel_button_sweep_counter.ino' %}
{% elif servo_pin is iterable  %}
  {% include 'loop_template/servo_iterables.ino' %}
{% else %}
  {% include 'loop_template/single_button_sweep_clockwise.ino'%}
{% endif %}
}

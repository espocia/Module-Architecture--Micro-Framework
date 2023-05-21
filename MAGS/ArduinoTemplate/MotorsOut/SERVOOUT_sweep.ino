
#include <Servo.h>

{% set servo_pin = servo_pin %}
{% set turn_angle = turn_angle %}

{% include 'utility/servo_objects.ino' %}

int pos = 0;    // variable to store the servo position

void setup() {
  
  {% include 'setup_template/sweep_itebles_setup.ino' %}
  
}

void loop() {
  
  {% include 'loop_template/sweep.loop'%}
}

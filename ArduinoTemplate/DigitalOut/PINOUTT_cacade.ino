{% set led_pin = led_pin %}
{% set pattern = pattern %}

void setup(){

{% include 'setup_template/setup_out.ino' %}
  
}

void loop(){

{% include 'loop_tamplate/PINOUT_cascade_loop.ino' %}

}

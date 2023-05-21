{% set led_pin = led_pin %}
{% set btn_pin = btn_pin %}
{% set pattern = pattern %}

{% include 'pinin/buttonState_iterables.ino' %}

void setup() {

{% include 'setup_template/setup_in.ino' %}
{% include 'setup_template/setup_out.ino' %}
  
}

void loop() {
  
  {% include 'loop_tamplate/PININ_btn_cascade.ino' %}
  
}

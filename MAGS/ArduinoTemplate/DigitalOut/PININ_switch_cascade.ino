{% set led_pin = led_pin %}
{% set btn_pin = btn_pin %}

boolean lastButton = LOW;
boolean ledOn = false;

void setup (){

{% include 'setup_template/setup_out.ino' %}
{% include 'setup_template/setup_in.ino' %}

}

void loop (){
  {% include 'loop_tamplate/PININ_switch_cascade.ino' %}
}

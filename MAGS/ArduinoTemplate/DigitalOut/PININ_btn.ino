
{% set led_pin = led_pin %}
{% set btn_pin = btn_pin %}
{% set pattern = pattern %}

{% include 'pinin/buttonState_iterables.ino' %}

void setup() {

{% include 'setup_template/setup_in.ino' %}
{% include 'setup_template/setup_out.ino' %}
  
}

void loop() {

{% include 'pinin/buttonState_iterable_digitalRead.ino' %}

  if (buttonState == HIGH) {
  
  {% if led_pin is iterable %}
    {% include 'pinout/led_pin_true.ino' %} 
  {% else %}
    digitalWrite({{led_pin}}, HIGH);    // Turn on the LED if the button is pressed
  {% endif %}
    
  } else {
    
  {% if led_pin is iterable%}
    {% include './pinout/led_pin_false.ino' %}
  {% else %}
    digitalWrite({{led_pin}}, LOW);
  {% endif %}
    
  }
}

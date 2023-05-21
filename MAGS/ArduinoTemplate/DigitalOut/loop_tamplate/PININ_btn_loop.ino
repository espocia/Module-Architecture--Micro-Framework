{% block loop %}
{% include 'pinin/buttonState_iterable_digitalRead.ino' %}

  if (buttonState == HIGH) {
  
  {% include 'loop_tamplate/PINOUT_loop.ino' %}
    
  } else {
    
  {% if led_pin is iterable%}
    
    {% include 'pinout/led_pin_false.ino' %}
    
  {% else %}
    digitalWrite({{led_pin}}, LOW);
  {% endif %}
    
  }
  {% endblock %}

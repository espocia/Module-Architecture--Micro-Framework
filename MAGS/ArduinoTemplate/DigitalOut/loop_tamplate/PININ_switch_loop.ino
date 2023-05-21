{% block loop %}
  if (digitalRead({{btn_pin}}) == HIGH && lastButton == LOW){
    ledOn = !ledOn;
    lastButton = HIGH;
  }
  else{
    lastButton = digitalRead({{btn_pin}});
  }

  if(ledOn){
  
  {% include 'loop_tamplate/PINOUT_loop.ino' %}
  
  }else{
    {% include 'pinout/led_pin_false.ino' %}
  }
{% endblock %}

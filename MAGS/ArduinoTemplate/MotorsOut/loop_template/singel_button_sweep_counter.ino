// clockwise button toggle servo sweep
{% block single_button_sweep %}
  while (digitalRead({{button_pin[0]}}) == HIGH && pos < 180) {
    pos++;
    
    {% if servo_pin is iterable %}
      for( int i = 0; i < {{servo_pin|length}}; i++){
          myservo[i].write(pos);
        }
    {% else %}
      myservo.write(pos);
    {% endif %}
    
    delay(15);
  }
  while (digitalRead({{button_pin[1]}}) == HIGH && pos > 0) {
    pos--;
    
    {% if servo_pin is iterable %}
      for( int i = 0; i < {{servo_pin|length}}; i++){
          myservo[i].write(pos);
        }
    {% else %}
      myservo.write(pos);
    {% endif %}
    
    delay(15);
  }
{% endblock %}

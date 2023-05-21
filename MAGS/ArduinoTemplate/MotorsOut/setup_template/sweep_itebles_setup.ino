
// attach servo pins ( check if iterable or not)
{% block sweep_setup %}
  {% if servo_pin is iterable %}
    {% for pin in servo_pin%} 
      myservo[{{loop.index - 1}}].attach({{pin}});
    {% endfor %}
  {% else%}
    myservo.attach({{servo_pin}});  // attaches the servo on pin 9 to the servo object
  {% endif%}
{% endblock%}

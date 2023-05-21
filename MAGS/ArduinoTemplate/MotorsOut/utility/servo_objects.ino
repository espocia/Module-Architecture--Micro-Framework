// makes servo object (check if servo object is itrable  or not)
{% block servo_object %}
  {% if servo_pin is iterable %}
    Servo myservo[{{servo_pin|length}}];  
  {% else %}
    Servo myservo;  
  {% endif%}
{% endblock %}

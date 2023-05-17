{% block led_pin_true %}
  {% for pin in led_pin %}
    digitalWrite({{pin}}, false);
  {% endfor %}
{% endblock %}

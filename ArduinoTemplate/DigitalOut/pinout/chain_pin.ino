{% block chain_pin %}
  {% for pin in led_pin %}
    digitalWrite({{ pin }}, HIGH);
    delay({{ pattern }});
    digitalWrite({{ pin }}, LOW);
    delay({{  pattern }});
  {% endfor %}
{% endblock%}

{% block chain_none %}
  digitalWrite({{ led_pin }}, HIGH);
  delay({{ pattern }});
  digitalWrite({{ led_pin }}, LOW);
  delay({{  pattern }});
{% endblock %}

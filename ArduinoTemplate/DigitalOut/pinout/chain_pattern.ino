{% block chain_pattern %}
  {% for delay_time in pattern %}
    digitalWrite({{ led_pin }}, HIGH);
    delay({{ delay_time }});
    digitalWrite({{ led_pin }}, LOW);
    delay({{  delay_time}});
  {% endfor %}
{% endblock %}

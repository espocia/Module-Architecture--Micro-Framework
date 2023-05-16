{% block chain_all %}
  
  {% for pin in led_pin %}
    {% for delay_time in pattern %}

      digitalWrite({{ pin }}, HIGH);
      delay({{ delay_time }});

    {% endfor %}
  {% endfor %}
  
  {% for pin in led_pin %}
    {% for delay_time in pattern %}

      digitalWrite({{ pin }}, LOW);
      delay({{ delay_time }});

    {% endfor %}
  {% endfor %}

{% endblock %}

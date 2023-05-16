{% block button_itrable_digitalRead %}
  {% if btn_pin is iterable %} 
    {% for pin in btn_pin %} 
      buttonState[{{ loop.index - 1}}] = digitalRead({{ pin }})
    {% endfor %} 
  {% else %}
    buttonState = digitalRead({{ btn_pin }});   // Read the state of the button
  {% endif %}
{% endblock %}

{% block buttonState_iterable %}
  
  {% if btn_pin is iterable %}
    int buttonState[{{btn_pin|length}}];
    for( int i = 0; i < buttonState.length; i++){
      buttonState[i] = 0
    }
  {% else %}
    int buttonState = 0;       // Variable to store the button state
  {% endif %}

{% endblock %}

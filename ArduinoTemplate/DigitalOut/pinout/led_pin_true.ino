{% block led_pin_true %}
  {% if not pattern is iterable and pattern == 0 %}
  {% for pin in led_pin %}
    digitalWrite({{pin}}, true);
  {% endfor %}
  
  {% else %}
    
    {% for pin in led_pin%}
      {% for delay in pattern %}
        
        digitalWrite({{pin}}, true);
        delay({{delay}});
      
      {% endfor%}
    {% endfor %}
    
    {% for pin in led_pin%}
      {% for delay in pattern %}
        
        digitalWrite({{pin}}, false);
        delay({{delay}});
      
      {% endfor%}
    {% endfor %}
    
  {% endif %}
  
{% endblock %}

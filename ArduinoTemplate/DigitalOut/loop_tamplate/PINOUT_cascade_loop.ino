{% block loop %}
  
  {% if led_pin is iterable and patter is iterable %}
    
    {% include 'pinout/cascade_all.ino' %}
    
  {% else %}
  
    {% include 'pinout/cascade_pattern.ino' %}
  
  {% endif %}

{% endblock %}


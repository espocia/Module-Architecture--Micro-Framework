{% block setup %}
    {% if led_pin is iterable %}
    
        {% for pin in led_pin %}
        
        pinMode({{ pin }}, OUTPUT);
        
        {% endfor %}
        
        {% else %}
        
        pinMode({{ led_pin}}, OUTPUT);
    
    {% endif %}
{% endblock %}

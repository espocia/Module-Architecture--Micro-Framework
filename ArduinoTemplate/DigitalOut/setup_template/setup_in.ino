{% block setup %}
    {% if btn_pin is iterable %}
    
        {% for pin in btn_pin %}
        
        pinMode({{ pin }}, INPUT);
        
        {% endfor %}
        
        {% else %}
        
        pinMode({{ btn_pin }}, INPUT);
    
    {% endif %}
{% endblock %}

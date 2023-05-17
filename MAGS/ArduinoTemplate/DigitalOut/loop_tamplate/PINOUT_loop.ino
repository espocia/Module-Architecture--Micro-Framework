{% block loop %}
{% block chain %}
    {% if pattern is iterable and led_pin is iterable%}
    
        {% include 'pinout/chain_all.ino' %}
    
    {% elif  pattern is not iterable and led_pin is iterable %}
        
        {% include 'pinout/chain_pin.ino' %}
        
    {% elif  pattern is iterable and led_pin is  not iterable %}
    
        {% include 'pinout/chain_pattern.ino' %}

    {% else %}
            
        {% include 'pinout/chain_none.ino' %}
            
    {% endif %}
    {% endblock %}
    
{% endblock %}

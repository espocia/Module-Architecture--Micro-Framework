// clockwise button toggle servo sweep
{% block single_button_sweep %}
  // Check if the button is pressed
  if (digitalRead({{button_pin}}) == LOW) {
    // Button is pressed, move the servo
    buttonPressed = true;
    myservo.write(90);   // Set servo to a desired position (e.g., 90 degrees)
  }
  
  // Check if the button is released
  if (digitalRead({{button_pin}}) == HIGH && buttonPressed) {
    // Button is released, stop the servo
    buttonPressed = false;
    myservo.write(0);   // Set servo to stop position (e.g., 0 degrees)
  }
{% endblock %}

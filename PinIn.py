import jinja2


def trigger_all(trig, echo, target, dist):
    dir = './ArduinoTemplate/stash/rendered_pinin/rendered_pinin.ino'

# Define the parameters for the template
    trigPin = trig
    echoPin = echo
    targetPin = target
    targetDist = dist

# Load the Jinja template
    template_loader = jinja2.FileSystemLoader(
        searchpath="./ArduinoTemplate/LED/pinin/")
    template_env = jinja2.Environment(loader=template_loader)
    template = template_env.get_template("PININ_all.ino")

# Render the template with the parameters
    output_text = template.render(
        trigPin=trigPin, echoPin=echoPin, targetPin=targetPin, targetDist=targetDist)

# Save the output to a file
    with open(dir, "w") as output_file:
        output_file.write(output_text)
    print("Sketch generated")
    return dir


def trigger_chain(trig, echo, target, dist, delay):
    dir = './ArduinoTemplate/stash/rendered_pinin/rendered_pinin.ino'

# Define the parameters for the template
    trigPin = trig
    echoPin = echo
    targetPin = target
    targetDist = dist
    pattern = delay

# Load the Jinja template
    template_loader = jinja2.FileSystemLoader(
        searchpath="./ArduinoTemplate/LED/pinin/")
    template_env = jinja2.Environment(loader=template_loader)
    template = template_env.get_template("PININ_all.ino")

# Render the template with the parameters
    output_text = template.render(
        trigPin=trigPin, echoPin=echoPin, targetPin=targetPin, targetDist=targetDist, pattern=pattern)

# Save the output to a file
    with open(dir, "w") as output_file:
        output_file.write(output_text)
    print("Sketch generated")
    return dir

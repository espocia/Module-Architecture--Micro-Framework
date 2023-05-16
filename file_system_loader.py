
from jinja2 import Environment
from jinja2.loaders import FileSystemLoader


def file_system_load(template_directory, base_tamplet, parameters):
    """
    Renders Arduino sketch
    returns the rendered template
    with passed in paramters.
    """
    file_loader = FileSystemLoader(template_directory)
    env = Environment(loader=file_loader)
    template = env.get_template(base_tamplet)

    return template.render(**parameters)


def save_sketch(render_directory, sketch_to_render):
    """
    Saves rendered Arduino sketch
    to target directory.
    returns rendered sketch directory.
    """
    with open(render_directory, 'w', encoding='utf-8') as file:
        file.write(sketch_to_render)
    return render_directory

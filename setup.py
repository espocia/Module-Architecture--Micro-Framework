from setuptools import setup, find_packages

setup(
    name="MAGS",
    version="0.0.0",
    packages=find_packages(),
    package_data={
        '': ['*.txt', '*.md'],
        'MAGS': [
            'ArduinoRendered/**/*',
            'ArduinoTemplate/**/*.ino'
        ]
    },
    include_package_data=True,
    # Rest of the setup configuration...
)

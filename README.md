# Module-Architecture Arduino Framework
Micro Framework For Dynamic Sketch Generation for Arduino Micro-Controlllers
# Dependency Installation for Windows

These instructions will guide you through setting up the necessary dependencies, including Python, pip, Chocolatey, Arduino CLI, and Jinja2, on Windows.

## Prerequisites

- Windows operating system.
- PowerShell with administrative privileges.

## Installation Steps

1. Install Python and pip:

   - Download the latest version of Python from the official website: [https://www.python.org/downloads/](https://www.python.org/downloads/).
   - Run the installer and select the option to "Add Python to PATH" during the installation process.

2. Install Chocolatey:

   - Open a PowerShell terminal with administrative privileges.
   - Run the following command to install Chocolatey:
     ```powershell
     Set-ExecutionPolicy Bypass -Scope Process -Force; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
     ```

3. Install Arduino CLI using Chocolatey:

   - In the same PowerShell terminal, run the following command to install Arduino CLI:
     ```powershell
     choco install arduino-cli
     ```

4. Set the `ARDUINO_CLI` environment variable:

   - Open a new PowerShell terminal or restart the current terminal to ensure it recognizes the environment variable.
   - Run the following command to set the `ARDUINO_CLI` environment variable to the location of the Arduino CLI executable:
     ```powershell
     $arduinoCliPath = (Get-Command arduino-cli).Source.Replace("\arduino-cli.exe", "")
     [Environment]::SetEnvironmentVariable("ARDUINO_CLI", $arduinoCliPath, "User")
     ```

5. Install Jinja2:

   - In the PowerShell terminal, run the following command to install Jinja2 using Python's package manager pip:
     ```powershell
     pip install jinja2
     ```

6. Verify the installations and environment variable:

   - Close and reopen the PowerShell terminal to ensure the changes take effect.
   - Run the following commands to verify that Python, pip, Arduino CLI, and Jinja2 have been installed successfully, and the `ARDUINO_CLI` environment variable is set:
     ```powershell
     python --version
     pip --version
     arduino-cli version
     python -c "import jinja2"
     ```
     You should see the respective version numbers and information displayed in the terminal without any errors.

## Usage

- With the dependencies installed, you can now use Arduino CLI and Jinja2 in your projects.
- Access the `ARDUINO_CLI` environment variable in your Python scripts using `os.environ.get('ARDUINO_CLI')`.
- Utilize Jinja2 templates in your Python code to generate dynamic content.

## Contributing

Contributions are welcome! If you encounter any issues or have suggestions, please feel free to open an issue or submit a pull request in this repository.



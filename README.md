# Module-Architecture Arduino Framework
Micro Framework For Dynamic Sketch Generation for Arduino Micro-Controlllers


These instructions will guide you through setting up the necessary dependencies, including Python, pip, Chocolatey, Arduino CLI, and Jinja2, on Windows.

## Prerequisites

- Windows operating system.
- PowerShell with administrative privileges.

# Dependency Installation for Windows

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
     
## Installation Steps

1. Download and unzip the repository:

   - Click on the "Code" button and select "Download ZIP" to download the repository as a zip file.
   - Extract the contents of the zip file to a directory of your choice.

2. Open a PowerShell terminal:

   - Open a PowerShell terminal with administrative privileges.

3. Change to the directory of the unzipped repository:

   - In the PowerShell terminal, navigate to the directory where you extracted the contents of the zip file:
     ```powershell
     cd path/to/your/repository
     ```

4. Install the package using pip:

   - After the build process completes, run the following command to install the package using pip:
     ```powershell
     python -m pip install .
     ```

## Usage

To use the installed package, you can launch the Python interpreter and import the package as follows:

1. Open a terminal or command prompt.
2. Launch the Python interpreter by typing `python` or `python3`, depending on your Python installation.
3. In the Python interpreter, import the package using its name:
   ```python
   import MAGS.src
   
## Contributing

Contributions are welcome! If you encounter any issues or have suggestions, please feel free to open an issue or submit a pull request in this repository.



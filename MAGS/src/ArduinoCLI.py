import subprocess


def search_board():
    """ Searches for the arduino boards connected. """
    # Run the "arduino-cli board list" command
    result = subprocess.run(
        ['arduino-cli', 'board', 'list'], capture_output=True, text=True)
    if len(result.stdout) > 20:
        return result
    print("no boards found")
    return None


def get_board(result):
    """ Extracts the information returned by the search method. """
    # Define dictionary keys with default values
    thisdict = {
        "Port": "",
        "Protocol": "",
        "Type": "",
        "Board": "",
        "Name": "",
        "Fqbn": "",
        "Core": ""
    }
    # Check the return code to see if the command was successful
    if len(result.stdout) > 20:
        # Print the output of the command

        # Write output to file
        with open("log.txt", "w") as file:
            file.write(result.stdout)

        # Extract board information and update dictionary values
        board_info = result.stdout.splitlines()[1].split()
        thisdict["Port"], thisdict["Protocol"], *thisdict["Type"], \
            thisdict["Board"], thisdict["Name"], thisdict["Fqbn"], thisdict["Core"] = board_info

        return thisdict
    # Print the error message if the command failed
    return None

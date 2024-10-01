FROM gitpod/workspace-full:latest

# Install Qt 5
RUN sudo apt-get update && sudo apt-get install -y qt5-default qtcreator

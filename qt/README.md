# Prerequisites installation

```console
sudo apt install -y qtcreator qtbase5-dev qt5-qmake cmake build-essential
```

After installation, we create que Qt proj file. 

```console
qmake -project
```

And we edit the project file `<project>.proj` to add the line

```console
QT += widgets
```

# Compilation and execution

```console
qmake
make
/QthelloWorld
```


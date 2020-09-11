# square-root

A simple task for training to write in production-like style with full documentation and some unit-tests

### Clone

- Clone this repo to your local machine using `git clone https://github.com/ubsefor/square-root`

  

## Dependencies

**Mac OS**

You need to install xcode command-line tools to build the project

**\*Nix**

Get generic build-essentials for your distro, f.e.

Ubuntu and Debian-like: 

```shell
$ sudo apt update
$ sudo apt install build-essential
```

RPM Linux distros (Fedora):

```shell
$ sudo dnf install make automake gcc gcc-c++ kernel-devel
```

Arch-like Linux distros:

```shell
$ sudo pacman -Sy base-devel
```



## Building

**Mac OS X**

If you are running Mac OS X on your host machine, run from the root folder of the repo:

Release:
```shell
$ xcodebuild -configuration Release
```

Debug:
```shell
$ xcodebuild -configuration Debug
```

**Linux/BSD/Other \*NIX**

If you are running  \*Nix distributions on your host machine  – run from the square-root directory (cd square-root):

Release:
```shell
$ make release
```

Debug:
```shell
$ make debug
```


## License 

See the [License](LICENSE)


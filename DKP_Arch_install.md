# DevKitPro

----

DevKitPro (DKP) is a powerful Developer Kit for consoles >32bit of Nintendo this project

for install this Devkit, you can follow the guide by [Devwiki](https://devkitpro.org/wiki/Main_Page).

DKP contain libraries that it provide make files, templates of projects, tools of console fix software, for work with his tools i recommend mount a symbolic file with a folder of DKP into folder of your project, to way for consult libraries and learn to domain for dev kit.

in case of try install devkit in Archlinux system that have a pacman as main package manager the process is relative simple.

First you need set a Enviroment Variables 

```ENVIVARS
DEVKITPRO=/opt/devkitpro
DEVKITARM=/opt/devkitpro/devkitARM
DEVKITPPC=/opt/devkitpro/devkitPPC
```

Second import a secure keys for pacman

```bash
sudo pacman-key --recv BC26F752D25B92CE272E0F44F7FD5492264BB9D0
sudo pacman-key --lsign BC26F752D25B92CE272E0F44F7FD5492264BB9D0
```

then install some keys

```bash
sudo pacman -U https://downloads.devkitpro.org/devkitpro-keyring-r1.787e015-2-any.pkg.tar.xz
```

add in the config file of pacman /etc/pacman.conf this custom servers

```pacman.conf
# An example of a custom package repository.  See the pacman manpage for
# tips on creating your own repositories.
#[custom]
#SigLevel = Optional TrustAll
#Server = file:///home/custompkgs

[dkp-libs]
Server = https://downloads.devkitpro.org/packages

[dkp-linux]
Server = https://downloads.devkitpro.org/packages/linux

```

finally re sync the database and update packages

```bash
sudo pacman -Syu
```

in case of install some devkit here names of packages

```
- gp32-dev
- gba-dev 
- nds-dev
- 3ds-dev
- gamecube-dev
- wii-dev
- wiiu-dev
- switch-dev
```

and the installation process is same for typically package for archlinux

```bash
sudo pacman -S gba-dev
```


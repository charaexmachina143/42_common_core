This project has been created as part of the 42 curriculum by doberste.

Born2beroot

Description

Born2beroot is a system administration project focused on learning how to install, configure, and secure a Linux server inside a virtual machine. The goal is to understand the basics of operating systems, user management, networking, and security by building a minimal but functional system from scratch.

This project simulates a real server environment where stability, security, and good system organization are essential.


---

Instructions

Requirements

VirtualBox (or UTM on macOS)

Debian ISO

2 GB RAM minimum

8 GB disk space


Installation

Create a new virtual machine.


Attach the Debian ISO and start the installer.


Use manual partitioning and set up LVM with a separate /home partition.


Finish the installation and reboot.



Services

The following services were installed and configured:

SSH for secure remote access

UFW as a basic firewall


Connect via SSH

ssh username@localhost


---

Project Design Choices

Operating System: Debian

Debian was chosen for its strong stability, large community, and long-term support. It is commonly used in server environments and prioritizes reliability over frequent feature updates.

Partitioning

Using LVM with a separate /home partition helps keep user data isolated from system files and makes future disk management easier.

Security & Users

Strong password rules were applied, and switching the passowrd every 7 days is enforced

A non-root user was added to the sudo group

Root login via SSH was disabled

UFW was enabled to allow only required ports



---

Comparisons

Debian vs Rocky Linux

Debian: Community-driven, very stable, flexible, widely used for servers and general systems

Rocky Linux: Enterprise-focused, compatible with Red Hat systems, often used in production environments


AppArmor vs SELinux

AppArmor: Easier to configure, path-based security model

SELinux: More powerful and flexible, label-based security model, but more complex


UFW vs firewalld

UFW: Simple and beginner-friendly

firewalld: More advanced and better suited for large or enterprise systems


VirtualBox vs UTM

VirtualBox: Cross-platform, easy to use, widely supported

UTM: macOS-focused, optimized for Apple Silicon



---

Resources

Debian Documentation: https://www.debian.org/doc/

LVM Guide: https://tldp.org/HOWTO/LVM-HOWTO/

OpenSSH Manual: https://www.openssh.com/manual.html

UFW Documentation: https://help.ubuntu.com/community/UFW


AI Usage

AI was used only to help structure and format this README file.


---

Author

doberste
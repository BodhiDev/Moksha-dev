# Efl-version

Efl_version is a simple CLI command to print the version of the Enlighenment Foundation Libraries installed.
It is intended for use in shell scripts that may need this information and is used one script that is installed by default in Bodhi.

## Usage

Usage is simple. There are no options and it only does one thing, prints the efl version:

```ShellSession
efl-version

```

## Dependencies

* The usual build tools,libtool, pkg-config, meson/ninja
* [evas: a part of EFL](https://www.enlightenment.org/download)

## Installation

On Bodhi efl-version is installed by default. But one can install it by:

```ShellSession
sudo apt update
sudo apt install efl-version

```

## Note

This program actually checks the version of Evas and asssumes all other compenents of the Enlighenment Foundation Libraries are the same version.
In cases where this may not be true its usage is not advised. This command is used internally by Bodhi Linux and in this case this assumption is always true.

## Reporting bugs

This program is rather simple so we expect no issues or bigs. But if you find any or have feature suggestions please use the GitHub issue tracker.

## Contributing

Help is always Welcome, as with all Open Source Projects the more people that help the better it gets!

Please submit patches to the code or documentation as GitHub pull requests!

Contributions must be licensed under the codes copyright (See the license of the code patched).

## Support This Project

Donations to [Bodhi Linux](https://www.bodhilinux.com/donate/) would be greatly appreciate and keep our distro moving along. But if you like the work we do for Bodhi and wish to see more of it, We'd be happy about a donation. You can either donate via [PayPall](https://www.paypal.com/paypalme/rbtylee) or [Patreon](https://www.patreon.com/c/bodhilinux).

## Credits

* Robert "ylee" Wiley

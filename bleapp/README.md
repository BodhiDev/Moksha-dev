# bleapps

A yad based dialog to make it easy to git clone all EFL Apps and bindings used, developed, maintained or of interest to Bodhi Developers.

Reguires: bash >= 4.3

Dependencies: yad and the [efl_version](https://github.com/BodhiDev/Moksha-dev/blob/master/misc/efl_version.c) program

This program clones all git repos to /scr. Your user must have permissions set to allow read and write access to this directory.

It is recommended to create a group siddha and the direcory /usr and set rw permissions to user root and group siddha.
Then add whatever users need access to this directory to the group siddha.

[![Screenshot](https://i.imgur.com/BI7EfRs.png)](https://i.imgur.com/5Hxm6am.png)

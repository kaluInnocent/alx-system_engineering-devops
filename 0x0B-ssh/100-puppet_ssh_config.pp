#!/usr/bin/env bash
#SSH client configuration to use the private key ~/.ssh/school and configured to refuse to authenticate using a password
file_line { 'ssh_config':
    ensure   => present,
    path     => '/etc/ssh/ssh_config',
    line     => 'PasswordAuthentication no',
    multiple => 'true'
}
file_line { 'ssh_config_2':
    ensure   => present,
    path     => '/etc/ssh/ssh_config',
    line     => 'IdentityFile ~/.ssh/school',
    multiple => 'true'
}

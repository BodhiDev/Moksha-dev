#### Project ####
project('bodhi-config-path', 'c',
        version: '0.1.1',
        meson_version: '>= 0.58.0')

#### Depends ####
dep_elm = dependency('elementary')
dep_eina = dependency('eina')

#### Source ####
config_path_src = [
  'src/elm-config-path.c',
]
config_profile_src = [
  'src/elm-profile-get.c',
]

### Install Script ###
install_data('src/bodhi-config-path',
  install_dir : get_option('bindir')
)

#### Targets ####
config_path_target = executable(
  'elm-config-path',
  config_path_src,
  dependencies: [dep_elm, dep_eina],
  install : true,
)

config_profile_target = executable(
  'elm-profile-get',
  config_profile_src,
  dependencies: [dep_elm, dep_eina],
  install : true,
)

### bash-completion ###
install_data('data/completions/bodhi-config-path',
  install_dir: get_option('datadir') / 'bash-completion/completions'
)

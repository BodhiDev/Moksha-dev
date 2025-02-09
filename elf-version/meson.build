#### Project ####
project('efl-version', 'c',
        version: '0.1.1',
        meson_version: '>= 0.58.0')

#### Evas ####
dep_evas = dependency('evas')

#### Source ####
project_src = [
  'src/efl_version.c'
]

#### Target ####
project_target = executable(
  meson.project_name(),
  project_src,
  dependencies: dep_evas,
  install : true,
)

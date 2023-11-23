fmt = dependency('fmt')

subdir('libapp')

app_sources = ['main.cpp']

executable('testapp',
    app_sources, 
    dependencies: [fmt],
    link_with: [libapp],
    install: true,
    install_dir: '/usr/local/apps' # override default install location 
)
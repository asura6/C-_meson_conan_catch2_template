fmt = dependency('fmt')

subdir('libapp')

app_sources = ['main.cpp']

executable('main',
    app_sources, 
    dependencies : [fmt],
    link_with: [libapp],
    install : true
)
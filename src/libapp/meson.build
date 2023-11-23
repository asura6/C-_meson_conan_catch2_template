fmt = dependency('fmt')
catch2 = subproject('catch2').get_variable('catch2_with_main_dep')

libapp_sources = ['doubler.cpp']
inc = include_directories('.')

libapp = library('libapp',
    libapp_sources,
    include_directories : inc,
    dependencies : [fmt],
    install : true
)

libapp_test = executable('doubler_test',
    'doubler_test.cpp',
    include_directories : inc,
    dependencies : [catch2],
    link_with : [libapp]
)
test('libapp_test', libapp_test)
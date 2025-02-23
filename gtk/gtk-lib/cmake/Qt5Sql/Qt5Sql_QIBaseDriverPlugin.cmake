
add_library(Qt5::QIBaseDriverPlugin MODULE IMPORTED)


_populate_Sql_plugin_properties(QIBaseDriverPlugin RELEASE "sqldrivers/qsqlibase.dll" FALSE)

list(APPEND Qt5Sql_PLUGINS Qt5::QIBaseDriverPlugin)
set_property(TARGET Qt5::Sql APPEND PROPERTY QT_ALL_PLUGINS_sqldrivers Qt5::QIBaseDriverPlugin)
set_property(TARGET Qt5::QIBaseDriverPlugin PROPERTY QT_PLUGIN_TYPE "sqldrivers")
set_property(TARGET Qt5::QIBaseDriverPlugin PROPERTY QT_PLUGIN_EXTENDS "")
set_property(TARGET Qt5::QIBaseDriverPlugin PROPERTY QT_PLUGIN_CLASS_NAME "QIBaseDriverPlugin")

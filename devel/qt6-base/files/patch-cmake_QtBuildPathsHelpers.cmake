--- cmake/QtBuildPathsHelpers.cmake.orig	2024-08-08 08:58:52 UTC
+++ cmake/QtBuildPathsHelpers.cmake
@@ -101,7 +101,7 @@ function(qt_internal_setup_build_and_install_paths)
     if(QT_CONFIG_INSTALL_DIR)
         string(APPEND QT_CONFIG_INSTALL_DIR "/")
     endif()
-    string(APPEND QT_CONFIG_INSTALL_DIR ${__config_path_part})
+    string(APPEND QT_CONFIG_INSTALL_DIR "lib/cmake")
 
     set(QT_BUILD_DIR "${QT_BUILD_DIR}" PARENT_SCOPE)
     set(QT_INSTALL_DIR "${QT_INSTALL_DIR}" PARENT_SCOPE)

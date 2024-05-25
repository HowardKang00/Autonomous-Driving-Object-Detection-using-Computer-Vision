# CMake generated Testfile for 
# Source directory: /Users/howardkang/auto_car/src/yolobot/src/yolobot_control
# Build directory: /Users/howardkang/auto_car/build/yolobot_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/opt/homebrew/Frameworks/Python.framework/Versions/3.12/bin/python3.12" "-u" "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/run_test.py" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/copyright.xunit.xml" "--package-name" "yolobot_control" "--output-file" "/Users/howardkang/auto_car/build/yolobot_control/ament_copyright/copyright.txt" "--command" "/Users/howardkang/miniconda3/envs/ros2/bin/ament_copyright" "--xunit-file" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/Users/howardkang/auto_car/src/yolobot/src/yolobot_control" _BACKTRACE_TRIPLES "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;50;ament_package;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;0;")
add_test(flake8 "/opt/homebrew/Frameworks/Python.framework/Versions/3.12/bin/python3.12" "-u" "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/run_test.py" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/flake8.xunit.xml" "--package-name" "yolobot_control" "--output-file" "/Users/howardkang/auto_car/build/yolobot_control/ament_flake8/flake8.txt" "--command" "/Users/howardkang/miniconda3/envs/ros2/bin/ament_flake8" "--xunit-file" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/howardkang/auto_car/src/yolobot/src/yolobot_control" _BACKTRACE_TRIPLES "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_flake8/cmake/ament_flake8.cmake;63;ament_add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;50;ament_package;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;0;")
add_test(lint_cmake "/opt/homebrew/Frameworks/Python.framework/Versions/3.12/bin/python3.12" "-u" "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/run_test.py" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/lint_cmake.xunit.xml" "--package-name" "yolobot_control" "--output-file" "/Users/howardkang/auto_car/build/yolobot_control/ament_lint_cmake/lint_cmake.txt" "--command" "/Users/howardkang/miniconda3/envs/ros2/bin/ament_lint_cmake" "--xunit-file" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/howardkang/auto_car/src/yolobot/src/yolobot_control" _BACKTRACE_TRIPLES "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;50;ament_package;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;0;")
add_test(pep257 "/opt/homebrew/Frameworks/Python.framework/Versions/3.12/bin/python3.12" "-u" "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/run_test.py" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/pep257.xunit.xml" "--package-name" "yolobot_control" "--output-file" "/Users/howardkang/auto_car/build/yolobot_control/ament_pep257/pep257.txt" "--command" "/Users/howardkang/miniconda3/envs/ros2/bin/ament_pep257" "--xunit-file" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/howardkang/auto_car/src/yolobot/src/yolobot_control" _BACKTRACE_TRIPLES "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;50;ament_package;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;0;")
add_test(xmllint "/opt/homebrew/Frameworks/Python.framework/Versions/3.12/bin/python3.12" "-u" "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/run_test.py" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/xmllint.xunit.xml" "--package-name" "yolobot_control" "--output-file" "/Users/howardkang/auto_car/build/yolobot_control/ament_xmllint/xmllint.txt" "--command" "/Users/howardkang/miniconda3/envs/ros2/bin/ament_xmllint" "--xunit-file" "/Users/howardkang/auto_car/build/yolobot_control/test_results/yolobot_control/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/Users/howardkang/auto_car/src/yolobot/src/yolobot_control" _BACKTRACE_TRIPLES "/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/Users/howardkang/miniconda3/envs/ros2/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/Users/howardkang/miniconda3/envs/ros2/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;50;ament_package;/Users/howardkang/auto_car/src/yolobot/src/yolobot_control/CMakeLists.txt;0;")

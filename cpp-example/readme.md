
cov-configure --config config/config.xml --gcc --template
cov-build --config config/config.xml --dir idir --bazel bazel build //main:mem-defects
cov-analyze --dir idir


coverity capture -o capture.build.bazel=true -- bazel build //main:mem-defects
coverity analyze
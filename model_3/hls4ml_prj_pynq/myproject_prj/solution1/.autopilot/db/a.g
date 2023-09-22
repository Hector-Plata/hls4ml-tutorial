#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jovyan/hls4ml-tutorial/model_3/hls4ml_prj_pynq/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}

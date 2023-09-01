#!/bin/bash
PID=( $(ps axu|grep bin/main | grep -v grep | awk '{print $2}') )
watch -n .5 "cat /proc/${PID[0]}/sched |grep nr"

#!/bin/bash

LOG_DIR=./logs
make 2>&1 | tee $LOG_DIR/log
make run 2>&1 | tee -a $LOG_DIR/log
make clean 2>&1 | tee -a $LOG_DIR/log
make run 2>&1 | tee -a $LOG_DIR/log
make 2>&1 | tee -a $LOG_DIR/log
make run 2>&1 | tee -a $LOG_DIR/log
echo "output saved to logs/log"
exit

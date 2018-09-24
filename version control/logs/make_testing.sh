#!/bin/bash

LOG_DIR=./logs
make 2>&1 | tee $LOG_DIR/log
make run 2>&1 | tee -a $LOG_DIR/log
make clean 2>&1 | tee -a $LOG_DIR/log
make run 2>&1 | tee -a $LOG_DIR/log
make 2>&1 | tee -a $LOG_DIR/log
make run 2>&1 | tee -a $LOG_DIR/log
echo "output saved to logs/log"
if cmp $LOG_DIR/log $LOG_DIR/correct_output; then
  echo "Program output matches the correct output."
else
  echo "Program output does not match the correct output."
fi
exit

#!/bin/bash

counter=1

while true; do
    echo "Number: $counter"
    ((counter++))
    
    # Check condition at the end
    if [ $counter -gt 5 ]; then
        break
    fi
done   
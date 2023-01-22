#! /usr/bin/bash

read -p "Commit & New : " commit name
git add .
git commit -m "$commit"
git push

cp -- "template.cpp" "$name.cpp"
git add .
#!/bin/sh
#Add some more folders/files if needed
cd /p/st41
git add .
backup_dir=$(date +'%m/%d/%Y')
git commit -am "Zackyr made changes in repository ${backup_dir}"
git push
echo Press Enter...
read

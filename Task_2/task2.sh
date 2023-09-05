#!/usr/bin/bash
echo "Today: " `date`

function root_dir_tree() {
	root_dir="/"
    	echo -e "\nКорневая директория: $root_dir"

    	echo -e "\nВаша корневая директория содержит директории: "
    	for dir in "$root_dir"/* ; do
        	if [ -d "$dir" ]; then
            	echo "$dir"
        	fi
    	done
}

function search_files_by_name() {
	dir=/usr/lib
	name=qt
	find $dir -name *$name* -type f
}

function print_modified_format_of_data() {
	date=`date`
	upd_date=${date//:/}
	echo -e "\nToday(=normal format=): " `date`
	echo -e "Today(modified format): " $upd_date
}

function installed_packages() {
	dpkg -l | awk '{print $2}'
}

echo -e "\nscript 1 : "
root_dir_tree

echo -e "\nscript 2 :\n"
search_files_by_name

echo -e "\nscript 3 : "
print_modified_format_of_data

echo -e "\nscript 4 : "
installed_packages

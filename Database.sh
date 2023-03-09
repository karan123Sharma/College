#!/bin/bash

database_file="student.txt"

function createDatabase() {

    echo "Creating Database...."
    echo "" >>$database_file
    echo "Database Successfully Created "
    echo ""

}

function InsertData() {
    echo "Please Enter the Number of Records you wish to Enter"
    read num
    counter=1

    while [ $counter -le $num ]; do
        echo "Please Enter Student Name "
        read name
        echo "Please Enter Student Age "
        read Age
        echo " $name , $Age " >>$database_file
        counter=$(($counter + 1))
    done
    echo "Inserting Student Information "
    echo ""
}

function viewDatabase() {
    echo "Retrieving Information from DB"
    cat $database_file
    echo ""
}

createDatabase
InsertData
viewDatabase

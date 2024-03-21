import re
import os
import csv
import time

def format_date(raw_date):
    date_conversion_dict={
        "Jan":"01",
        "Feb":"02", 
        "Mar":"03", 
        "Apr":"04", 
        "May":"05", 
        "Jun":"06", 
        "Jul":"07", 
        "Aug":"08", 
        "Sep":"09", 
        "Oct":"10", 
        "Nov":"11", 
        "Dec":"12"
    }
    new_date = raw_date[8:10] + "." + date_conversion_dict[raw_date[4:7]]+ "."+ "2022"
    #print(new_date)  
    return new_date     
   

def main():
    
    
    error_file = "error_log.txt"

    ## ----- The below code was used to download the error log
    ## PLEASE NOTE THAT THE BELOW CODE CAN ONLY BE RUN IN THE var/log/apache2 DIRECTORY 
    """
    try:
        username = input("Enter your clamv user name to be used to login to get access log: ")
        #does this code have to change 
        command_str = "scp error_log "+username+"@10.72.1.14:~/public_html/ian/scripts"
        os.system(command_str)
        error_file = "error_log"
    except:
        print("Errror while sshing into clamv .")
        print("Error while fetching data")
        print("Accessing the file, error_log.txt, as default")
        time.sleep(2)
        exit() """
    
    #opening the error file as read only
    reading_error_file = open(error_file, 'r')
    #opening/creating the CSV file as write
    csv_file = open('error_result.csv', 'w')
    writer = csv.writer(csv_file)
    #creating the header
    header = ['IP', 'Time', 'Date', 'Error']
    writer.writerow(header)
    
    count = 0
    
    count_my_visit = 0
    while True:
        count += 1
        line = reading_error_file.readline()
        if not line:
            reading_error_file.close()
            csv_file.close()
            print("the number of line for my visit is ", count_my_visit)
            exit()
        
        if 'ikarmali' in line :
            row =[]
            count_my_visit += 1
            # IP
            row.append(re.findall(r'\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}', line)[0])
            # Time
            row.append(re.findall(r'\d{2}\:\d{2}\:\d{2}', line)[0])
            #date
            formatted_date = format_date(re.search('\[(.*?)\]', line).group(1)[0:10])
            row.append(formatted_date)         
            # ERROR
            line = line.split(" PHP ", 1)
            print(line[1])
            row.append(line[1])
            #inserting data into the csv file
            writer.writerow(row)


if __name__ == "__main__":
    main()
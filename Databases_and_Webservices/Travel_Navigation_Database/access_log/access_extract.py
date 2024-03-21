import re
import csv


#Please note for the filename (access_log) we used the following command below
#scp access_log ikarmali@10.72.1.14:~/public_html/ian/access_log
#The above command downloads the access log


#reading ip
def reader(filename):
    with open(filename, "r") as f:

        #grabbing the data containing ips
        karmali_m = [] #initialising a list of strings of the ips
        for line in f:
            for i in re.finditer('~ikarmali', line, re.S):
                karmali_m.append(line)

        # now store it in strin
        match_str = ''.join(karmali_m)

        #finding ip-address
        regexp = r'\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}'
        ips_list = re.findall(regexp, match_str)

        f.close() #close file
        return(ips_list)



###----Below the function are the same the only difference is regexp because of the format of access_log
###


def time_reader(filename):
    access = open(filename, "r")
    karmali_m = []
    
    for line in access:
        for i in re.finditer('~ikarmali', line, re.S):
            karmali_m.append(line)

    match_str = "".join(karmali_m)


    regexp = r"(?<=\[)(.*?)(?=\])"
    
    dates = re.findall(regexp, match_str)

    access.close()
    return(dates)


def request_reader(filename):
    with open(filename, "r") as access:
        karmali_m = []
        for line in access:
            for i in re.finditer('~ikarmali', line, re.S):
                karmali_m.append(line)

        match_str = "".join(karmali_m)

        regexp = r"(?<=POST )|(?<=GET ).*?(?= HTTP)"
        request = re.findall(regexp, match_str)     

        access.close()
        return request

        
        
def browser_reader(filename):
    with open(filename, "r") as access:
        karmali_m = []
        for line in access:
            for i in re.finditer('~ikarmali', line, re.S):
                karmali_m.append(line)
        
        match_str = "".join(karmali_m)

        regexp = r"(?<=\" \").*(?=\")"
        
        browsers = re.findall(regexp, match_str)


        access.close()
        return browsers
    

###-----    

def write_csv(ip_address_list, access_time_list, http_requests ,browser):
    with open("AccessLog_Output.csv", "w") as output:
        writer = csv.writer(output)
        
        header = ["IP", "Access Time", "HTTP Requests", "Browser"]
        writer.writerow(header)

        for index in range(0, len(browser)):
            writer.writerow((ip_address_list[index], access_time_list[index], http_requests[index], browser[index]))
    output.close()
    print("It was a success!")
    
if __name__ == "__main__":  
    write_csv(reader("access_log.txt"), time_reader("access_log.txt"), request_reader("access_log.txt") ,browser_reader("access_log.txt"))

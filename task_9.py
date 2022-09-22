import json, argparse, os, sys, requests, random, wget
URL = 'https://gist.githubusercontent.com/kvant666ubl/60b5de280e9ca257108a903bc7818e6d/raw/c07a9ea5f45ca26439eb7ef3cccdc45b76325195/poll.json'
file_name = "poll.json"
resp = wget.download(URL, file_name)
print(" -> download done!\n")
#sys.exit(0)
json_file = open(file_name) # .txt, .csv, .json, .cpp
str_json_file = json_file.read()

cli_object = argparse.ArgumentParser(description='This program for parse user json file and find the winner!')

cli_object.add_argument('-f', '--file', action='store', type=str, help='path to our local json file')
cli_object.add_argument('-l', '--link', action='store', type=str, help='url of file')

args = cli_object.parse_args()

file_name =  "poll.json"

# python3 test.py --file='poll.json' 
if (args.file != None):
    # print("args.file: ", args.file)
    file_name = args.file 
else:
    cli_object.print_help()
    #sys.exit(0)
json_file = open(file_name) # .txt, .csv, .json, .cpp
str_json_file = json_file.read()

json_data = json.loads(str_json_file)


usr_list = list(json_data)

identifier_list = list()

for usr in usr_list:
    usr_dict = dict(usr) # str -> dict

    identifier_list.append(usr_dict['id'])

winner_idx = random.randint(0, 9)

winner_usr = identifier_list[winner_idx]

print("User with id " + str(winner_usr) + " is winner!")

json_file.close()
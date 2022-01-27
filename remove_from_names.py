# be careful its case Sensitive

# also you can enter space in the string to remove to remove spaces ;)

# you can but limits by changing start and finish values

from ast import Return
import os


# function to remove a string from other string
def remove_in_string(toRemove, stringToEdit):
    stringToEdit = stringToEdit.replace(toRemove, "")
    return stringToEdit


files_dir = input("enter files location: ")
# Change those to decide editing start and finish
start = 0  # change this to change the start of the change
finish = 1000  # same as above but it changes the finish
names = os.listdir(files_dir)  # create a list of the file names in folder
remove = input("enter string to be removed: ")
for name in names:
    newName = remove_in_string(remove, name[start:finish])
    # to access the extension of the subs (FILE TYPE .srt)
    extSubs = name[-4:].upper()
    # extSubs = ".SUB" #COMMENT OR REMOVE COMMENT THIS IF YOU WANT TO CHANGE THE SUBTITLES extension OR NOT
    os.rename(files_dir + '\\' + name, files_dir +
              '\\' + name[:start] + newName + name[finish:])

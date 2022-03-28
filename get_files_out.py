from ast import Return


import os

######################################################################


# function to remove a string from other string


def remove_in_string(toRemove, stringToEdit):

    stringToEdit = stringToEdit.replace(toRemove, "")

    return stringToEdit


# function to get the parent folder of a folder


def parent_folder(stringToEdit):

    child = files_dir.rfind("\\")

    parent = files_dir[:child]

    return parent

# recurcive function
def parent_folder(stringToEdit):

    folders = os.listdir(folders_dir)
    child = folders_dir + '\\' + parent_folder(folders)
    try:
        
    
    except:
        return child
    child = files_dir.rfind("\\")


    parent = files_dir[:child]

    return parent

######################################################################


folders_dir = input("enter folder location: ")

folders = os.listdir(folders_dir)  # create a list of the file names in folder


for folder in folders:
    names = os.listdir(files_dir)  # create a list of the file names in folder
    for name in names:
        print("hello")
    # extSubs = ".SUB" #COMMENT OR REMOVE COMMENT THIS IF YOU WANT TO CHANGE THE SUBTITLES extension OR NOT

    os.rename(files_dir + '\\' + folder,)

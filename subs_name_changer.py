import os
x = 0      #to iterate through anime files (video files)
y = True    #to make sure not to exceed the anime list of files
anime = input("enter anime location: ")
subs = input("enter subtitles location: ")
animeNames = os.listdir(anime)  #create a list of file names in anime folder
subNames = os.listdir(subs)    #create a list of file names in subtitles folder
for subName in subNames:
    extSubs = subName[-4:].upper()            #to access the extension of the subs (FILE TYPE .srt)
    if extSubs == ".ASS" or extSubs == ".SUB" or extSubs == ".SRT":      #checking if file extension is for a subtitle file (you can add)
        
        while True:
            extVideo = (((animeNames[x])[-4:]).upper())
            if extVideo == (".MKV") or extVideo == (".MP4") or extVideo == (".FLV") or extVideo == (".AVI") or extVideo == (".MOV") or extVideo == (".WMV"):     #(ADD IF NEEDED) checking if file extension is for a VIDEO file
                break
            x += 1
            if x > (len(animeNames) - 1):
                x -= 1            #to not get an error for exceeding the animeNames list
                y = False          #to not do the same last file again
                break
        if y:
            #extSubs = ".SUB" #COMMENT OR REMOVE COMMENT THIS IF YOU WANT TO CHANGE THE SUBTITLES extension OR NOT
            os.rename(subs + '\\' + subName, subs + '\\' + animeNames[x][:-4] + extSubs)     #renameing the file without changing the extension (ext .srt)
            x += 1
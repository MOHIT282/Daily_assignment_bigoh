"""
Q: Write a function Boolean isValidURL(String url).
Input : str = “https://www.bigohtech.com/” 
Output : Yes 
Explanation : 
The above URL is a valid URL.
Input : str = “https:// www.bigohtech.com/” 
Output : No 
Explanation : 
Note that there is a space after https://, hence the URL is invalid. 
"""

import re

def isValidURL(url):

    if " " in url:
        return False
    
    pattern = u"\D+://www.\D+\.\D{2,3}/?"

    result = re.findall(pattern=pattern, string=url)
    # print(result)
    if result:
        return True
    else:
        return False


if __name__ == "__main__":

    url = "https://www.bigohtech.com"
    # url = input("Enter your url here : ")
    print(isValidURL(url))


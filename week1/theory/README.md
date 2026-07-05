mmodule 1 question 9 
Git Clone:
git clone is used to create a complete copy of a remote repository on your local computer. It downloads all the files, branches, and commit history. It is used when you are working with a repository for the first time.

Git Fetch:
git fetch downloads the latest changes from the remote repository but does not merge them into your current branch. It allows you to review the changes before updating your local code. It is used when you want to check for updates without modifying your current work.

Git Pull:
git pull downloads the latest changes from the remote repository and automatically merges them into your current branch. It is used when you want to update your local repository with the most recent changes.

module 1 question 10 
A .gitignore file is a special file used by Git to specify which files and folders should be ignored and not tracked in a repository. It helps prevent unnecessary files, such as compiled output, operating system files, and IDE configuration files, from being uploaded to GitHub.

Example .gitignore for an Arduino project:

# Compiled output files
*.hex
*.elf

# OS-specific files
.DS_Store
Thumbs.db

# IDE configuration folders
.vscode/
build/

This .gitignore excludes compiled files, operating system files, and IDE configuration folders, keeping the repository clean and organized.

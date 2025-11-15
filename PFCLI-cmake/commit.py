import os

tracked_extensions = str(input("Enter file extensions to track with Git LFS (comma-separated, e.g., .psd,.zip): "))
commit_msg = input("Enter your commit message: ")

if tracked_extensions != " ":
    os.system(f"""git lfs track {tracked_extensions}
    git add -A
    git commit -m {commit_msg}
    git push -u origin main""")
else:
    os.system(f"""git add -A
    git commit -m {commit_msg}
    git push -u origin main""")

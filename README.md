### This repo is adoption of cccc instrument (see readme.txt)

### Usage
```bash
$ docker run \
    -e "HOST_UID=${UID}" \
    -v "$(pwd):/app/repo" \
    --rm strangeducttape/cccc "./cccc.sh /app/root/some.cpp"
```
Creates `cccc.xml` in current dir
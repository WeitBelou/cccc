### This repo is adoption of cccc instrument (see readme.txt)

### Usage
```bash
$ docker run \
    -e "FILENAME=/app/cccc/cccc.h" \
    -e "HOST_UID=${UID}" \
    -v "$(pwd):/app/repo" --rm strangeducttape/cccc
```
Creates `cccc.xml` in current dir
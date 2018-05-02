### This repo is adoption of cccc instrument (see readme.txt)

### Usage
```bash
$ docker run \
    -e "HOST_UID=${UID}" \
    -v "$(pwd):/app/repo" \
    --rm strangeducttape/cccc "./cccc.sh"
```
Creates `cccc.xml` in current dir
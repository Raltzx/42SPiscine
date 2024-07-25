#!/bin/sh
id -Gn "$FT_USER" | tr ' ' ',' | tr '\n' ' ' | tr -d ' '


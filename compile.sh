#!/usr/bin/env bash

nix run nixpkgs#qmk -- compile -kb splitkb/kyria/rev3 -km robert

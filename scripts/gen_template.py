# This script will generate template files required to implement
# solutions under this repo

from argparse import ArgumentParser, ArgumentTypeError
from pathlib import Path
import os

DEFAULT_SRC_LOCATION = "./src"

def is_dir(location: str) -> str:
    if os.path.isdir(location):
        return location
    raise ArgumentTypeError("Please specify a valid directory")

def get_grind_dirname(idx: int) -> str:
    return f"g{str(idx)}"

def make_dir(location: str) -> None:
    try:
        os.makedirs(location)
    except FileExistsError:
        return

def make_grind_interface(grind: int, src_path: str) -> None:
    gd = get_grind_dirname(grind)
    grind_path = f"{src_path}/{gd}"
    try:
        with open(f"{grind_path}/g{str(grind)}.h", 'w+') as handle:
            lines = [
                f"class G{str(grind)}\n",
                "{\n",
                "public:\n"
                f"\t~G{str(grind)}() = default;\n",
                "};"
            ]
            handle.writelines(lines)
    except FileExistsError:
        return

def make_solution_interface(solution: int, grind: int, src_path: str) -> None:
    gd = get_grind_dirname(grind)
    grind_path = f"{src_path}/{gd}"
    try:
        with open(f"{grind_path}/s{str(solution)}.h", 'w+') as handle:
            lines = [
                f"#include <g{str(grind)}.h>\n\n",
                f"class S{str(solution)} : public G{str(grind)}\n",
                "{\n",
                "};"
            ]
            handle.writelines(lines)
    except FileExistsError:
        return

def make_solution_impl(solution: int, grind: int, src_path: str) -> None:
    gd = get_grind_dirname(grind)
    grind_path = f"{src_path}/{gd}"
    try:
        with open(f"{grind_path}/s{str(solution)}.cpp", 'w+') as handle:
            lines = [
                f"#include <s{str(solution)}.h>"
            ]
            handle.writelines(lines)
    except FileExistsError:
        return

def make_solution_cmake(solution: int, grind: int, src_path: str) -> None:
    gd = get_grind_dirname(grind)
    grind_path = f"{src_path}/{gd}"
    try:
        with open(f"{grind_path}/s{str(solution)}.cmake", 'w+') as handle:
            lines = [
                f"add_library(s{str(solution)}\n",
                f"\ts{str(solution)}.cpp\n",
                ")\n\n",
                f"target_include_directories(s{str(solution)} PUBLIC ${{CMAKE_CURRENT_SOURCE_DIR}})"
            ]
            handle.writelines(lines)
    except FileExistsError:
        return

def make_solution_readme(solution: int, grind: int, src_path: str) -> None:
    gd = get_grind_dirname(grind)
    grind_path = f"{src_path}/{gd}"
    try:
        with open(f"{grind_path}/s{str(solution)}.md", 'w+') as handle:
            lines = [
                "### Time Complexity\n\n",
                "TBA\n\n",
                "### Space Complexity\n\n",
                "TBA"
            ]
            handle.writelines(lines)
    except FileExistsError:
        return

def generate(grind: int, solution: int, src_path: str) -> None:
    gd = get_grind_dirname(grind)
    grind_path = f"{src_path}/{gd}"
    make_dir(grind_path)
    make_grind_interface(grind, src_path)
    make_solution_interface(solution, grind, src_path)
    make_solution_impl(solution, grind, src_path)
    make_solution_cmake(solution, grind, src_path)
    make_solution_readme(solution, grind, src_path)

def parse_args() -> ArgumentParser:
    parser = ArgumentParser(prog='gen-template')
    parser.add_argument("-g", "--grind", type=int, required=True)
    parser.add_argument("-s", "--solution", type=int, default=1)
    parser.add_argument("-p", "--src-path", type=is_dir, default=DEFAULT_SRC_LOCATION)
    return parser.parse_args().__dict__

if __name__ == '__main__':
    args = parse_args()
    generate(**args)
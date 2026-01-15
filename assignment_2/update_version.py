import os
import re
from pathlib import Path

# Get environment variable safely
def get_env_var(name):
    value = os.getenv(name)
    if not value:
        raise EnvironmentError(f"{name} is not set")
    return value

# Update version number inside a file
def update_file(file_path, pattern, replacement):
    content = file_path.read_text()
    updated = re.sub(pattern, replacement, content)
    file_path.write_text(updated)

def main():
    source_path = Path(get_env_var("SourcePath"))
    build_num = get_env_var("BuildNum")

    base_dir = source_path / "develop" / "global" / "src"

    update_file(
        base_dir / "SConstruct",
        r"point=\d+",
        f"point={build_num}"
    )

    update_file(
        base_dir / "VERSION",
        r"ADLMSDK_VERSION_POINT=\s*\d+",
        f"ADLMSDK_VERSION_POINT={build_num}"
    )

if __name__ == "__main__":
    main()
    print("Version update successfully")
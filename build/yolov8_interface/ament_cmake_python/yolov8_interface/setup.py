from setuptools import find_packages
from setuptools import setup

setup(
    name='yolov8_interface',
    version='0.0.0',
    packages=find_packages(
        include=('yolov8_interface', 'yolov8_interface.*')),
)
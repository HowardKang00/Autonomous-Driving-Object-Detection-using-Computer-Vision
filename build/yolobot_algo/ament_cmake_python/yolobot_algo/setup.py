from setuptools import find_packages
from setuptools import setup

setup(
    name='yolobot_algo',
    version='0.0.0',
    packages=find_packages(
        include=('yolobot_algo', 'yolobot_algo.*')),
)

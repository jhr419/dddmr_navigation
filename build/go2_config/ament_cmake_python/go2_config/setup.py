from setuptools import find_packages
from setuptools import setup

setup(
    name='go2_config',
    version='0.1.0',
    packages=find_packages(
        include=('go2_config', 'go2_config.*')),
)

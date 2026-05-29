from setuptools import find_packages
from setuptools import setup

setup(
    name='dddmr_sys_core',
    version='1.0.0',
    packages=find_packages(
        include=('dddmr_sys_core', 'dddmr_sys_core.*')),
)

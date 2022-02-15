import setuptools

NAME = "robotsmeco"
VERSION = "0.0.1"
AUTHORS = "Alejandro Astudillo, Ajay Sathya"
MAINTAINER_EMAIL = "alejandro.astudillovigoya@kuleuven.be"
DESCRIPTION = "A repository of robot models built with Pinocchio and CasADi"
KEYWORDS = "robot models pinocchio casadi"
URL = "https://gitlab.kuleuven.be/meco-software/robot-models-meco"
LICENSE = 'GNU LGPLv3'

setuptools.setup(
    name=NAME,
    version=VERSION,
    author=AUTHORS,
    author_email=MAINTAINER_EMAIL,
    description=DESCRIPTION,
    keywords=KEYWORDS,
    license=LICENSE,
    long_description=open('README.md').read(),
    long_description_content_type="text/markdown",
    url=URL,
    packages=setuptools.find_packages(),
    include_package_data=True,
    install_requires=[
        'casadi>=3.4,<4.0',
    ],
    classifiers=[
        "Development Status :: 1 - Planning",
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: GNU Lesser General Public License v3 (LGPLv3)",
        "Operating System :: OS Independent",
        "Topic :: Scientific/Engineering"
    ],
    python_requires='>=3.6',
)

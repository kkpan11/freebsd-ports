PORTNAME=	dvc
DISTVERSION=	0.30.1
PORTREVISION=	7
CATEGORIES=	science python
MASTER_SITES=	PYPI

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Git for data scientists: manage code and data together
WWW=		https://dvc.org/

LICENSE=	APACHE20

DEPRECATED=	Depends on expired math/py-grandalf
EXPIRATION_DATE=2025-06-01

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}appdirs>=1.4.3:devel/py-appdirs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}asciimatics>=1.10.0:devel/py-asciimatics@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorama>=0.3.9:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}configobj>=5.0.6:devel/py-configobj@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}configparser>=3.5.0:devel/py-configparser@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}distro>=1.3.0:sysutils/py-distro@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}future>=0.16.0:devel/py-future@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gitpython>=2.1.8:devel/py-gitpython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}grandalf>=0.7:math/py-grandalf@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jsonpath-rw>0:devel/py-jsonpath-rw@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}nanotime>=0.5.2:devel/py-nanotime@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}networkx>=2.1:math/py-networkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ply>=3.9:devel/py-ply@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyasn1>=0.4.1:devel/py-pyasn1@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyyaml>=3.12:devel/py-pyyaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.18.4:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}schema>=0.6.7:devel/py-schema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zc.lockfile>0:devel/py-zc.lockfile@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist noflavors

NO_ARCH=	yes

.include <bsd.port.mk>

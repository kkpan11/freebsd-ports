PORTNAME=	libarchive-c
DISTVERSION=	5.3
CATEGORIES=	archivers python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S/-/_/}-${DISTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Python interface to libarchive
WWW=		https://github.com/Changaco/python-libarchive-c

LICENSE=	LGPL20+
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		python
USE_PYTHON=	autoplist distutils pytest

NO_ARCH=	yes

.include <bsd.port.mk>

PORTNAME=	adns
DISTVERSION=	1.4
PORTREVISION=	1
DISTVERSIONSUFFIX=	-py1
CATEGORIES=	dns python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python module to resolve IPs to host names
WWW=		https://github.com/trolldbois/python3-adns/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/GPL

LIB_DEPENDS=	libadns.so:dns/adns

USES=		localbase python
USE_PYTHON=	autoplist distutils

post-patch:
	@${REINPLACE_CMD} -e 's|1.4-py1|1.4|g' ${WRKSRC}/setup.py

.include <bsd.port.mk>

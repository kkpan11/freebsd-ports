PORTNAME=	coreapi
DISTVERSION=	2.3.3
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Python client library for Core API
WWW=		https://github.com/core-api/python-client

LICENSE=	BSD2CLAUSE

DEPRECATED=	Upstream archived the repository. Please use devel/py-openapi-core instead
EXPIRATION_DATE=2025-06-30

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}coreschema>0:devel/py-coreschema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}itypes>0:devel/py-itypes@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}uritemplate>0:net/py-uritemplate@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>

PORTNAME=	django-treebeard
DISTVERSION=	4.7.1
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Efficient tree implementations for Django
WWW=		https://github.com/django-treebeard/django-treebeard

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django42>=3.2:www/py-django42@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-django>=4.0:devel/py-pytest-django@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils pytest

TEST_ENV=	DATABASE_ENGINE=sqlite

NO_ARCH=	yes
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS
DOCS_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django42>=2.2:www/py-django42@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}graphviz>0:graphics/py-graphviz@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}sphinx>=0,1:textproc/py-sphinx@${PY_FLAVOR}
DOCS_VARS=		PYDISTUTILS_BUILD_TARGET+="build_sphinx -a -E"

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@(cd ${WRKSRC}/build/sphinx/html && \
	${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR} \
		"! -name .buildinfo -and ! -name objects.inv")

.include <bsd.port.mk>

PORTNAME=	ucpp
PORTVERSION=	1.3.2
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel

MAINTAINER=	crees@FreeBSD.org
COMMENT=	C preprocessor and lexer
WWW=		https://code.google.com/archive/p/ucpp/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

GH_ACCOUNT=	lpsantil
GH_TAGNAME=	31b719e
USE_GITHUB=	yes

PLIST_FILES=	bin/ucpp share/man/man1/ucpp.1.gz
USES=		gmake

PIE_UNSAFE=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1/

.include <bsd.port.mk>

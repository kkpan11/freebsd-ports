PORTNAME=	ifile
PORTVERSION=	1.3.8
PORTREVISION=	1
CATEGORIES=	mail textproc
MASTER_SITES=	http://people.csail.mit.edu/jrennie/ifile/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application of machine learning to e-mail filtering
WWW=		https://people.csail.mit.edu/jrennie/ifile/

LICENSE=	GPLv2

DEPRECATED=	Deprecated upstream
EXPIRATION_DATE=2025-04-30

USES=		gmake
GNU_CONFIGURE=	yes
USE_CSTD=	gnu89

PLIST_FILES=	bin/ifile \
		share/man/man1/ifile.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ifile ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/ifile.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>

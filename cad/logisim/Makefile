PORTNAME=	logisim
PORTVERSION=	2.7.1
CATEGORIES=	cad education java
MASTER_SITES=	SF/circuit/2.7.x/2.7.1/
DISTNAME=	${PORTNAME}-generic-${PORTVERSION}
EXTRACT_SUFX=	.jar
EXTRACT_ONLY=

MAINTAINER=	javad.kouhi@gmail.com
COMMENT=	Educational tool for designing and simulating logic circuits
WWW=		http://ozark.hendrix.edu/~burch/logisim/

LICENSE=	GPLv2

USES=		java

NO_BUILD=	yes

PLIST_FILES=	${DATADIR_REL}/${PORTNAME}-generic-${PORTVERSION}${EXTRACT_SUFX} \
		bin/${PORTNAME}

DESKTOP_ENTRIES="Logisim" "${COMMENT}" "" "${PORTNAME}" "" false

do-extract:
	${MKDIR} ${WRKSRC}
	${CP} ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX} ${WRKSRC}
	${ECHO_CMD} -e "#!/bin/sh\nexec ${JAVA} -jar ${DATADIR}/${DISTNAME}${EXTRACT_SUFX}" > ${WRKSRC}/${PORTNAME}

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/${DISTNAME}${EXTRACT_SUFX} ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

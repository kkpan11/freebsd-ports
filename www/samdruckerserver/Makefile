PORTNAME=	samdrucker
PORTVERSION=	0.2.7
CATEGORIES=	www
PKGNAMESUFFIX=	server

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Installs the server side of SamDrucker
WWW=		https://github.com/dlangille/SamDrucker

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		apache php

USE_PHP=	pdo_pgsql

NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	dlangille
GH_PROJECT=	SamDrucker

SUB_FILES=	samdrucker.conf.sample

PLIST_SUB=	ETCDIR="${ETCDIR}" \
		DATADIR="${DATADIR}"

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${MKDIR} ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${PREFIX}/${APACHEETCDIR}/Includes
	${INSTALL_SCRIPT} ${WRKSRC}/servers/php/samdrucker.php ${STAGEDIR}${WWWDIR}
	${INSTALL_DATA} ${WRKSRC}/servers/php/samdrucker.conf.sample ${STAGEDIR}${ETCDIR}/samdruckerserver.conf.sample
	${INSTALL_DATA} ${WRKDIR}/samdrucker.conf.sample ${STAGEDIR}/${PREFIX}/${APACHEETCDIR}/Includes/samdruckerserver.conf.sample
	(cd ${WRKSRC} && ${COPYTREE_SHARE} PostgreSQL ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>

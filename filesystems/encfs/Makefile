PORTNAME=	encfs
DISTVERSIONPREFIX=	v
DISTVERSION=	1.9.5
PORTREVISION=	11
CATEGORIES=	filesystems
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	fuz@FreeBSD.org
COMMENT=	Encrypted pass-through FUSE filesystem
WWW=		https://vgough.github.io/encfs/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake compiler:c++11-lib cpe fuse ssl
CPE_VENDOR=	${PORTNAME}_project
USE_GITHUB=	yes
GH_ACCOUNT=	vgough

OPTIONS_DEFINE=	BUNDLED_TINYXML MANPAGES NLS
OPTIONS_DEFAULT=	BUNDLED_TINYXML MANPAGES
OPTIONS_SUB=	yes

BUNDLED_TINYXML_DESC=	Use bundled TinyXML2 instead of textproc/tinyxml2
BUNDLED_TINYXML_CMAKE_BOOL=	USE_INTERNAL_TINYXML
BUNDLED_TINYXML_LIB_DEPENDS_OFF=	libtinyxml2.so:textproc/tinyxml2

MANPAGES_DESC=	Install manpages (requires Perl 5)
MANPAGES_USES=	perl5
MANPAGES_USE=	perl5=build

NLS_USES=	gettext
NLS_CMAKE_BOOL=	ENABLE_NLS

.include <bsd.port.mk>

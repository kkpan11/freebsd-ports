PORTNAME=	xbanish
DISTVERSIONPREFIX=	v
DISTVERSION=	1.8
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Banish the mouse cursor when typing
WWW=		https://github.com/jcs/xbanish/

LICENSE=	BSD3CLAUSE

USES=		xorg
USE_GITHUB=	yes
GH_ACCOUNT=	jcs
USE_XORG=	x11 xext xfixes xi xt

MAKE_ARGS=	X11BASE="${LOCALBASE}" MANDIR="${PREFIX}/share/man/man1"

PLIST_FILES=	bin/xbanish \
		share/man/man1/xbanish.1.gz

.include <bsd.port.mk>

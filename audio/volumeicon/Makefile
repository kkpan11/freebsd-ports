PORTNAME=	volumeicon
PORTVERSION=	0.5.1
PORTREVISION=	3
CATEGORIES=	audio

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Lightweight volume control for the systray
WWW=		https://github.com/Maato/volumeicon/

LICENSE=	GPLv3

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-oss=v3 \
		--with-oss-include-path=/usr/include/sys
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

USES=		autoreconf gmake gnome gettext pkgconfig xorg
USE_GNOME=	gtk30 intltool cairo gdkpixbuf
USE_XORG=	x11
USE_CSTD=	gnu99
USE_GITHUB=	yes
GH_ACCOUNT=	Maato

OPTIONS_DEFINE=		NLS NOTIFY
OPTIONS_DEFAULT=	NOTIFY
OPTIONS_SUB=		yes

NLS_USES=	gettext

NOTIFY_LIB_DEPENDS=	libnotify.so:devel/libnotify
NOTIFY_CONFIGURE_ENABLE=notify

pre-configure:
	cd ${WRKSRC} && ./autogen.sh

.include <bsd.port.mk>

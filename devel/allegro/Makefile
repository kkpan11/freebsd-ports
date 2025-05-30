PORTNAME=	allegro
DISTVERSION=	4.4.3.1
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	https://github.com/liballeg/allegro5/releases/download/${DISTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cross-platform library for games and multimedia programming
WWW=		https://liballeg.org/

LICENSE=	GIFTWARE
LICENSE_NAME=	Giftware
LICENSE_FILE=	${WRKSRC}/docs/txt/license.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

LIB_DEPENDS=	libogg.so:audio/libogg \
		libpng.so:graphics/png \
		libvorbis.so:audio/libvorbis

USES=		cmake gl localbase:ldflags pkgconfig xorg
USE_GL=		gl glu
USE_LDCONFIG=	yes
USE_XORG=	ice sm x11 xcursor xext xpm xxf86dga xxf86vm

CMAKE_ARGS=	-DDOCDIR="${DOCSDIR}"
CMAKE_ON=	WANT_LOGG
CMAKE_OFF=	WANT_EXAMPLES WANT_MODULES

# Wrong versioning upstream
PORTSCOUT=	ignore:1

INFO=		allegro
PLIST_SUB=	SHLIB_VER="${PORTVERSION:R}"
PORTDOCS=	*
PORTEXAMPLES=	*

OPTIONS_DEFINE=		DOCS EXAMPLES
OPTIONS_DEFAULT=	OSS
OPTIONS_MULTI=		AUDIO
OPTIONS_MULTI_AUDIO=	ALSA JACK OSS SNDIO
OPTIONS_SUB=	yes

ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib
ALSA_CMAKE_BOOL=	WANT_ALSA

JACK_LIB_DEPENDS=	libjack.so:audio/jack
JACK_CMAKE_BOOL=	WANT_JACK

OSS_CMAKE_BOOL=	WANT_OSS

SNDIO_LIB_DEPENDS=	libsndio.so:audio/sndio
SNDIO_CMAKE_BOOL=	WANT_SNDIO

post-patch:
	@${REINPLACE_CMD} -e 's|/allegro-$${ALLEGRO_VERSION}|| ; s|"info"|"${INFO_PATH}"|g ' \
		${WRKSRC}/docs/CMakeLists.txt
	@${REINPLACE_CMD} -e 's|<X11/extensions/xf86dga.h>|<X11/extensions/Xxf86dga.h>|' \
		${WRKSRC}/src/x/xdga2.c
	@${CP} ${FILESDIR}/sndio.c ${WRKSRC}/src/unix

post-patch-JACK-on:
	@${REINPLACE_CMD} -e 's|jack_client = jack_client_new(jack_client_name);|jack_client = jack_client_open(jack_client_name, (jack_options_t)0, NULL);|' \
		${WRKSRC}/src/unix/jack.c

post-install:
	${INSTALL_MAN} ${INSTALL_WRKSRC}/docs/man/*.3 ${STAGEDIR}${PREFIX}/share/man/man3/

post-install-EXAMPLES-on:
	@(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} demos ${STAGEDIR}${EXAMPLESDIR})
	${INSTALL_DATA} ${WRKSRC}/allegro.cfg ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>

PORTNAME=	nautilus-python
DISTVERSION=	1.2.3
PORTREVISION=	5
CATEGORIES=	x11-fm gnome python
MASTER_SITES=	GNOME

MAINTAINER=	daniel@shafer.cc
COMMENT=	Python nautilus bindings
WWW=		https://wiki.gnome.org/Projects/NautilusPython

BROKEN=		does not work with latest nautilus

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake gnome libtool localbase pathfix pkgconfig python \
		tar:xz
USE_GNOME=	cairo gdkpixbuf nautilus3 pygobject3
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	GTKDOC
OPTIONS_SUB=	yes

GTKDOC_MESON_TRUE=		gtk_doc
GTKDOC_DESC=			Build documentation
GTKDOC_BUILD_DEPENDS=		gtkdocize:textproc/gtk-doc
GTKDOC_CONFIGURE_ENABLE=	gtk-doc

.include <bsd.port.mk>

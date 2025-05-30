PORTNAME=	quilt
PORTVERSION=	0.67
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	SAVANNAH

MAINTAINER=	chalpin@cs.wisc.edu
COMMENT=	Collection of bash scripts to ease working with patch files
WWW=		https://savannah.nongnu.org/projects/quilt

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash:shells/bash \
		diffstat:textproc/diffstat \
		gawk:lang/gawk \
		gcp:sysutils/coreutils \
		gdiff:textproc/diffutils \
		ggrep:textproc/gnugrep \
		gpatch:devel/patch \
		gsed:textproc/gsed
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		formail:mail/procmail

USES=		desthack gmake perl5
NO_ARCH=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-sed=${LOCALBASE}/bin/gsed \
		--without-getopt \
		--with-patch=${LOCALBASE}/bin/gpatch \
		--with-diff=${LOCALBASE}/bin/gdiff \
		--with-grep=${LOCALBASE}/bin/ggrep

PORTDOCS=	README README.MAIL quilt.pdf

OPTIONS_DEFINE=	RPMBUILD DOCS NLS
OPTIONS_SUB=	yes
RPMBUILD_DESC=	rpmbuild support

RPMBUILD_BUILD_DEPENDS=	rpm:archivers/rpm4
RPMBUILD_RUN_DEPENDS=	rpm:archivers/rpm4
RPMBUILD_CONFIGURE_WITH=rpmbuild

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

DOCS_EXTRA_PATCHES_OFF=	${PATCHDIR}/extra-patch-Makefile.in

.include <bsd.port.options.mk>

.if !exists(${LOCALBASE}/sbin/sendmail)
PLIST_SUB+=	SENDMAIL=""
.else
PLIST_SUB+=	SENDMAIL="@comment "
.endif

post-extract:
	@${REINPLACE_CMD} -e 's|$$(docdir)/$$(PACKAGE)-$$(VERSION)|$$(docdir)/$$(PACKAGE)|g' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>

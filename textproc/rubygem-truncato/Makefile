PORTNAME=	truncato
PORTVERSION=	0.7.13
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Truncating HTML strings keeping a valid HTML markup
WWW=		https://github.com/jorgemanrubia/truncato

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-htmlentities>=4.3.1:textproc/rubygem-htmlentities \
		rubygem-nokogiri>=1.7.0:textproc/rubygem-nokogiri

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>

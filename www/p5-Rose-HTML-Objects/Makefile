PORTNAME=	Rose-HTML-Objects
PORTVERSION=	0.627
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object-oriented interfaces for HTML
WWW=		https://metacpan.org/release/Rose-HTML-Objects

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Clone-PP>=0:devel/p5-Clone-PP \
		p5-DateTime>=0.20:devel/p5-DateTime \
		p5-Email-Valid>=0:mail/p5-Email-Valid \
		p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-IO-String>=1.08:devel/p5-IO-String \
		p5-Image-Size>=0:graphics/p5-Image-Size \
		p5-Rose-DateTime>=0.532:devel/p5-Rose-DateTime \
		p5-Rose-Object>=0.854:devel/p5-Rose-Object \
		p5-Rose-URI>=0.021:net/p5-Rose-URI \
		p5-URI>=0:net/p5-URI
TEST_DEPENDS=	p5-Test-Memory-Cycle>=0:devel/p5-Test-Memory-Cycle

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

PORTSCOUT=	skipv:0.6061

.include <bsd.port.mk>

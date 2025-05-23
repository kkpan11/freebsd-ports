PORTNAME=	hmmer
DISTVERSION=	3.4
CATEGORIES=	biology
MASTER_SITES=	http://eddylab.org/software/hmmer/

MAINTAINER=	mzaki@e-mail.ne.jp
COMMENT=	Profile hidden Markov models for biological sequence analysis
WWW=		http://hmmer.org/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	aarch64 amd64 armv7 i386 powerpc powerpc64
ONLY_FOR_ARCHS_REASON=	requires NEON, SSE2 or AltiVec instructions

USES=		compiler:c11 gmake perl5 python:test shebangfix
USE_PERL5=	test
SHEBANG_FILES=	easel/devkit/*
SHEBANG_GLOB=	*.pl *.py

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
MAKE_ARGS=	V=1

TEST_TARGET=	check

OPTIONS_DEFINE=	DOCS EXAMPLES TEST

DOCFILES=	Userguide.pdf
EXAMPLES=	7LESS_DROME HBB_HUMAN MADE1.hmm MADE1.sto \
		Pkinase.hmm Pkinase.sto dna_target.fa fn3.hmm fn3.sto \
		globins4.hmm globins4.sto globins45.fa

TEST_BUILD_DEPENDS=	${PYTHON_VERSION}:lang/python${PYTHON_SUFFIX}
TEST_VARS=	use_perl5=build

post-build-TEST-on:	pre-test do-test

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/*

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCFILES:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${EXAMPLES:S,^,${WRKSRC}/tutorial/,} ${STAGEDIR}${EXAMPLESDIR}

pre-test:
	${FIND} ${WRKSRC} -type f \( -name Makefile -or -name sqc \) -exec ${GREP} -q 'python3 ' {} \; -print | ${XARGS} ${SED} -i.bak 's/python3 /${PYTHON_VERSION} /'

.include <bsd.port.mk>

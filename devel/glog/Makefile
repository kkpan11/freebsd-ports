PORTNAME=	glog
PORTVERSION=	0.7.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library of C++ classes for flexible logging
WWW=		https://github.com/google/glog

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgflags.so:devel/gflags \
		libunwind.so:devel/libunwind
TEST_DEPENDS=	googletest>=0:devel/googletest

USES=		cmake:testing compiler:c++14-lang

CMAKE_ARGS=	-DWITH_FUZZING=none \
		-DWITH_UNWIND=libunwind
CMAKE_OFF=	PRINT_UNSYMBOLIZED_STACK_TRACES \
		WITH_GMOCK \
		WITH_GTEST
CMAKE_ON=	BUILD_SHARED_LIBS \
		WITH_GFLAGS \
		WITH_PKGCONFIG \
		WITH_SYMBOLIZE \
		WITH_TLS
CMAKE_TESTING_ON=	\
		WITH_GMOCK \
		WITH_GTEST
CXXFLAGS_powerpc=	-D_CALL_SYSV
LDFLAGS+=	-lexecinfo
USE_CXXSTD=	c++14
USE_LDCONFIG=	yes

PLIST_SUB=	PORTVERSION=${PORTVERSION}

GH_ACCOUNT=	google
USE_GITHUB=	yes

.include <bsd.port.mk>

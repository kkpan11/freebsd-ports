PORTNAME=	forecast
PORTVERSION=	8.24.0
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Forecasting functions for time series and linear models
WWW=		https://cran.r-project.org/web/packages/forecast/

LICENSE=	GPLv3

RUN_DEPENDS=	R-cran-colorspace>0:graphics/R-cran-colorspace \
		R-cran-fracdiff>0:math/R-cran-fracdiff \
		R-cran-generics>=0.1.2:devel/R-cran-generics \
		R-cran-ggplot2>=2.2.1:graphics/R-cran-ggplot2 \
		R-cran-lmtest>0:finance/R-cran-lmtest \
		R-cran-magrittr>0:devel/R-cran-magrittr \
		R-cran-Rcpp>=0.11.0:devel/R-cran-Rcpp \
		R-cran-RcppArmadillo>=0.2.35:math/R-cran-RcppArmadillo \
		R-cran-timeDate>0:finance/R-cran-timeDate \
		R-cran-tseries>0:finance/R-cran-tseries \
		R-cran-urca>0:finance/R-cran-urca \
		R-cran-withr>0:devel/R-cran-withr \
		R-cran-zoo>0:math/R-cran-zoo

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>

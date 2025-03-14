--- ../nginx-sflow-module-f15c87f/ngx_http_sflow_module.c.orig	2017-10-16 17:39:14.000000000 -0400
+++ ../nginx-sflow-module-f15c87f/ngx_http_sflow_module.c	2025-02-04 16:15:53.466117000 -0500
@@ -8,9 +8,6 @@
 #include <ngx_http.h>
 #include <nginx.h>
 
-#if (NGX_THREADS)
-#include <ngx_thread.h>
-#endif
 
 #include "ngx_http_sflow_api.h"
 #include "ngx_http_sflow_config.h"
@@ -74,18 +71,10 @@
     /* keep log ptr for callbacks */
     ngx_log_t *log;
 
-#if (NGX_THREADS)
-    ngx_thread_mutex_t *mut;
-#define SFWB_LOCK(_s) ngx_thread_mutex_lock((_s)->mut, (_s)->log)
-#define SFWB_UNLOCK(_s) ngx_thread_mutex_unlock((_s)->mut, (_s)->log)
-#define SFWB_INC_CTR(_c) ngx_atomic_fetch_add(&(_c), 1)
-#define SFWB_COUNTDOWN(_c) (ngx_atomic_fetch_add(&(_c), -1) == 1)
-#else
 #define SFWB_LOCK(_s) /* no-op */
 #define SFWB_UNLOCK(_s) /* no-op */
 #define SFWB_INC_CTR(_c) (_c)++
 #define SFWB_COUNTDOWN(_c) (--(_c) == 0)
-#endif
 
     /* skip countdown is handled per-worker to reduce lock contention.
      * If all processes sample at 1:N it's the same as having only one
@@ -645,10 +634,6 @@
 {
     sm->random_seed  = ((sm->random_seed * 32719) + 3) % 32749;
     ngx_atomic_t next_skip = (sm->random_seed % ((2 * sm->sampling_rate) - 1)) + 1;
-#if (NGX_THREADS)
-    ngx_atomic_int_t test_skip = ngx_atomic_fetch_add(&sm->sflow_skip, next_skip);
-    return (test_skip + next_skip);
-#else
     sm->sflow_skip = next_skip;
     return next_skip;
 #endif
@@ -864,13 +849,6 @@
 {
     ngx_log_debug0(NGX_LOG_DEBUG_HTTP, cf->log, 0, "sflow: sfwb_init()");
 
-#if (NGX_THREADS)
-    /* a mutex to lock the sFlow agent when taking a sample (only needed if there
-     * is more that one worker thread - right now it seems like threads are not even
-     * an option in the configure script)
-     */
-    ngx_thread_mutex_create(sm->mut, cf->log);
-#endif
 
     /* look up some vars by name and cache the index numbers -- see ngx_http_variables.c */
     ngx_str_t str_uri = ngx_string("request_uri"); /* the "unparsed" variant */
